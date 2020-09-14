// This program generates a Sierpinski gasket
// It plots the 3-D Sierpinski Tetrahedron using colors in an easy to view way.

#ifdef __APPLE_CC__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <cstdlib>

// A three-dimensional point class.
// It allows you to reference points with x and y coordinates instead of array indices.
// also includes a midpoint function.
struct Point {
    GLfloat x, y, z;
    Point(GLfloat x, GLfloat y, GLfloat z) : x(x), y(y), z(z) {}
    Point midpoint(Point p) { return Point((x + p.x) / 2, (y + p.y) / 2, (z + p.z) / 2); }
};

// Handles reshape requests by setting the the viewport to exactly match the
// pixel coordinates, so we can draw in the whole window.
// Then sets up a simple perspective viewing volume to ensure that the pyramid will never
// be distorted when the window is reshaped.
void reshape(GLint w, GLint h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(100.0, GLfloat(w) / GLfloat(h), 10.0, 1500.0);
}

// Handles display requests.  All it has to do is clear the viewport because
// the real drawing is done during the idle callback.
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

// Draws the "next 500 points".  The function contains locally the definitions
// of the vertices and the current point as static objects so that their values
// are retained between calls.
void generateMorePoints() {

    // The tetrahedron has four vertices.  We also have to keep track of the
    // current point during the plotting.
    static Point vertices[4] = {
      Point(-250, -225, -200),
      Point(-150, -225, -700),
      Point(250, -225, -275),
      Point(0, 450, -500)
    };
    static Point lastPoint = vertices[0];

    // Here is the code to draw the "next 500 points".  
    // The closer the point is to the camera, the brighter it will be.
    glBegin(GL_POINTS);
    for (int i = 0; i <= 500; i++) {
        lastPoint = lastPoint.midpoint(vertices[rand() % 4]);
        GLfloat intensity = (700 + lastPoint.z) / 500.0;
        glColor3f(intensity, intensity, 1.0); //If you change this number you can change the color of the triangles.
        glVertex3f(lastPoint.x, lastPoint.y, lastPoint.z);
    }
    glEnd();
    glFlush();
}

// Performs application-specific initialization.  In this program we want to
// do depth buffering, which has to be explicitly enabled in OpenGL.
void init() {
    glEnable(GL_DEPTH_TEST);
}

// Initializes GLUT, the display mode, and main window; registers callbacks;
// does application initialization; enters the main event loop.
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Sierpinski Tetrahedron");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(generateMorePoints);
    init();
    glutMainLoop();
}