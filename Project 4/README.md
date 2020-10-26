To be able to run this project you will need to have a Linux system installed either on your machine or in a virtual box.
It needs to have a visual component as well so that the output is able to be displayed.
To be able to build and run the code you will need to have GL and GLU installed on your machine.
You can Install them using the following commands:
	sudo apt-get update
	sudo apt-get install libglu1-mesa-dev freeglut3-dev mesa-common-dev
Once you have those libraries installed you will need to build the code within the console.
To build the program you will need to be in the same directory as the source code is.
To build the code you can use the command g++ Project.cpp -o Project -lGL -lGLU -lglut
Then you can run the code by entering ./Project and hitting enter.
A window will then be created that contains the scene.