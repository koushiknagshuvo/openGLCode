#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

static float shift = 0;
float x, y, i;
float PI = 3.1416;
static float cloud1 = -20, ty = 0;


void boatMove()
{
    shift += 0.01;
    //if(shift > 200)
       // shift = 0;
    shift = (shift > 200) ? 0 : shift;
    glutPostRedisplay();
}

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

void cloudMove()
{
    cloud1 += .005;
    if (cloud1 > 200) {
        cloud1 = -20;
    }
    glutPostRedisplay();
}

void movingCloud()
{
    glColor3f(1, 1, 1);
    cloudMove();
    glPushMatrix();
    glTranslatef(cloud1, -12, 0);
    circle(3, 5, 5, 98);
    circle(3, 5, 8, 100);
    circle(3, 5, 12, 100);
    circle(3, 5, 12, 97);
    circle(3, 5, 7, 95);

    glTranslatef(cloud1, -8, 0);
    circle(3, 5, 5, 98);
    circle(3, 5, 8, 100);
    circle(3, 5, 12, 100);
    circle(3, 5, 12, 97);
    circle(3, 5, 7, 95);
    glPopMatrix();
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

// DT builldings 
void diu_DT_Building() {

    // Building staircase
    glBegin(GL_QUADS);
    glColor3ub(40, 55, 71);
    glVertex2d(20, 30);
    glVertex2d(50, 30);
    glVertex2d(50, 33);
    glVertex2d(20, 33);
    glEnd();

    // Building main body
    glBegin(GL_QUADS);
    glColor3ub(34, 139, 34);
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
    glColor3ub(32, 189, 0);
    glVertex2d(21, 33);
    glVertex2d(26, 33);
    glVertex2d(26, 70);
    glVertex2d(21, 70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(32, 189, 0);
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
    glColor3ub(0, 0, 255);
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
    glColor3ub(0, 0, 255);
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
    glColor3ub(0, 0, 255);
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

void  Building_midile_border_design() {
    // Building dor design

    glBegin(GL_QUADS);
    glColor3ub(248, 249, 249);
    glVertex2d(35, 33);
    glVertex2d(36, 33);
    glVertex2d(36, 41);
    glVertex2d(35, 41);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(12, 61, 2);
    glVertex2d(30, 33);
    glVertex2d(33, 33);
    glVertex2d(33, 38);
    glVertex2d(30, 38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(12, 61, 2);
    glVertex2d(38, 33);
    glVertex2d(41, 33);
    glVertex2d(41, 38);
    glVertex2d(38, 38);
    glEnd();

    // Building dor banar design

    glBegin(GL_QUADS);
    glColor3ub(245, 255, 250);
    glVertex2d(26, 41);
    glVertex2d(44, 41);
    glVertex2d(44, 43);
    glVertex2d(26, 43);
    glEnd();

}

// CSE Building
void CSE_Building() {
    // CSE Building design

    // Building staircase
    glBegin(GL_QUADS);
    glColor3ub(27, 38, 49);
    glVertex2d(55, 30);
    glVertex2d(74, 30);
    glVertex2d(74, 33);
    glVertex2d(55, 33);
    glEnd();

    // Building side  design (left)

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2d(56, 33);
    glVertex2d(62, 33);
    glVertex2d(62, 85);
    glVertex2d(56, 85);
    glEnd();


    // Building side design (right)
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2d(62, 33);
    glVertex2d(73, 33);
    glVertex2d(73, 90);
    glVertex2d(62, 90);
    glEnd();

}

void CSE_Building_rooptop() {
    // CSE Building rooftop design

    glBegin(GL_QUADS);
    glColor3ub(248, 249, 249);
    glVertex2f(55.4, 85);
    glVertex2d(62, 85);
    glVertex2d(62, 86.5);
    glVertex2f(55.4, 86.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(248, 249, 249);
    glVertex2f(60.5, 90);
    glVertex2d(74, 90);
    glVertex2d(74, 92);
    glVertex2f(60.5, 92);
    glEnd();

    // Building midil border design
    glBegin(GL_QUADS);
    glColor3ub(248, 249, 249);
    glVertex2f(61.5, 33);
    glVertex2f(62, 33);
    glVertex2f(62, 90);
    glVertex2f(61.5, 90);
    glEnd();
}

void CSE_Building_rightSide_design() {
    // CSE Building right side design

    glBegin(GL_QUADS);
    glColor3ub(248, 249, 249);
    glVertex2d(62, 45);
    glVertex2d(73, 45);
    glVertex2d(73, 47);
    glVertex2d(62, 47);
    glEnd();

    // door design
    glBegin(GL_QUADS);
    glColor3ub(248, 249, 249);
    glVertex2d(65, 33);
    glVertex2d(69, 33);
    glVertex2d(69, 40);
    glVertex2d(65, 40);
    glEnd();


}

void CSE_Building_leftSide_design() {
    // CSE Building left side design

    glBegin(GL_QUADS);
    glColor3ub(248, 249, 249);
    glVertex2d(56, 40);
    glVertex2d(62, 40);
    glVertex2d(62, 42);
    glVertex2d(56, 42);
    glEnd();


    //Door designs
    glBegin(GL_QUADS);
    glColor3ub(248, 249, 249);
    glVertex2d(59, 42);
    glVertex2d(60, 42);
    glVertex2d(60, 85);
    glVertex2d(59, 85);
    glEnd();

    //Door designs
    glBegin(GL_QUADS);
    glColor3ub(248, 249, 249);
    glVertex2f(57.5, 33);
    glVertex2d(59, 33);
    glVertex2d(59, 38);
    glVertex2f(57.5, 38);
    glEnd();
}

// trafice light design
void traffic_light_design() {
    // traffic light design
    glBegin(GL_QUADS);
    glColor3ub(208, 211, 212);
    glVertex2d(90, 38);
    glVertex2d(96, 38);
    glVertex2d(96, 70);
    glVertex2d(90, 70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(23, 32, 42);
    glVertex2f(92.5, 30);
    glVertex2f(93.5, 30);
    glVertex2f(93.5, 38);
    glVertex2f(92.5, 38);
    glEnd();


    // light 

    glColor3ub(233, 31, 9);
    circle(2, 4, 93, 65);

    glColor3ub(255, 165, 0);
    circle(2, 4, 93, 55);

    glColor3ub(35, 212, 0);
    circle(2, 4, 93, 45);

}

void tree() {
    // tree design
    glBegin(GL_QUADS);
    glColor3ub(23, 32, 42);
    glVertex2f(12.5, 30);
    glVertex2f(13.5, 30);
    glVertex2f(13.5, 42);
    glVertex2f(12.5, 42);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 208, 35);
    glVertex2f(8, 42);
    glVertex2f(18, 42);
    glVertex2f(13, 48);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 208, 35);
    glVertex2f(10, 44);
    glVertex2f(16, 44);
    glVertex2f(13, 75);
    glEnd();
    // tree1 end
    //tree2 start
    glBegin(GL_QUADS);
    glColor3ub(23, 32, 42);
    glVertex2f(5.5, 42);
    glVertex2f(6.5, 42);
    glVertex2f(6.5, 50);
    glVertex2f(5.5, 50);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 208, 35);
    glVertex2f(2, 50);
    glVertex2f(10, 50);
    glVertex2f(6, 55);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 208, 35);
    glVertex2f(4, 52);
    glVertex2f(8, 52);
    glVertex2f(6, 75);
    glEnd();
    //tree2 end

    //tree3 start
    glBegin(GL_QUADS);
    glColor3ub(23, 32, 42);
    glVertex2f(77.5, 30);
    glVertex2f(78.5, 30);
    glVertex2f(78.5, 42);
    glVertex2f(77.5, 42);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 208, 35);
    glVertex2f(74, 42);
    glVertex2f(82, 42);
    glVertex2f(77, 48);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 208, 35);
    glVertex2f(75, 44);
    glVertex2f(81, 43);
    glVertex2f(78, 78);
    glEnd();

}

void street_light_design() {
    // street light design
    glBegin(GL_QUADS);
    glColor3ub(23, 32, 42);
    glVertex2f(83.5, 20);
    glVertex2f(84.5, 20);
    glVertex2f(84.5, 45);
    glVertex2f(83.5, 45);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(23, 32, 42);
    glVertex2f(83.5, 45);
    glVertex2f(86, 45);
    glVertex2f(85, 49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(248, 249, 249);
    glVertex2f(85, 45);
    glVertex2f(86, 45);
    glVertex2f(86, 42);
    glVertex2f(85, 42);
    glEnd();
}

void boot_vartex() {
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(45 + shift, 20);
    glVertex2f(5 + shift, 20);
    glVertex2f(15 + shift, 10);
    glVertex2f(35 + shift, 10);

    glEnd();

    glColor3f(0.160, 0.658, 0.203);
    glBegin(GL_POLYGON);
    glVertex2f(25 + shift, 30);
    glVertex2f(25 + shift, 25);
    glVertex2f(17.943 + shift, 25.019);

    glEnd();

    // fourth regular shape is octagon
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(25 + shift, 25.0);
    glVertex2f(25 + shift, 20);
    glVertex2f(23 + shift, 20);
    glVertex2f(23 + shift, 25);

    glEnd();
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //DT building
    road();
    futpath();
    GreenFild();
    sky();
    movingCloud();
    diu_DT_Building();
    building_rooftop_box();
    Building_side_border_design_left();
    Building_side_border_design_Right();
    Building_midile_border_design();
    //cse building
    CSE_Building();
    CSE_Building_rooptop();
    CSE_Building_rightSide_design();
    CSE_Building_leftSide_design();

    //traffic light design
    traffic_light_design();
    tree();
    street_light_design();

    // রাস্তার পানি 
    glColor3ub(3, 144, 248);
    glBegin(GL_POLYGON);
    glVertex2f(0, 0);
    glVertex2f(0, 18);
    glVertex2f(150, 18);
    glVertex2f(150, 0);
    glEnd();

    boatMove();
    boot_vartex();

    glPushMatrix();

    // Draw moving boat





    glFlush();
}





void init(void)
{
    glClearColor(0, 0, 0, 0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
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