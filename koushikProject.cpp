#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>


void circle(GLfloat rx, GLfloat ry, GLfloat x, GLfloat y)
{
    int i = 0;
    float angle;
    GLfloat PI = 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (i = 0;i < 100;i++)
    {
        angle = 2 * PI * i / 100;
        glVertex2f(x + (cos(angle) * rx), y + (sin(angle) * ry));
    }
    glEnd();
}

void sky() {
    glBegin(GL_QUADS);
    glColor3ub(0, 206, 209);
    glVertex2d(0, 55);
    glVertex2d(100, 55);
    glVertex2d(100, 100);
    glVertex2d(0, 100);
    glEnd();

    //Sun 
    glColor3ub(255, 165, 0);
    circle(5, 9, 12, 90);


    //clouds

    glColor3ub(255, 250, 250);
    circle(3, 4, 30, 88);
    circle(2, 3, 34, 88);
    circle(2, 3, 32, 92);
    circle(1, 2, 25, 85);

    glColor3ub(255, 250, 250);
    circle(3, 4, 80, 88);
    circle(2, 3, 84, 88);
    circle(2, 3, 82, 92);
    circle(1, 2, 70, 85);
    circle(1, 2, 71, 86);
    circle(1, 2, 69, 85);


}

void GreenFild() {
    glBegin(GL_QUADS);
    glColor3ub(0, 139, 0);
    glVertex2d(0, 30);
    glVertex2d(100, 30);
    glVertex2d(100, 55);
    glVertex2d(0, 55);
    glEnd();
}

void futpath() {
    glBegin(GL_QUADS);
    glColor3ub(112, 128, 144);
    glVertex2d(0, 20);
    glVertex2d(100, 20);
    glVertex2d(100, 30);
    glVertex2d(0, 30);
    glEnd();
}

void road() {

    glBegin(GL_QUADS);
    glColor3ub(36, 36, 36);
    glVertex2d(0, 0);
    glVertex2d(100, 0);
    glVertex2d(100, 20);
    glVertex2d(0, 20);
    glEnd();

}


void diu_DT_Building() {

    // Building staircase
    glBegin(GL_QUADS);
    glColor3ub(64, 64, 64);
    glVertex2d(20, 30);
    glVertex2d(50, 30);
    glVertex2d(50, 33);
    glVertex2d(20, 33);
    glEnd();

    // Building main body
    glBegin(GL_QUADS);
    glColor3ub(0, 205, 102);
    glVertex2d(21, 33);
    glVertex2d(49, 33);
    glVertex2d(49, 70);
    glVertex2d(21, 70);
    glEnd();

    // Building rooftop

    glBegin(GL_QUADS);
    glColor3ub(255, 250, 250);
    glVertex2d(20, 70);
    glVertex2d(50, 70);
    glVertex2d(50, 80);
    glVertex2d(20, 80);
    glEnd();

    // Building side design


    glBegin(GL_QUADS);
    glColor3ub(0, 250, 154);
    glVertex2d(21, 33);
    glVertex2d(26, 33);
    glVertex2d(26, 70);
    glVertex2d(21, 70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 250, 154);
    glVertex2d(44, 33);
    glVertex2d(49, 33);
    glVertex2d(49, 70);
    glVertex2d(44, 70);
    glEnd();


}
void  Building_side_border_design_left() {
    // Building side border design (left)

    glBegin(GL_QUADS);
    glColor3ub(245, 255, 250);
    glVertex2d(21, 37);
    glVertex2d(26, 37);
    glVertex2d(26, 40);
    glVertex2d(21, 40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2d(21, 42);
    glVertex2d(26, 42);
    glVertex2d(26, 45);
    glVertex2d(21, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(245, 255, 250);
    glVertex2d(21, 55);
    glVertex2d(26, 55);
    glVertex2d(26, 58);
    glVertex2d(21, 58);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2d(21, 60);
    glVertex2d(26, 60);
    glVertex2d(26, 63);
    glVertex2d(21, 63);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(245, 255, 250);
    glVertex2d(21, 65);
    glVertex2d(26, 65);
    glVertex2d(26, 68);
    glVertex2d(21, 68);
    glEnd();
}

void  Building_side_border_design_Right() {
    // Building side border design (right)

    glBegin(GL_QUADS);
    glColor3ub(245, 255, 250);
    glVertex2d(44, 37);
    glVertex2d(49, 37);
    glVertex2d(49, 40);
    glVertex2d(44, 40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2d(44, 42);
    glVertex2d(49, 42);
    glVertex2d(49, 45);
    glVertex2d(44, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(245, 255, 250);
    glVertex2d(44, 55);
    glVertex2d(49, 55);
    glVertex2d(49, 58);
    glVertex2d(44, 58);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2d(44, 60);
    glVertex2d(49, 60);
    glVertex2d(49, 63);
    glVertex2d(44, 63);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(245, 255, 250);
    glVertex2d(44, 65);
    glVertex2d(49, 65);
    glVertex2d(49, 68);
    glVertex2d(44, 68);
    glEnd();


}

void building_rooftop_box() {
    glBegin(GL_QUADS);
    glColor3ub(34, 139, 34);
    glVertex2d(20, 70);
    glVertex2d(25, 70);
    glVertex2d(25, 75);
    glVertex2d(20, 75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(34, 139, 34);
    glVertex2d(25, 75);
    glVertex2d(30, 75);
    glVertex2d(30, 80);
    glVertex2d(25, 80);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(34, 139, 34);
    glVertex2d(30, 70);
    glVertex2d(35, 70);
    glVertex2d(35, 75);
    glVertex2d(30, 75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(34, 139, 34);
    glVertex2d(35, 75);
    glVertex2d(40, 75);
    glVertex2d(40, 80);
    glVertex2d(35, 80);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(34, 139, 34);
    glVertex2d(40, 70);
    glVertex2d(45, 70);
    glVertex2d(45, 75);
    glVertex2d(40, 75);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(34, 139, 34);
    glVertex2d(45, 75);
    glVertex2d(50, 75);
    glVertex2d(50, 80);
    glVertex2d(45, 80);
    glEnd();
}












void display(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    road();
    futpath();
    GreenFild();
    sky();
    diu_DT_Building();
    building_rooftop_box();
    Building_side_border_design_left();
    Building_side_border_design_Right();
    glFlush();
}









void init(void)
{
    glClearColor(0, 0, 0, 0);
    glOrtho(0, 100.0, 0, 100.0, 0, 100.0);
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1300, 600);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Night Mode: Cox's BazarTekhnaf Marine Drive");
    init();
    glutDisplayFunc(display);
    //	glutSpecialFunc(spe_key);//up,down,left......
    glutMainLoop();
    return 0;   /* ANSI C requires main to return int. */
}