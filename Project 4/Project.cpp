#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void wall()
{
	// Making a baige color for the wall
	glColor3f(0.85, 0.75, 0.49);
	// Setting the vertices for the object
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(0, 110);
		glVertex2f(0, 1000);
		glVertex2f(800, 1000);
		glVertex2f(800, 110);
		glVertex2f(0, 110);
	glEnd();	

	// Making the Base Board
	// Making a white color
	glColor3f(1, 1, 1);
	// Setting the vertices for the object
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(0, 150);
		glVertex2f(0, 165);
		glVertex2f(800, 165);
		glVertex2f(800, 150);
		glVertex2f(0, 150);
	glEnd();		
}


void floor()
{
	// Making a tile color
	glColor3f(0.96, 0.96, 0.77);
	// Setting the vertices for the object
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(0, 0);
		glVertex2f(0, 150);
		glVertex2f(800, 150);
		glVertex2f(800, 0);
		glVertex2f(0, 0);
	glEnd();
	
	// Making the bottom horizonatal line in tile
	// Making a black color
	glColor3f(0, 0, 0);
	// Setting the vertices for the object
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(0, 20);
		glVertex2f(0, 21);
		glVertex2f(800, 21);
		glVertex2f(800, 20);
		glVertex2f(0, 20);
	glEnd();

	// Making the middle horizonatal line in tile
	// Making a black color
	glColor3f(0, 0, 0);
	// Setting the vertices for the object
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(0, 100);
		glVertex2f(0, 101);
		glVertex2f(800, 101);
		glVertex2f(800, 100);
		glVertex2f(0, 100);
	glEnd();

	// Make the border betweent the floor and the wall. Top line for tile
	// Making a black color
	glColor3f(0, 0, 0);
	// Setting the vertices for the object
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(0, 150);
		glVertex2f(0, 151);
		glVertex2f(800, 151);
		glVertex2f(800, 150);
		glVertex2f(0, 150);
	glEnd();
	
	// Making the vertical line 1 in tile
	// Making a black color
	glColor3f(0, 0, 0);
	// Setting the vertices for the object
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(50, 0);
		glVertex2f(50, 151);
		glVertex2f(51, 151);
		glVertex2f(51, 0);
		glVertex2f(50, 0);
	glEnd();

	// Making the vertical line 2 in tile
	// Making a black color
	glColor3f(0, 0, 0);
	// Setting the vertices for the object
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(150, 0);
		glVertex2f(150, 151);
		glVertex2f(151, 151);
		glVertex2f(151, 0);
		glVertex2f(150, 0);
	glEnd();

	// Making the vertical line 3 in tile
	// Making a black color
	glColor3f(0, 0, 0);
	// Setting the vertices for the object
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(250, 0);
		glVertex2f(250, 151);
		glVertex2f(251, 151);
		glVertex2f(251, 0);
		glVertex2f(250, 0);
	glEnd();

	// Making the vertical line 4 in tile
	// Making a black color
	glColor3f(0, 0, 0);
	// Setting the vertices for the object
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(350, 0);
		glVertex2f(350, 151);
		glVertex2f(351, 151);
		glVertex2f(351, 0);
		glVertex2f(350, 0);
	glEnd();

	// Making the vertical line 5 in tile
	// Making a black color
	glColor3f(0, 0, 0);
	// Setting the vertices for the object
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(450, 0);
		glVertex2f(450, 151);
		glVertex2f(451, 151);
		glVertex2f(451, 0);
		glVertex2f(450, 0);
	glEnd();

	// Making the vertical line 6 in tile
	// Making a black color
	glColor3f(0, 0, 0);
	// Setting the vertices for the object
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(550, 0);
		glVertex2f(550, 151);
		glVertex2f(551, 151);
		glVertex2f(551, 0);
		glVertex2f(550, 0);
	glEnd();

	// Making the vertical line 7 in tile
	// Making a black color
	glColor3f(0, 0, 0);
	// Setting the vertices for the object
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(650, 0);
		glVertex2f(650, 151);
		glVertex2f(651, 151);
		glVertex2f(651, 0);
		glVertex2f(650, 0);
	glEnd();

	// Making the vertical line 8 in tile
	// Making a black color
	glColor3f(0, 0, 0);
	// Setting the vertices for the object
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(750, 0);
		glVertex2f(750, 151);
		glVertex2f(751, 151);
		glVertex2f(751, 0);
		glVertex2f(750, 0);
	glEnd();
}

void banners()
{
	// This creates the left banner
	glColor3f(1, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(75, 600);
		glVertex2f(75, 900);
		glVertex2f(150, 900);
		glVertex2f(150, 600);
		glVertex2f(75, 600);
	glEnd();

	// Bottom left half of scroll
	glColor3f(1, 0.84, 0.0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(65, 600);
		glVertex2f(65, 620);
		glVertex2f(75, 620);
		glVertex2f(75, 600);
		glVertex2f(65, 600);
	glEnd();
	// Bottom right half of scroll
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(160, 600);
		glVertex2f(160, 620);
		glVertex2f(150, 620);
		glVertex2f(150, 600);
		glVertex2f(150, 600);
	glEnd();
	// Top left half of scroll
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(65, 900);
		glVertex2f(65, 880);
		glVertex2f(75, 880);
		glVertex2f(75, 900);
		glVertex2f(65, 900);
	glEnd();
	// Top right half of scroll
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(150, 900);
		glVertex2f(150, 880);
		glVertex2f(160, 880);
		glVertex2f(160, 900);
		glVertex2f(150, 900);
	glEnd();	

	// This creates the right banner
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(650, 600);
		glVertex2f(650, 900);
		glVertex2f(725, 900);
		glVertex2f(725, 600);
		glVertex2f(650, 600);
	glEnd();

	// Bottom left half of scroll
	glColor3f(1, 0.84, 0.0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(640, 600);
		glVertex2f(640, 620);
		glVertex2f(650, 620);
		glVertex2f(650, 600);
		glVertex2f(640, 600);
	glEnd();
	// Bottom right half of scroll
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(725, 600);
		glVertex2f(725, 620);
		glVertex2f(735, 620);
		glVertex2f(735, 600);
		glVertex2f(725, 600);
	glEnd();
	// Top left half of scroll
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(640, 900);
		glVertex2f(640, 880);
		glVertex2f(650, 880);
		glVertex2f(650, 900);
		glVertex2f(640, 900);
	glEnd();
	// Top right half of scroll
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(725, 900);
		glVertex2f(725, 880);
		glVertex2f(735, 880);
		glVertex2f(735, 900);
		glVertex2f(725, 900);
	glEnd();
}

void dragon()
{
	// Outer Rim of picture frame
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(262.5, 600);
		glVertex2f(262.5, 900);
		glVertex2f(537.5, 900);
		glVertex2f(537.5, 600);
		glVertex2f(262.5, 600);
	glEnd();
	
	// Trim
	glColor3f(0.85, 0.65, 0.13);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(277.5, 615);
		glVertex2f(277.5, 885);
		glVertex2f(522.5, 885);
		glVertex2f(522.5, 615);
		glVertex2f(277.5, 615);
	glEnd();
	
	// Gold Box
	glColor3f(1.0, 0.84, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(282.5, 620);
		glVertex2f(282.5, 880);
		glVertex2f(517.5, 880);
		glVertex2f(517.5, 620);
		glVertex2f(282.5, 620);
	glEnd();
	
	// Dragon Box (where dragon will go)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(302.5, 640);
		glVertex2f(302.5, 860);
		glVertex2f(497.5, 860);
		glVertex2f(497.5, 640);
		glVertex2f(302.5, 640);
	glEnd();
}

void table()
{
	// Body of table
	glColor3f(0.25, 0.21, 0.16);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(170, 470);
		glVertex2f(170, 190);
		glVertex2f(630, 190);
		glVertex2f(630, 470);
		glVertex2f(170, 470);
	glEnd();
	
	// Left Cabinet Door
	glColor3f(0.25, 0.21, 0.16);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(210, 455);
		glVertex2f(210, 180);
		glVertex2f(390, 180);
		glVertex2f(390, 455);
		glVertex2f(210, 455);
	glEnd();
	
	// Inner Left Cabinet Door
	glColor3f(0.56, 0.56, 0.56);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(225, 440);
		glVertex2f(225, 195);
		glVertex2f(375, 195);
		glVertex2f(375, 440);
		glVertex2f(225, 440);
	glEnd();


	// Left hinge Block rgb(51%,42%,29%)
	glColor3f(0.51, 0.42, 0.29);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(190, 455);
		glVertex2f(190, 180);
		glVertex2f(210, 180);
		glVertex2f(210, 455);
		glVertex2f(190, 455);
	glEnd();

	// Right Cabinet Door
	glColor3f(0.25, 0.21, 0.16);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(590, 455);
		glVertex2f(590, 180);
		glVertex2f(410, 180);
		glVertex2f(410, 455);
		glVertex2f(590, 455);
	glEnd();
	
	// Inner Right Cabinet Door
	glColor3f(0.56, 0.56, 0.56);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(575, 440);
		glVertex2f(575, 195);
		glVertex2f(425, 195);
		glVertex2f(425, 440);
		glVertex2f(575, 440);
	glEnd();

	// Right hinge Block rgb(51%,42%,29%)
	glColor3f(0.51, 0.42, 0.29);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(590, 455);
		glVertex2f(590, 180);
		glVertex2f(610, 180);
		glVertex2f(610, 455);
		glVertex2f(590, 455);
	glEnd();
	
	// Leg 1 of table
	glColor3f(0.25, 0.21, 0.16);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(170, 190);
		glVertex2f(170, 40);
		glVertex2f(210, 40);
		glVertex2f(210, 190);
		glVertex2f(170, 190);
	glEnd();

	// Side of leg 1
	glColor3f(0.25, 0.21, 0.16);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(211, 190);
		glVertex2f(220, 190);
		glVertex2f(220, 50);
		glVertex2f(211, 40);
		glVertex2f(211, 190);
	glEnd();

	// Leg 2 of table
	glColor3f(0.25, 0.21, 0.16);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(590, 190);
		glVertex2f(590, 40);
		glVertex2f(630, 40);
		glVertex2f(630, 190);
		glVertex2f(590, 190);
	glEnd();

	// Side of leg 2
	glColor3f(0.25, 0.21, 0.16);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(580, 190);
		glVertex2f(589, 190);
		glVertex2f(589, 40);
		glVertex2f(580, 50);
		glVertex2f(580, 190);
	glEnd();

	// Bar between Legs
	glColor3f(0.25, 0.21, 0.16);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(210, 90);
		glVertex2f(210, 100);
		glVertex2f(590, 100);
		glVertex2f(590, 90);
		glVertex2f(210, 90);
	glEnd();

	// Top of bar (brown/black portion)
	glColor3f(0.25, 0.21, 0.16);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(210, 101);
		glVertex2f(210, 104);
		glVertex2f(590, 104);
		glVertex2f(590, 101);
		glVertex2f(210, 101);
	glEnd();

	// Top of bar (wood portion)
	glColor3f(0.79, 0.64, 0.45);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(212, 104);
		glVertex2f(218, 110);
		glVertex2f(582, 110);
		glVertex2f(588, 104);
		glVertex2f(212, 104);
	glEnd();
	
	// Apply Border to Left Cabinet Door (Left)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(210, 455);
		glVertex2f(210, 180);
		glVertex2f(211, 180);
		glVertex2f(211, 455);
		glVertex2f(210, 455);
	glEnd();

	// Apply Border to Left Cabinet Door (Right)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(389, 455);
		glVertex2f(389, 180);
		glVertex2f(390, 180);
		glVertex2f(390, 455);
		glVertex2f(389, 455);
	glEnd();

	// Apply Border to Left Cabinet Door (Bottom)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(210, 181);
		glVertex2f(210, 180);
		glVertex2f(390, 180);
		glVertex2f(390, 181);
		glVertex2f(210, 181);
	glEnd();

	// Apply Border to Left Cabinet Door (Top)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(210, 455);
		glVertex2f(210, 454);
		glVertex2f(390, 454);
		glVertex2f(390, 455);
		glVertex2f(210, 455);
	glEnd();

	// Apply Border to Right Cabinet Door (Left)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(410, 455);
		glVertex2f(410, 180);
		glVertex2f(411, 180);
		glVertex2f(411, 455);
		glVertex2f(410, 455);
	glEnd();

	// Apply Border to Right Cabinet Door (Right)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(589, 455);
		glVertex2f(589, 180);
		glVertex2f(590, 180);
		glVertex2f(590, 455);
		glVertex2f(589, 455);
	glEnd();

	// Apply Border to Right Cabinet Door (Bottom)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(410, 181);
		glVertex2f(410, 180);
		glVertex2f(590, 180);
		glVertex2f(590, 181);
		glVertex2f(410, 181);
	glEnd();

	// Apply Border to Right Cabinet Door (Top)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(410, 455);
		glVertex2f(410, 454);
		glVertex2f(590, 454);
		glVertex2f(590, 455);
		glVertex2f(410, 455);
	glEnd();
	
	// Add black line to give depth for leg 1
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(210, 190);
		glVertex2f(211, 190);
		glVertex2f(211, 40);
		glVertex2f(210, 40);
		glVertex2f(210, 190);
	glEnd();

	// Add black line to give depth for leg 2
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(589, 190);
		glVertex2f(590, 190);
		glVertex2f(590, 40);
		glVertex2f(589, 40);
		glVertex2f(589, 190);
	glEnd();

	// Add a black line to give depth for bar (Top Line)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(212, 100);
		glVertex2f(212, 101);
		glVertex2f(588, 101);
		glVertex2f(588, 100);
		glVertex2f(212, 100);
	glEnd();

	// Add a black line to give depth for bar (Left Line)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(212, 90);
		glVertex2f(212, 100);
		glVertex2f(213, 100);
		glVertex2f(213, 90);
		glVertex2f(212, 90);
	glEnd();

	// Add a black line to give depth for bar (Bottom Line)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(212, 89);
		glVertex2f(212, 90);
		glVertex2f(588, 90);
		glVertex2f(588, 89);
		glVertex2f(212, 89);
	glEnd();

	// Add a black line to give depth for bar (Right Line)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(587, 90);
		glVertex2f(587, 100);
		glVertex2f(588, 100);
		glVertex2f(588, 90);
		glVertex2f(587, 90);
	glEnd();

	// Table Top
	glColor3f(0.25, 0.21, 0.16);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(156, 470);
		glVertex2f(156, 455);
		glVertex2f(644, 455);
		glVertex2f(644, 470);
		glVertex2f(156, 470);
	glEnd();

	// Add a black line to give depth table top (Top Line)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(156, 470);
		glVertex2f(156, 471);
		glVertex2f(644, 471);
		glVertex2f(644, 470);
		glVertex2f(156, 470);
	glEnd();

	/*
	// Add a black line to give depth table top (Left Line)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2f(155, 455);
		glVertex2f(155, 470);
		glVertex2f(156, 470);
		glVertex2f(156, 455);
		glVertex2f(155, 455);
	glEnd();
	*/

	// Add a black line to give depth table top (Bottom Line)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(156, 455);
		glVertex2f(156, 456);
		glVertex2f(644, 456);
		glVertex2f(644, 455);
		glVertex2f(156, 455);
	glEnd();

	/*
	// Add a black line to give depth table top (Right Line)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2f(644, 455);
		glVertex2f(644, 470);
		glVertex2f(645, 470);
		glVertex2f(645, 455);
		glVertex2f(644, 455);
	glEnd();
	*/

	// Add a border for table top
	glColor3f(0.25, 0.21, 0.16);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(156, 471);
		glVertex2f(176, 510);
		glVertex2f(624, 510);
		glVertex2f(644, 471);
		glVertex2f(156, 471);
	glEnd();
	
	// Add a center for table top
	glColor3f(0.68, 0.63, 0.56);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(161, 471);
		glVertex2f(179, 508);
		glVertex2f(621, 508);
		glVertex2f(639, 471);
		glVertex2f(161, 471);
	glEnd();
	
	/*
	// Add a line in the center of table top (1) rgb(65%,62%,59%)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2f(214, 471);
		glVertex2f(232, 508);
		glVertex2f(233, 508);
		glVertex2f(215, 471);
		glVertex2f(214, 471);
	glEnd();

	// Add a line in the center of table top (2) rgb(65%,62%,59%)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2f(267, 471);
		glVertex2f(285, 508);
		glVertex2f(286, 508);
		glVertex2f(268, 471);
		glVertex2f(267, 471);
	glEnd();

	// Add a line in the center of table top (3) rgb(65%,62%,59%)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2f(320, 471);
		glVertex2f(338, 508);
		glVertex2f(339, 508);
		glVertex2f(321, 471);
		glVertex2f(320, 471);
	glEnd();

	// Add a line in the center of table top (4) rgb(65%,62%,59%)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2f(373, 471);
		glVertex2f(391, 508);
		glVertex2f(392, 508);
		glVertex2f(374, 471);
		glVertex2f(373, 471);
	glEnd();

	// Add a line in the center of table top (5) rgb(65%,62%,59%)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2f(426, 471);
		glVertex2f(444, 508);
		glVertex2f(445, 508);
		glVertex2f(427, 471);
		glVertex2f(426, 471);
	glEnd();

	// Add a line in the center of table top (6) rgb(65%,62%,59%)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2f(479, 471);
		glVertex2f(497, 508);
		glVertex2f(498, 508);
		glVertex2f(480, 471);
		glVertex2f(479, 471);
	glEnd();

	// Add a line in the center of table top (7) rgb(65%,62%,59%)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2f(532, 471);
		glVertex2f(550, 508);
		glVertex2f(551, 508);
		glVertex2f(533, 471);
		glVertex2f(532, 471);
	glEnd();

	// Add a line in the center of table top (8) rgb(65%,62%,59%)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2f(585, 471);
		glVertex2f(603, 508);
		glVertex2f(604, 508);
		glVertex2f(586, 471);
		glVertex2f(585, 471);
	glEnd();

	// Add a line in the center of table top (9) rgb(65%,62%,59%)
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2f(638, 471);
		glVertex2f(656, 508);
		glVertex2f(657, 508);
		glVertex2f(639, 471);
		glVertex2f(638, 471);
	glEnd();
	*/
}

void baskets()
{
	// Basket 1 left 
	glColor3f(0.69, 0.43, 0.30);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(222, 99);
		glVertex2f(222, 170);
		glVertex2f(266, 170);
		glVertex2f(266, 99);
		glVertex2f(222, 99);
	glEnd();

	// Basket 1 right 
	glColor3f(0.69, 0.43, 0.30);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(291, 99);
		glVertex2f(291, 170);
		glVertex2f(338, 170);
		glVertex2f(338, 99);
		glVertex2f(291, 99);
	glEnd();

	// Basket 1 center 
	glColor3f(0.69, 0.43, 0.30);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(222, 99);
		glVertex2f(222, 150);
		glVertex2f(338, 150);
		glVertex2f(338, 99);
		glVertex2f(222, 99);
	glEnd();

	// Basket 1 top 
	glColor3f(0.69, 0.43, 0.30);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(222, 165);
		glVertex2f(222, 170);
		glVertex2f(338, 170);
		glVertex2f(338, 165);
		glVertex2f(222, 165);
	glEnd();

	// Basket 2 left 
	glColor3f(0.69, 0.43, 0.30);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(340, 99);
		glVertex2f(340, 170);
		glVertex2f(387, 170);
		glVertex2f(387, 99);
		glVertex2f(340, 99);
	glEnd();

	// Basket 2 right 
	glColor3f(0.69, 0.43, 0.30);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(412, 99);
		glVertex2f(412, 170);
		glVertex2f(460, 170);
		glVertex2f(460, 99);
		glVertex2f(412, 99);
	glEnd();

	// Basket 2 center 
	glColor3f(0.69, 0.43, 0.30);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(340, 99);
		glVertex2f(340, 150);
		glVertex2f(460, 150);
		glVertex2f(460, 99);
		glVertex2f(340, 99);
	glEnd();

	// Basket 2 top 
	glColor3f(0.69, 0.43, 0.30);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(340, 165);
		glVertex2f(340, 170);
		glVertex2f(460, 170);
		glVertex2f(460, 165);
		glVertex2f(340, 165);
	glEnd();

	// Basket 3 left 
	glColor3f(0.69, 0.43, 0.30);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(462, 99);
		glVertex2f(462, 170);
		glVertex2f(509, 170);
		glVertex2f(509, 99);
		glVertex2f(462, 99);
	glEnd();

	// Basket 3 right 
	glColor3f(0.69, 0.43, 0.30);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(534, 99);
		glVertex2f(534, 170);
		glVertex2f(578, 170);
		glVertex2f(578, 99);
		glVertex2f(534, 99);
	glEnd();

	// Basket 3 center 
	glColor3f(0.69, 0.43, 0.30);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(462, 99);
		glVertex2f(462, 150);
		glVertex2f(578, 150);
		glVertex2f(578, 99);
		glVertex2f(462, 99);
	glEnd();

	// Basket 3 top 
	glColor3f(0.69, 0.43, 0.30);
	glBegin(GL_QUADS); //Creates a Quad object
		glVertex2f(462, 165);
		glVertex2f(462, 170);
		glVertex2f(578, 170);
		glVertex2f(578, 165);
		glVertex2f(462, 165);
	glEnd();
}

void ratStatue() 
{    
    //triangle tip
    glColor3f(1, 0.84, 0.0);
    glBegin(GL_TRIANGLES); //Creates a Triangle object
        glVertex2f(375, 510);
        glVertex2f(400, 540);
        glVertex2f(425, 510);
    glEnd();

    //base 4
    glColor3f(1, 0.84, 0.0);
    glBegin(GL_QUADS); //Creates a Quad object
        glVertex2f(372, 507);
        glVertex2f(372, 510);
        glVertex2f(428, 510);
        glVertex2f(428, 507);
        glVertex2f(372, 507);
    glEnd();

    //base 3
    glColor3f(1, 0.84, 0.0);
    glBegin(GL_QUADS); //Creates a Quad object
        glVertex2f(369, 504);
        glVertex2f(369, 507);
        glVertex2f(431, 507);
        glVertex2f(431, 504);
        glVertex2f(369, 504);
    glEnd();

    //base 2
    glColor3f(1, 0.84, 0.0);
    glBegin(GL_QUADS); //Creates a Quad object
        glVertex2f(366, 501);
        glVertex2f(366, 504);
        glVertex2f(434, 504);
        glVertex2f(434, 501);
        glVertex2f(366, 501);
    glEnd();

    //base 1
    glColor3f(1, 0.84, 0.0);
    glBegin(GL_QUADS); //Creates a Quad object
        glVertex2f(363, 498);
        glVertex2f(363, 501);
        glVertex2f(437, 501);
        glVertex2f(437, 498);
        glVertex2f(363, 498);
    glEnd();
}

void render() //This function is used to call all of the functions that house the objects we made using the vertices
{
	wall();

	floor();

	banners();
	
	dragon();
	
	table();
	
	baskets();

	ratStatue();
}

void Init()
{
	// Sets the initial background color
	glClearColor(0,0, 1, 0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	// Makes it so the screen can "snap"
	glOrtho(0.0, 800.0, 0.0, 1000.0, 0.0, 1.0);
}

void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	render(); // Calls the render fucntion which then creates all the objects in the scene
	glFlush();
	glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 1000); // Here we are setting the window size. Width: 800 Pixels, Height: 1000 Pixels.
    glutInitWindowPosition(100, 100); // This sets the windows relative position.
    glutCreateWindow("Project 4: Render Your Scene With Primitives"); // This creates the title for the window that we just created.
    glutDisplayFunc(myDisplay); 
    Init(); // Calls the Init function we created.
    glutMainLoop();
    return 0;
}