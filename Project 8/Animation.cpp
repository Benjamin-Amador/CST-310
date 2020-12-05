#include <GL/glut.h>  // GLUT, include glu.h and gl.h
 
// Here are where the global variables are being declared
char title[] = "3D Shapes with animation";
GLfloat anglePyramid = 0.0f;  // Rotational angle for pyramid
GLfloat angleCube = 0.0f;     // Rotational angle for the multicolored cube
GLfloat angleWhite = 0.0f;     // Rotational angle for white cube
GLfloat angleRed = 0.0f;     // Rotational angle for red cube
GLfloat angleBlue = 0.0f;     // Rotational angle for blue cube
GLfloat angleGreen = 0.0f;     // Rotational angle for green cube
int refresh = 5;        // refresh interval in milliseconds
 
// This will initialize the OpenGL Graphics
void initGL() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // We are making the background color black and opaque
   glClearDepth(1.0f);                  
   glEnable(GL_DEPTH_TEST);   
   glDepthFunc(GL_LEQUAL);    
   glShadeModel(GL_SMOOTH);   
   glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);  //This will give perspective corrections
}
 
void display() {
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear color and depth buffers
   glMatrixMode(GL_MODELVIEW);     
 
   // Render a color-cube consisting of 6 quads with different colors
   glLoadIdentity();                 // Reset the model-view matrix
   glTranslatef(0.0f, -1.0f, -7.0f);  // Move right and into the screen
   glRotatef(angleCube, 1.0f, 1.0f, 1.0f);  // Rotate about (1,1,1)-axis
 
   glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
      // Top face
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f( 1.0f, 1.0f, -1.0f);
      glVertex3f(-1.0f, 1.0f, -1.0f);
      glVertex3f(-1.0f, 1.0f,  1.0f);
      glVertex3f( 1.0f, 1.0f,  1.0f);
 
      // Bottom face
      glColor3f(1.0f, 0.5f, 0.0f);     // Orange
      glVertex3f( 1.0f, -1.0f,  1.0f);
      glVertex3f(-1.0f, -1.0f,  1.0f);
      glVertex3f(-1.0f, -1.0f, -1.0f);
      glVertex3f( 1.0f, -1.0f, -1.0f);
 
      // Front face
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f( 1.0f,  1.0f, 1.0f);
      glVertex3f(-1.0f,  1.0f, 1.0f);
      glVertex3f(-1.0f, -1.0f, 1.0f);
      glVertex3f( 1.0f, -1.0f, 1.0f);
 
      // Back face
      glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
      glVertex3f( 1.0f, -1.0f, -1.0f);
      glVertex3f(-1.0f, -1.0f, -1.0f);
      glVertex3f(-1.0f,  1.0f, -1.0f);
      glVertex3f( 1.0f,  1.0f, -1.0f);
 
      // Left face
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(-1.0f,  1.0f,  1.0f);
      glVertex3f(-1.0f,  1.0f, -1.0f);
      glVertex3f(-1.0f, -1.0f, -1.0f);
      glVertex3f(-1.0f, -1.0f,  1.0f);
 
      // Right face
      glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
      glVertex3f(1.0f,  1.0f, -1.0f);
      glVertex3f(1.0f,  1.0f,  1.0f);
      glVertex3f(1.0f, -1.0f,  1.0f);
      glVertex3f(1.0f, -1.0f, -1.0f);
   glEnd();  // End of drawing color-cube
 
   // Render a pyramid consists of 4 triangles
   glLoadIdentity();                  // Reset the model-view matrix
   glTranslatef(-3.25f, 0.0f, -6.0f);  // Move left and into the screen
   glRotatef(anglePyramid, 1.0f, 1.0f, 0.0f);  // Rotate about the (1,1,0)-axis
 
   glBegin(GL_TRIANGLES);           // Begin drawing the pyramid with 4 triangles
      // Front
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f( 0.0f, 1.0f, 0.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(-1.0f, -1.0f, 1.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(1.0f, -1.0f, 1.0f);
 
      // Right
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.0f, 1.0f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(1.0f, -1.0f, 1.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(1.0f, -1.0f, -1.0f);
 
      // Back
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.0f, 1.0f, 0.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(1.0f, -1.0f, -1.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(-1.0f, -1.0f, -1.0f);
 
      // Left
      glColor3f(1.0f,0.0f,0.0f);       // Red
      glVertex3f( 0.0f, 1.0f, 0.0f);
      glColor3f(0.0f,0.0f,1.0f);       // Blue
      glVertex3f(-1.0f,-1.0f,-1.0f);
      glColor3f(0.0f,1.0f,0.0f);       // Green
      glVertex3f(-1.0f,-1.0f, 1.0f);
   glEnd();   // Done drawing the pyramid
   
   // Render a pyramid consists of 4 triangles
   glLoadIdentity();                  // Reset the model-view matrix
   glTranslatef(3.25f, 0.0f, -6.0f);  // Move left and into the screen
   glRotatef(anglePyramid, 1.0f, 1.0f, 0.0f);  // Rotate about the (1,1,0)-axis
 
   glBegin(GL_TRIANGLES);           // Begin drawing the pyramid with 4 triangles
      // Front
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f( 0.0f, 1.0f, 0.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(-1.0f, -1.0f, 1.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(1.0f, -1.0f, 1.0f);
 
      // Right
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.0f, 1.0f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(1.0f, -1.0f, 1.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(1.0f, -1.0f, -1.0f);
 
      // Back
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.0f, 1.0f, 0.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(1.0f, -1.0f, -1.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(-1.0f, -1.0f, -1.0f);
 
      // Left
      glColor3f(1.0f,0.0f,0.0f);       // Red
      glVertex3f( 0.0f, 1.0f, 0.0f);
      glColor3f(0.0f,0.0f,1.0f);       // Blue
      glVertex3f(-1.0f,-1.0f,-1.0f);
      glColor3f(0.0f,1.0f,0.0f);       // Green
      glVertex3f(-1.0f,-1.0f, 1.0f);
   glEnd();   // Done drawing the pyramid
   
   ///////////////////////////////////////////////////// Top Cubes /////////////////////////////////////////////////////////
// Render a color-cube consisting of 6 quads
glLoadIdentity();                 // Reset the model-view matrix
glTranslatef(1.0f, 2.0f, -7.0f);  // Move right and into the screen
glRotatef(angleWhite, 0.0f, 1.0f, 0.0f);  // Rotate about (0,1,0)-axis

// small white cube
glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
      // Top face
      glColor3f(1.0f, 1.0f, 1.0f);     // White
      glVertex3f(0.5f, 0.5f, -0.5f);
      glVertex3f(-0.5f, 0.5f, -0.5f);
      glVertex3f(-0.5f, 0.5f,  0.5f);
      glVertex3f( 0.5f, 0.5f,  0.5f);
 
      // Bottom face
      glColor3f(1.0f, 1.0f, 1.0f);     // White
      glVertex3f(0.5f, -0.5f,  0.5f);
      glVertex3f(-0.5f, -0.5f,  0.5f);
      glVertex3f(-0.5f, -0.5f, -0.5f);
      glVertex3f(0.5f, -0.5f, -0.5f);
 
      // Front face 
      glColor3f(1.0f, 1.0f, 1.0f);     // White
      glVertex3f(0.5f,  0.5f, 0.5f);
      glVertex3f(-0.5f,  0.5f, 0.5f);
      glVertex3f(-0.5f, -0.5f, 0.5f);
      glVertex3f(0.5f, -0.5f, 0.5f);
 
      // Back face
      glColor3f(1.0f, 1.0f, 1.0f);     // White
      glVertex3f(0.5f, -0.5f, -0.5f);
      glVertex3f(-0.5f, -0.5f, -0.5f);
      glVertex3f(-0.5f,  0.5f, -0.5f);
      glVertex3f(0.5f,  0.5f, -0.5f);
 
      // Left face
      glColor3f(1.0f, 1.0f, 1.0f);     // White
      glVertex3f(-0.5f,  0.5f,  0.5f);
      glVertex3f(-0.5f,  0.5f, -0.5f);
      glVertex3f(-0.5f, -0.5f, -0.5f);
      glVertex3f(-0.5f, -0.5f,  0.5f);
 
      // Right face 
      glColor3f(1.0f, 1.0f, 1.0f);     // White
      glVertex3f(0.5f,  0.5f, -0.5f);
      glVertex3f(0.5f,  0.5f,  0.5f);
      glVertex3f(0.5f, -0.5f,  0.5f);
      glVertex3f(0.5f, -0.5f, -0.5f);
   glEnd();  // End of drawing color-cube

// Render a color-cube consisting of 6 quads
glLoadIdentity();                 // Reset the model-view matrix
glTranslatef(-1.0f, 2.0f, -7.0f);  // Move right and into the screen
glRotatef(angleRed, 0.0f, 1.0f, 0.0f);  // Rotate about (0,1,0)-axis

// Small red Cube
glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
      // Top face
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.5f, 0.5f, -0.5f);
      glVertex3f(-0.5f, 0.5f, -0.5f);
      glVertex3f(-0.5f, 0.5f,  0.5f);
      glVertex3f( 0.5f, 0.5f,  0.5f);
 
      // Bottom face
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.5f, -0.5f,  0.5f);
      glVertex3f(-0.5f, -0.5f,  0.5f);
      glVertex3f(-0.5f, -0.5f, -0.5f);
      glVertex3f(0.5f, -0.5f, -0.5f);
 
      // Front face
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.5f,  0.5f, 0.5f);
      glVertex3f(-0.5f,  0.5f, 0.5f);
      glVertex3f(-0.5f, -0.5f, 0.5f);
      glVertex3f(0.5f, -0.5f, 0.5f);
 
      // Back face
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.5f, -0.5f, -0.5f);
      glVertex3f(-0.5f, -0.5f, -0.5f);
      glVertex3f(-0.5f,  0.5f, -0.5f);
      glVertex3f(0.5f,  0.5f, -0.5f);
 
      // Left face
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(-0.5f,  0.5f,  0.5f);
      glVertex3f(-0.5f,  0.5f, -0.5f);
      glVertex3f(-0.5f, -0.5f, -0.5f);
      glVertex3f(-0.5f, -0.5f,  0.5f);
 
      // Right face (x = 1.0f)
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.5f,  0.5f, -0.5f);
      glVertex3f(0.5f,  0.5f,  0.5f);
      glVertex3f(0.5f, -0.5f,  0.5f);
      glVertex3f(0.5f, -0.5f, -0.5f);
   glEnd();  // End of drawing color-cube


   // Render a color-cube consisting of 6 quads
glLoadIdentity();                 // Reset the model-view matrix
glTranslatef(3.0f, 2.0f, -7.0f);  // Move right and into the screen
glRotatef(angleBlue, 1.0f, 0.0f, 0.0f);  // Rotate about (1,0,0)-axis

// small blue cube
glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
      // Top face
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(0.5f, 0.5f, -0.5f);
      glVertex3f(-0.5f, 0.5f, -0.5f);
      glVertex3f(-0.5f, 0.5f,  0.5f);
      glVertex3f( 0.5f, 0.5f,  0.5f);
 
      // Bottom face
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(0.5f, -0.5f,  0.5f);
      glVertex3f(-0.5f, -0.5f,  0.5f);
      glVertex3f(-0.5f, -0.5f, -0.5f);
      glVertex3f(0.5f, -0.5f, -0.5f);
 
      // Front face 
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(0.5f,  0.5f, 0.5f);
      glVertex3f(-0.5f,  0.5f, 0.5f);
      glVertex3f(-0.5f, -0.5f, 0.5f);
      glVertex3f(0.5f, -0.5f, 0.5f);
 
      // Back face
      glColor3f(0.0f, 0.0f, 1.0f);     // White
      glVertex3f(0.5f, -0.5f, -0.5f);
      glVertex3f(-0.5f, -0.5f, -0.5f);
      glVertex3f(-0.5f,  0.5f, -0.5f);
      glVertex3f(0.5f,  0.5f, -0.5f);
 
      // Left face
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(-0.5f,  0.5f,  0.5f);
      glVertex3f(-0.5f,  0.5f, -0.5f);
      glVertex3f(-0.5f, -0.5f, -0.5f);
      glVertex3f(-0.5f, -0.5f,  0.5f);
 
      // Right face 
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(0.5f,  0.5f, -0.5f);
      glVertex3f(0.5f,  0.5f,  0.5f);
      glVertex3f(0.5f, -0.5f,  0.5f);
      glVertex3f(0.5f, -0.5f, -0.5f);
   glEnd();  // End of drawing color-cube

   // Render a color-cube consisting of 6 quads
glLoadIdentity();                 // Reset the model-view matrix
glTranslatef(-3.0f, 2.0f, -7.0f);  // Move right and into the screen
glRotatef(angleGreen, 1.0f, 0.0f, 0.0f);  // Rotate about (1,0,0)-axis

// small green cube
glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
      // Top face
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(0.5f, 0.5f, -0.5f);
      glVertex3f(-0.5f, 0.5f, -0.5f);
      glVertex3f(-0.5f, 0.5f,  0.5f);
      glVertex3f( 0.5f, 0.5f,  0.5f);
 
      // Bottom face
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(0.5f, -0.5f,  0.5f);
      glVertex3f(-0.5f, -0.5f,  0.5f);
      glVertex3f(-0.5f, -0.5f, -0.5f);
      glVertex3f(0.5f, -0.5f, -0.5f);
 
      // Front face 
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(0.5f,  0.5f, 0.5f);
      glVertex3f(-0.5f,  0.5f, 0.5f);
      glVertex3f(-0.5f, -0.5f, 0.5f);
      glVertex3f(0.5f, -0.5f, 0.5f);
 
      // Back face
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(0.5f, -0.5f, -0.5f);
      glVertex3f(-0.5f, -0.5f, -0.5f);
      glVertex3f(-0.5f,  0.5f, -0.5f);
      glVertex3f(0.5f,  0.5f, -0.5f);
 
      // Left face
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(-0.5f,  0.5f,  0.5f);
      glVertex3f(-0.5f,  0.5f, -0.5f);
      glVertex3f(-0.5f, -0.5f, -0.5f);
      glVertex3f(-0.5f, -0.5f,  0.5f);
 
      // Right face 
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(0.5f,  0.5f, -0.5f);
      glVertex3f(0.5f,  0.5f,  0.5f);
      glVertex3f(0.5f, -0.5f,  0.5f);
      glVertex3f(0.5f, -0.5f, -0.5f);
   glEnd();  // End of drawing color-cube
   
 
   glutSwapBuffers();  // Swap the front and back frame buffers (double buffering)
 
   // Update the rotational angle after each display refresh
   anglePyramid += 0.2f; // Updated the angle of the pyramid
   angleCube -= 0.15f; // updates the angle of the cube
   angleWhite += 0.25f; // updates the angle of the white cube
   angleRed -= 0.25f; // updates the angle of the red cube
   angleBlue += 0.25f; // updates the angle of blue cube
   angleGreen -= 0.25f; // updates the angle of green cube
}
 

void timer(int value) {
   glutPostRedisplay();      // a function to redisplay the main display, this is what causes simulation
   glutTimerFunc(refresh, timer, 0); // This will call the timer function after the amount of milliseconds declared for refresh.
}
 

void reshape(GLsizei width, GLsizei height) {  // GLsizei for non-negative integer
   // Finds the aspect ratio of the new window size
   if (height == 0) height = 1;                // To prevent divide by 0
   GLfloat aspect = (GLfloat)width / (GLfloat)height;
 
   // Set the viewport to cover the new window
   glViewport(0, 0, width, height);
 
   glMatrixMode(GL_PROJECTION);  // Operate on the Projection matrix
   glLoadIdentity();             
   // Enable perspective projection with fovy, aspect, zNear and zFar
   gluPerspective(45.0f, aspect, 0.1f, 100.0f);
}
 
// GLUT will run as a console application starting with the main(). that is why everything needs to be called here
int main(int argc, char** argv) {
   glutInit(&argc, argv);            // This will initialize GLUT
   glutInitDisplayMode(GLUT_DOUBLE); // This will allow double buffered mode to be enabled
   glutInitWindowSize(640, 480);   // This will set the window's initial width & height
   glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
   glutCreateWindow(title);          // This will create the window with the tile we created with the global variables.
   glutDisplayFunc(display);       
   glutReshapeFunc(reshape);       
   initGL();                       // This will call the OpenGL initialization
   glutTimerFunc(0, timer, 0);     // This will call the timer func for the first time.
   glutMainLoop();                 // Enter the infinite event-processing loop
   return 0;
}
