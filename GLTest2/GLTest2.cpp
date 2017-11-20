// GLTest2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "glut.h"

void  myInit(void)

{

	glClearColor(1, 1, 1, 0.0);        //���ñ�����ɫΪ�ף�  

	//glColor3f(0.0f, 0.0f, 0.0f);         //���û�ͼ��ɫΪ�ڣ�  

	glPointSize(1.0);            //���õ��С��  

	glLineWidth(1.0);            //�����߿�  

	glMatrixMode(GL_PROJECTION);         //ѡ����ʵľ���  

	glLoadIdentity();

	gluOrtho2D(0.0, 500.0, 0.0, 500.0);        //���ô��ڴ�С��

}

void drawChessBoard(void)

{
	glTranslatef(250, 250, 0.0);//������ϵ�ƶ�����������
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 1.0);
	glRecti(20, 50, 100, 80);//������

	glColor3f(1.0, 0.0, 0.0);
	glTranslatef(-120.0, -40.0, 0.0);//ƽ������ϵ
	glRecti(20, 50, 100, 80);//������
	//glLoadIdentity();//�ָ�����ϵ
	//glTranslatef(250, 250, 0.0);//������ϵ�ƶ�����������
	glTranslatef(120.0, 40.0, 0.0);

	glColor3f(1.0, 0.0, 1.0);
	glRotatef(135.0, 0.0, 0.0, 1.0);//ѡת
	glRecti(20, 50, 100, 80);
	//glLoadIdentity();
	glRotatef(-135.0, 0.0, 0.0, 1.0);//�ָ�ԭ����ϵ
	glColor3f(0.0, 1.0, 0.0);
	glScalef(0.5, -1.0, 1.0);//����
	glRecti(20, 50, 100, 80);
	glColor3f(0, 0, 0); 
	//glLoadIdentity();
	glScalef(2, -1.0, 1.0);//�ָ�
	glColor3f(0.0, 0.0, 0.0);
	glRecti(0, -250, 1, 250);
	glRecti(-250, 0, 250, 1);

	//glRecti(20, 50, 100, 80);
	//glBegin(GL_LINES);
	//glVertex2i(0,100);
	glFlush();
/*
	glClear(GL_COLOR_BUFFER_BIT);         //������  

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

	glutInit(&argc, argv);           //��ʼ�����߰���  

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);     //������ʾģʽ��  

	glutInitWindowPosition(100, 100);        //���ô�������Ļ�ϵ�λ�ã�  

	glutInitWindowSize(500, 500);         //���ô��ڴ�С��  

	glutCreateWindow("test");          //����Ļ���ڣ�  

	glutDisplayFunc(drawChessBoard);        //ע���ػ�������  

	myInit();

	glutMainLoop();             //��������ѭ����

}


