// GLTest2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "glut.h"

void  myInit(void)

{

	glClearColor(1, 1, 1, 0.0);        //设置背景颜色为白；  

	//glColor3f(0.0f, 0.0f, 0.0f);         //设置绘图颜色为黑；  

	glPointSize(1.0);            //设置点大小；  

	glLineWidth(1.0);            //设置线宽；  

	glMatrixMode(GL_PROJECTION);         //选择合适的矩阵；  

	glLoadIdentity();

	gluOrtho2D(0.0, 500.0, 0.0, 500.0);        //设置窗口大小；

}

void drawChessBoard(void)

{
	glTranslatef(250, 250, 0.0);//把坐标系移动至窗口中心
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 1.0);
	glRecti(20, 50, 100, 80);//画矩形

	glColor3f(1.0, 0.0, 0.0);
	glTranslatef(-120.0, -40.0, 0.0);//平移坐标系
	glRecti(20, 50, 100, 80);//画矩形
	//glLoadIdentity();//恢复坐标系
	//glTranslatef(250, 250, 0.0);//把坐标系移动至窗口中心
	glTranslatef(120.0, 40.0, 0.0);

	glColor3f(1.0, 0.0, 1.0);
	glRotatef(135.0, 0.0, 0.0, 1.0);//选转
	glRecti(20, 50, 100, 80);
	//glLoadIdentity();
	glRotatef(-135.0, 0.0, 0.0, 1.0);//恢复原坐标系
	glColor3f(0.0, 1.0, 0.0);
	glScalef(0.5, -1.0, 1.0);//缩放
	glRecti(20, 50, 100, 80);
	glColor3f(0, 0, 0); 
	//glLoadIdentity();
	glScalef(2, -1.0, 1.0);//恢复
	glColor3f(0.0, 0.0, 0.0);
	glRecti(0, -250, 1, 250);
	glRecti(-250, 0, 250, 1);

	//glRecti(20, 50, 100, 80);
	//glBegin(GL_LINES);
	//glVertex2i(0,100);
	glFlush();
/*
	glClear(GL_COLOR_BUFFER_BIT);         //清屏；  

	glColor3f(0.6, 0.6, 0.6);

	glRecti(0.0, 0.0, 100.0, 100.0);

	glRecti(0.0, 200.0, 100.0, 300.0);

	glRecti(0.0, 400.0, 100.0, 500.0);

	glRecti(100.0, 100.0, 200.0, 200.0);

	glRecti(100.0, 300.0, 200.0, 400.0);

	glRecti(200.0, 0.0, 300.0, 100.0);

	glRecti(200.0, 200.0, 300.0, 300.0);

	glRecti(200.0, 400.0, 300.0, 500.0);

	glRecti(300.0, 100.0, 400.0, 200.0);

	glRecti(300.0, 300.0, 400.0, 400.0);

	glRecti(400, 0, 500, 100);

	glRecti(400, 200, 500, 300);

	glRecti(400, 400, 500, 500);

	glFlush();
*/
}

int main(int argc, char* argv[])

{
	FreeConsole();

	glutInit(&argc, argv);           //初始化工具包；  

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);     //设置显示模式；  

	glutInitWindowPosition(100, 100);        //设置窗口在屏幕上的位置；  

	glutInitWindowSize(500, 500);         //设置窗口大小；  

	glutCreateWindow("test");          //打开屏幕窗口；  

	glutDisplayFunc(drawChessBoard);        //注册重画函数；  

	myInit();

	glutMainLoop();             //进入永久循环；

}


