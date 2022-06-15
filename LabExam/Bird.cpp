#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
float x, y, i;
float PI = 3.1416;

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0, 0);
    glVertex2f(0.0f, 30.0f);
    glVertex2f(20.0f, 30.0f);
    glVertex2f(20.0f, 35.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0, 0);
    glVertex2f(20.0f, 35.0f);
    glVertex2f(20.0f, 40.0f);
    glVertex2f(0.0f, 40.0f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0, 0);
    glVertex2f(20.0f, 25.0f);
    glVertex2f(40.0f, 25.0f);
    glVertex2f(40.0f, 45.0f);
    glVertex2f(20.0f, 45.0f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0, 0);
    glVertex2f(25.0f, 5.0f);
    glVertex2f(70.0f, 5.0f);
    glVertex2f(70.0f, 30.0f);
    glVertex2f(25.0f, 30.0f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0, 0);
    glVertex2f(70.0f, 30.0f);
    glVertex2f(90.0f, 30.0f);
    glVertex2f(90.0f, 35.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 10, 0);
    glVertex2f(25.0f, 32.0f);
    glVertex2f(28.0f, 32.0f);
    glVertex2f(28.0f, 36.0f);
    glVertex2f(25.0f, 36.0f);

    glEnd();

    glFlush();
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Bird");
    init();
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}