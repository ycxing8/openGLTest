// GLTest2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "glut.h"

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glVertex2f(0, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);
	glEnd();
	glFlush();
}

int main(int argc, char **argv)
{
	FreeConsole();//¹Ø±Õ¿ØÖÆÌ¨
	glutInit(&argc, argv);
	glutCreateWindow("triangle");
	glutDisplayFunc(display);
	glutMainLoop();
    return 0;
}


