#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

static float tx = 30.0;
static float ty = 0.0;

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3f(1.0, 0, 0);
    glVertex2f(0.0f, 10.0f);
    glVertex2f(20.0f, 10.0f);
    glVertex2f(20.0f, 20.0f);
    glVertex2f(0.0f, 20.0f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0, 0);
    glVertex2f(0.0f, 20.0f);
    glVertex2f(10.0f, 20.0f);
    glVertex2f(10.0f, 40.0f);
    glVertex2f(0.0f, 40.0f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0, 0);
    glVertex2f(0.0f, 40.0f);
    glVertex2f(20.0f, 40.0f);
    glVertex2f(20.0f, 50.0f);
    glVertex2f(0.0f, 50.0f);

    glEnd();

    glPushMatrix();

    glTranslatef(tx, ty, 0);
    glColor3f(0.0, 1.0, 0);
    glRectf(-10.0, -10.0, 2.0, 10.0);
    glRectf(-1.0, -20.0, 10.0, 20.0);

    glPopMatrix();

    glFlush();
}

void spe_key()
{

    for (int i = 0; i < 5; i++)
    {
        tx -= 5;
        glutPostRedisplay();
    }
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
    glutCreateWindow("LabFinal_tusk2");
    init();
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}