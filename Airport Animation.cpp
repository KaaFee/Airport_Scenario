#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <GL/glut.h>
#include<math.h>
using namespace std;
float _cloudMove = 0.0f;
float _planeFlyingMove = 0.0f;
float _planeGroundMove = 0.0f;
float _planeAirbusA380MoveX = 0.0f;
float _planeAirbusA380MoveY = 60.0f;
float _FuelTruckMove = 0.0f;
float speedFuelTruck = 0.0f;
float speedPlaneGround = 1.11f;
float takeOffPlaneX = 0.0f;
float takeOffPlaneY = 0.0f;
float landingPlaneX = 0.0f;
float landingPlaneY = 0.0f;
int flagTakeOff = 0;
int flagLanding = 0;
float temp = 0.0f;
float temp2 = 1.2f;
float _moveRedCar = 0.0f;
float _angleRedCar = 0.0f;
float _moveBlueCar = 0.0f;
float _angleBlueCar = 0.0f;
float _moveShuttleBus1 = 0.0f;
float _angleShuttleBus1 = 0.0f;
float _angleShuttleBus2 = 0.0f;
float _moveBus2Left = 0.0f;
float _moveBus2Right = 0.0f;

//RGB colors

//Window Building Day
float a = 8.0;
float b = 98.0;
float c = 166.0;
//Sky
float d = 135;
float e = 245;
float f = 255;
//lamp
float g = 148;
float h = 121;
float i = 53;

//plane window
float j = 47;
float k = 53;
float l = 145;

//ground
float m = 168;
float n = 145;
float o = 103;


//======================== MD. SADMAN RAHMAN ===========================================
void AirportName(){
    int l,i;
    char st[] = "Shahjalal International Airport";

    l=strlen( st ); // see how many characters are in text string.

    glColor3ub(229, 255, 0);
    glRasterPos2f( 379, 530); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);

    }
    glPushMatrix();
    glTranslatef(1180.0f, 480.0f, 0.0f);


    glPushMatrix();
    glScalef(1.2f, 1.2f, 0.0f);
    glTranslatef(0.0f, 0.0f, 0.0f);
    glColor3ub(181, 181, 181);

    glFlush();
    glPopMatrix();

glPushMatrix();
}
void Sky(){             //F13
    glPushMatrix();
    glTranslatef(0.0f, -670.0f, 0.0f);
    glColor3ub(d, e, f);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,10000.0f);
    glVertex2f(10000.0f,10000.0f);
    glVertex2f(10000.0f,0.0f);
    glEnd();
    glFlush();

    glPopMatrix();
}

void building1(){       //F2
    glColor3ub(112, 138, 138);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,1000.0f);
    glVertex2f(190.0f,1000.0f);
    glVertex2f(190.0f,500.0f);
    glVertex2f(0.0f,500.0f);
    glEnd();

}

void building2(){       //F3
    glColor3ub(112, 138, 138);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,800.0f);
    glVertex2f(190.0f,800.0f);
    glVertex2f(190.0f,500.0f);
    glVertex2f(0.0f,500.0f);
    glEnd();
}

void building3(){      //F4
    glColor3ub(112, 138, 138);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,920.0f);
    glVertex2f(190.0f,920.0f);
    glVertex2f(190.0f,500.0f);
    glVertex2f(0.0f,500.0f);
    glEnd();
}
void window(){

    glScalef(0.2f, 0.2f, 0.0f);
    glColor3ub(a, b, c);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,228.0f);
    glVertex2f(418.0f,228.0f);
    glVertex2f(418.0f,0.0f);
    glVertex2f(0.0f,0.0f);
    glEnd();
    glFlush();

}
void backBuildings(){       //F5
glPushMatrix();
glTranslatef(0.0f, 420.0f, 0.0f);

    glPushMatrix();
    glTranslatef(0.0, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building1();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(47.5f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building2();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(95.0, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building3();
    glFlush();
    glPopMatrix();

    //=======================

    glPushMatrix();
    glTranslatef(142.5f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building1();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(190.0f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building2();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(237.5f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building3();
    glFlush();
    glPopMatrix();

    //=======================
    glPushMatrix();
    glTranslatef(285.0f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building1();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(332.0f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building2();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(379.5f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building3();
    glFlush();
    glPopMatrix();

    //===========================

    glPushMatrix();
    glTranslatef(427.0f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building1();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(474.5f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building2();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(522.0f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building3();
    glFlush();
    glPopMatrix();

    //=====================

    glPushMatrix();
    glTranslatef(569.5f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building1();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(617.0f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building2();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(664.5f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building3();
    glFlush();
    glPopMatrix();

    //=========================

    glPushMatrix();
    glTranslatef(712.0f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building1();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(759.5f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building2();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(807.0f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building3();
    glFlush();
    glPopMatrix();

    //=================

    glPushMatrix();
    glTranslatef(854.5f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building1();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(902.0f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building2();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(949.5f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building3();
    glFlush();
    glPopMatrix();

    //======================

    glPushMatrix();
    glTranslatef(997.0f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building1();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1044.5f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building2();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1092.0f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building3();
    glFlush();
    glPopMatrix();

    //==================

    glPushMatrix();
    glTranslatef(1139.5f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building1();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1187.0f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building2();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1234.5f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building3();
    glFlush();
    glPopMatrix();

    //===============

    glPushMatrix();
    glTranslatef(1282.0f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building1();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1329.5f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building2();
    glFlush();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1377.0f, 0.0f, 0.0f);
    glScalef(0.25f, 0.25f, 0.0f);
    building3();
    glFlush();
    glPopMatrix();

glPopMatrix();
}


void airportBuilding(){     //F7
    glPushMatrix();
    glTranslatef(930.0f, 490.0f, 0.0f);
    glScalef(0.4f, 0.3f, 0.0f);

    glPushMatrix();
    glScalef(1.7f, 0.56f, 0.0f);
    glTranslatef(0.0f, -670.0f, 0.0f);
    glColor3ub(m, n, o);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,1000.0f);
    glVertex2f(1400.0f,1000.0f);
    glVertex2f(1400.0f,0.0f);
    glEnd();
    glFlush();

    glPopMatrix();
    //=============main building
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
    glColor3ub(156, 20, 20);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,650.0f);
    glVertex2f(600.0f,650.0f);
    glVertex2f(600.0f,0.0f);
    glEnd();
    glPopMatrix();
glPopMatrix();
//=========================================WINDOWS
glPushMatrix();
 glTranslatef(-170.0f,80.0f, 0.0f);
    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(2800.0f, 800.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(2900.0f, 800.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3000.0f, 800.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3100.0f, 800.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3200.0f, 800.0f, 0.0f);
    window();
    glPopMatrix();

    //=================

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(2800.0f, 740.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(2900.0f, 740.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3000.0f, 740.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3100.0f, 740.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3200.0f, 740.0f, 0.0f);
    window();
    glPopMatrix();
    //=================

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(2800.0f, 680.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(2900.0f, 680.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3000.0f, 680.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3100.0f, 680.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3200.0f, 680.0f, 0.0f);
    window();
    glPopMatrix();

    //=================

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(2800.0f, 620.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(2900.0f, 620.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3000.0f, 620.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3100.0f, 620.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3200.0f, 620.0f, 0.0f);
    window();
    glPopMatrix();

glPopMatrix();

//==============================================SMALL BUILDING LEFT

glPushMatrix();
glTranslatef(100.0f, 475.0f, 0.0f);
glScalef(0.3f, 0.3f, 0.0f);

    //=============main building
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
    glColor3ub(11, 99, 11);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,650.0f);
    glVertex2f(600.0f,650.0f);
    glVertex2f(600.0f,0.0f);
    glEnd();
    glPopMatrix();
    glPopMatrix();
    //=========================================WINDOWS
    glPushMatrix();
    glScalef(0.8f, 0.8f, 0.3f);
    glTranslatef(-977.5f,230.0f, 0.0f);
    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(2800.0f, 800.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(2900.0f, 800.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3000.0f, 800.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3100.0f, 800.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3200.0f, 800.0f, 0.0f);
    window();
    glPopMatrix();

    //=================

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(2800.0f, 740.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(2900.0f, 740.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3000.0f, 740.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3100.0f, 740.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3200.0f, 740.0f, 0.0f);
    window();
    glPopMatrix();
    //=================

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(2800.0f, 680.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(2900.0f, 680.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3000.0f, 680.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3100.0f, 680.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3200.0f, 680.0f, 0.0f);
    window();
    glPopMatrix();

    //=================

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(2800.0f, 620.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(2900.0f, 620.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3000.0f, 620.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3100.0f, 620.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.4f, 0.7f, 0.0f);
    glTranslatef(3200.0f, 620.0f, 0.0f);
    window();
    glPopMatrix();

glPopMatrix();
}

void terminal(){        //F1


glPushMatrix();
glTranslatef(0.0f, 400.0f, 0.0f);
    glPushMatrix();                             //terminal building rectangle
    glTranslatef(0.0f, -43.0f, 0.0f);
    glScalef(0.5f, 0.25f, 0.0f);
    glColor3ub(232, 239, 250);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,980.0f);
    glVertex2f(2000.0f,980.0f);
    glVertex2f(2000.0f,500.0f);
    glVertex2f(0.0f,500.0f);
    glEnd();
    glFlush();
    glPopMatrix();
glPopMatrix();

glPushMatrix();
    glPushMatrix();                             //terminal windows
    glTranslatef(0.0f, 550.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(90.0f, 550.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(180.0f, 550.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(270.0f, 550.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(360.0f, 550.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(450.0f, 550.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(540.0f, 550.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(630.0f, 550.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(720.0f, 550.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(810.0f, 550.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(900.0f, 550.0f, 0.0f);
    window();
    glPopMatrix();

    //============================

        glPushMatrix();                             //terminal windows
    glTranslatef(0.0f, 495.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(90.0f, 495.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(180.0f, 495.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(270.0f, 495.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(360.0f, 495.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(450.0f, 495.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(540.0f, 495.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(630.0f, 495.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(720.0f, 495.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(810.0f, 495.0f, 0.0f);
    window();
    glPopMatrix();

    glPushMatrix();                             //terminal windows
    glTranslatef(900.0f, 495.0f, 0.0f);
    window();
    glPopMatrix();


glPopMatrix();


glPushMatrix();
    glPushMatrix();
    glTranslatef(500.0f, 500.0f, 0.0f);
    glScalef(0.2f, 0.2f, 0.0f);
    glColor3ub(240, 255, 255);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {

    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=700.0;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();

    //======

    glTranslatef(0.0f, 0.0f, 0.0f);
    glScalef(0.2f, 0.2f, 0.0f);
    glColor3ub(36, 97, 171);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {

    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=3200.0;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();
glPopMatrix();

glPushMatrix();
    glScalef(1.2f, 0.487f, 0.0f);
    glColor3ub(m, n, o);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,1000.0f);
    glVertex2f(1400.0f,1000.0f);
    glVertex2f(1400.0f,0.0f);
    glEnd();
    glFlush();

glPopMatrix();

}

void controlTower(){        //F6
glPushMatrix();
glTranslatef(0.0f, 0.0f, 0.0f);
//===================================================main control tower
    glPushMatrix();
    glScalef(0.6f, 0.6f, 0.0f);
    glTranslatef(1620.0f, 800.0f, 0.0f);
    glColor3ub(186, 186, 186);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,0.0f);
    glVertex2f(280.0f,0.0f);
    glVertex2f(280.0f,300.0f);
    glVertex2f(200.0f,300.0f);
    glEnd();
    glPopMatrix();
    //===============
    glPushMatrix();
    glScalef(0.9f, 0.2f, 0.0f);
    glTranslatef(1015.0f, 3000.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,300.0f);
    glVertex2f(250.0f,300.0f);
    glVertex2f(280.0f,600.0f);
    glVertex2f(170.0f,600.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.9f, 0.2f, 0.0f);
    glTranslatef(1015.0f, 3000.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,690.0f);
    glVertex2f(250.0f,690.0f);
    glVertex2f(280.0f,600.0f);
    glVertex2f(170.0f,600.0f);
    glEnd();
    glPopMatrix();
//=================================== WINDOW BACKGROUND (NO NEED CHANGE)
    glPushMatrix();
    glScalef(0.9f, 0.2f, 0.0f);
    glTranslatef(1015.0f, 3000.0f, 0.0f);
    glColor3ub(64, 97, 189);
    glBegin(GL_POLYGON);
    glVertex2f(210.0f,300.0f);
    glVertex2f(240.0f,300.0f);
    glVertex2f(270.0f,600.0f);
    glVertex2f(180.0f,600.0f);
    glEnd();
    glPopMatrix();


//===================================MAIN WINDOWWW
    glPushMatrix();
    glScalef(0.9f, 0.2f, 0.0f);
    glTranslatef(1015.0f, 3000.0f, 0.0f);
    glColor3ub(64, 197, 189);
    glBegin(GL_POLYGON);
    glVertex2f(227.5f,600.0f);
    glVertex2f(270.0f,600.0f);
    glVertex2f(240.0f,300.0f);
    glVertex2f(227.5f,300.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.9f, 0.2f, 0.0f);
    glTranslatef(1015.0f, 3000.0f, 0.0f);
    glColor3ub(64, 197, 189);
    glBegin(GL_POLYGON);
    glVertex2f(180.0f,600.0f);
    glVertex2f(222.5f,600.0f);
    glVertex2f(222.5f,300.0f);
    glVertex2f(210.0f,300.0f);
    glEnd();
    glPopMatrix();
glPopMatrix();
}
void circle(){

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=50.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }


	glEnd();
}

void cloud(){           //F12
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(_cloudMove, 0.0f, 0.0f);
    glPushMatrix();
	glTranslatef(100.0, 775.0f, 0.0f);
    glScalef(0.4f, 0.4f, 0.0f);
    circle();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(135.0, 775.0f, 0.0f);
    glScalef(0.4f, 0.4f, 0.0f);
    circle();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(118.5f, 765.0f, 0.0f);
    glScalef(0.4f, 0.4f, 0.0f);
    circle();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(118.5f, 783.0f, 0.0f);
    glScalef(0.4f, 0.4f, 0.0f);
    circle();
    glPopMatrix();

    //=======================================

    glPushMatrix();
	glTranslatef(500.0, 775.0f, 0.0f);
    glScalef(0.4f, 0.4f, 0.0f);
    circle();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(535.0, 775.0f, 0.0f);
    glScalef(0.4f, 0.4f, 0.0f);
    circle();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(518.5f, 765.0f, 0.0f);
    glScalef(0.4f, 0.4f, 0.0f);
    circle();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(518.5f, 783.0f, 0.0f);
    glScalef(0.4f, 0.4f, 0.0f);
    circle();
    glPopMatrix();

    //===============================================

    glPushMatrix();
	glTranslatef(900.0, 775.0f, 0.0f);
    glScalef(0.4f, 0.4f, 0.0f);
    circle();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(935.0, 775.0f, 0.0f);
    glScalef(0.4f, 0.4f, 0.0f);
    circle();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(918.5f, 765.0f, 0.0f);
    glScalef(0.4f, 0.4f, 0.0f);
    circle();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(918.5f, 783.0f, 0.0f);
    glScalef(0.4f, 0.4f, 0.0f);
    circle();
    glPopMatrix();

    //===========================================

    glPushMatrix();
	glTranslatef(1300.0, 775.0f, 0.0f);
    glScalef(0.4f, 0.4f, 0.0f);
    circle();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(1335.0, 775.0f, 0.0f);
    glScalef(0.4f, 0.4f, 0.0f);
    circle();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(1318.5f, 765.0f, 0.0f);
    glScalef(0.4f, 0.4f, 0.0f);
    circle();
    glPopMatrix();

    glPushMatrix();
	glTranslatef(1318.5f, 783.0f, 0.0f);
    glScalef(0.4f, 0.4f, 0.0f);
    circle();
    glPopMatrix();
glPopMatrix();
}

void hanger(){      //F8
    glPushMatrix();
    glTranslatef(1180.0f, 480.0f, 0.0f);
    glScalef(8.2f, 7.2f, 0.0f);

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(181, 181, 181);
    glVertex2f(0.0f,19.0f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(28.0f,0.0f);
    glVertex2f(28.0f,19.0f);
    glEnd();


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(105, 90, 150);
    glVertex2f(1.5f,17.0f);
    glVertex2f(1.5f,0.0f);
    glVertex2f(26.5f,0.0f);
    glVertex2f(26.5f,17.0f);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(33, 33, 331);
    glVertex2f(2.0f,4.0f);
    glVertex2f(26.0f,4.0f);
    glVertex2f(26.0f,5.0f);
    glVertex2f(2.0f,5.0f);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(33, 33, 331);
    glVertex2f(2.0f,10.0f);
    glVertex2f(26.0f,10.0f);
    glVertex2f(26.0f,11.0f);
    glVertex2f(2.0f,11.0f);
    glEnd();

    int l,i;  //================HANGER NAME
    char st[] = "Hanger-1";

    l=strlen( st ); // see how many characters are in text string.

    glColor3ub(1, 1, 1);
    glRasterPos2f( 9, 7); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);

    }
    glPopMatrix();
    glPopMatrix();
}
void flyingPlane(){        //F9
    glPushMatrix();
    glTranslatef(_planeFlyingMove, 168.0f, 0.0f);
    glScalef(5.2f, 5.2f, 0.0f);

    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
    glColor3ub(237, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(10.0f,11.0f);
    glVertex2f(30.0f,12.0f);
    glVertex2f(33.0f,19.0f);
    glVertex2f(10.0f,19.0f);
    glVertex2f(7.0f,18.0f);
    glVertex2f(5.0f,16.0f);
    glVertex2f(5.0f,14.0f);
    glVertex2f(7.0f,12.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(30.0f,12.0f);
    glVertex2f(41.0f,19.0f);
    glVertex2f(43.0f,25.0f);
    glVertex2f(39.0f,25.0f);
    glVertex2f(33.0f,19.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(5.0f,15.0f);
    glVertex2f(8.0f,15.0f);
    glVertex2f(8.0f,17.0f);
    glVertex2f(6.0f,17.0f);
    glVertex2f(5.0f,16.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
    glColor3ub(1, 1, 1);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.0;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+13.0,y+16.0);

    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
    glColor3ub(1, 1, 1);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.0;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+17.0,y+16.0);

    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
    glColor3ub(1, 1, 1);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.0;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+21.0,y+16.0);

    }
    glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
    glColor3ub(1, 1, 1);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.0;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+25.0,y+16.0);

    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
    glColor3ub(1, 1, 1);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.0;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+29.0,y+16.0);

    }
    glEnd();

    //===============engine

    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 15);
    glVertex2f(16.0f,13.0f);
    glVertex2f(21.0f,13.0f);
    glVertex2f(21.0f,9.0f);
    glVertex2f(16.0f,9.0f);
    glEnd();

    //================wing
    glBegin(GL_POLYGON);
    glColor3ub(24, 94, 29);
    glVertex2f(19.0f,13.0f);
    glVertex2f(29.0f,16.0f);
    glVertex2f(29.0f,15.0f);
    glVertex2f(21.0f,12.0f);
    glEnd();

    glPopMatrix();
glPopMatrix();
}

void groundPlaneMove(){         //F10

    glPushMatrix();
    glTranslatef(_planeGroundMove, 370.0f, 0.0f);
    glScalef(6.5f, 6.5f, 0.0f);

    glPushMatrix();

    glBegin(GL_POLYGON);  //==================wheel
    glVertex2f(-10.0f,11.0f);
    glVertex2f(-10.0f,10.0f);
    glVertex2f(-11.0f,10.0f);
    glVertex2f(-11.0f,11.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
    glColor3ub(1, 1, 1);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.0;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x-10.5,y+9.5);

    }
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-25.0f,12.0f);
    glVertex2f(-25.0f,10.0f);
    glVertex2f(-26.0f,10.0f);
    glVertex2f(-26.0f,12.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
    glColor3ub(1, 1, 1);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x-25.5,y+10.0);

    }
    glEnd();




    //==============plane body
    glColor3ub(235, 245, 236);
    glBegin(GL_POLYGON);
    glVertex2f(-10.0f,11.0f);
    glVertex2f(-30.0f,12.0f);
    glVertex2f(-33.0f,19.0f);
    glVertex2f(-10.0f,19.0f);
    glVertex2f(-7.0f,18.0f);
    glVertex2f(-5.0f,16.0f);
    glVertex2f(-5.0f,14.0f);
    glVertex2f(-7.0f,12.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-30.0f,12.0f);
    glVertex2f(-41.0f,19.0f);
    glVertex2f(-43.0f,25.0f);
    glVertex2f(-39.0f,25.0f);
    glVertex2f(-33.0f,19.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-5.0f,15.0f);
    glVertex2f(-8.0f,15.0f);
    glVertex2f(-8.0f,17.0f);
    glVertex2f(-6.0f,17.0f);
    glVertex2f(-5.0f,16.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);        //================Stripe
    glVertex2f(-5.0f,14.0f);
    glVertex2f(-16.0f,13.0f);
    glVertex2f(-32.0f,13.0f);
    glVertex2f(-33.0f,14.0f);
    glEnd();
    //=================TEXT BIMAN
    int l,i;
    char st[] = "Biman";

    l=strlen( st ); // see how many characters are in text string.

    glColor3ub(255, 0, 0);
    glRasterPos2f( -23, 16.5); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);

    }

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
    glColor3ub(j, k, l);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.0;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x-13.0,y+16.0);

    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {

    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.0;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x-17.0,y+16.0);

    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {

    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.0;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x-21.0,y+16.0);

    }
    glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {

    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.0;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x-25.0,y+16.0);

    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {

    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.0;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x-29.0,y+16.0);

    }
    glEnd();

    //===============engine

    glBegin(GL_POLYGON);
    glColor3ub(209, 194, 194);
    glVertex2f(-16.0f,13.0f);
    glVertex2f(-21.0f,13.0f);
    glVertex2f(-21.0f,9.0f);
    glVertex2f(-16.0f,9.0f);
    glEnd();

    //================wing
    glBegin(GL_POLYGON);
    glColor3ub(194, 190, 190);
    glVertex2f(-19.0f,13.0f);
    glVertex2f(-29.0f,16.0f);
    glVertex2f(-29.0f,15.0f);
    glVertex2f(-21.0f,12.0f);
    glEnd();

    glPopMatrix();
glPopMatrix();

}

void lamp(){        //F11
    glPushMatrix();
    glTranslatef(-25.0f, 490.0f, 0.0f);
    glScalef(8.2f, 8.2f, 0.0f);

    glPushMatrix();

    glColor3ub(46, 40, 26);
    glBegin(GL_POLYGON);  //==================stand
    glVertex2f(12.0f,16.0f);
    glVertex2f(13.0f,16.0f);
    glVertex2f(13.0f,-4.0f);
    glVertex2f(12.0f,-4.0f);
    glEnd();

    glBegin(GL_POLYGON);  //==================light
    glColor3ub(g, h, i);
    glVertex2f(15.0f,17.0f);
    glVertex2f(16.0f,16.0f);
    glVertex2f(13.0f,15.0f);
    glVertex2f(12.0f,16.0f);
    glEnd();

    //==============

    glColor3ub(46, 40, 26);
    glBegin(GL_POLYGON);  //==================stand
    glVertex2f(102.0f,16.0f);
    glVertex2f(103.0f,16.0f);
    glVertex2f(103.0f,-4.0f);
    glVertex2f(102.0f,-4.0f);
    glEnd();

    glBegin(GL_POLYGON);  //==================light
    glColor3ub(g, h, i);
    glVertex2f(105.0f,17.0f);
    glVertex2f(106.0f,16.0f);
    glVertex2f(103.0f,15.0f);
    glVertex2f(102.0f,16.0f);
    glEnd();

    //==============

    glColor3ub(46, 40, 26);
    glBegin(GL_POLYGON);  //==================stand
    glVertex2f(144.0f,16.0f);
    glVertex2f(145.0f,16.0f);
    glVertex2f(145.0f,-4.0f);
    glVertex2f(144.0f,-4.0f);
    glEnd();

    glBegin(GL_POLYGON);  //==================light
    glColor3ub(g, h, i);
    glVertex2f(147.0f,17.0f);
    glVertex2f(148.0f,16.0f);
    glVertex2f(145.0f,15.0f);
    glVertex2f(144.0f,16.0f);
    glEnd();

    glPopMatrix();
    glPopMatrix();
}

void fuelTruck(){       //F14
    glPushMatrix();
    glTranslatef(_FuelTruckMove, 390.0f, 0.0f);
    glScalef(5.6f, 5.6f, 0.0f);

    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3ub(225, 245, 51);
    glVertex2f(7.0f,10.0f);
    glVertex2f(8.0f,11.0f);
    glVertex2f(20.0f,11.0f);
    glVertex2f(20.0f,5.0f);
    glVertex2f(8.0f,5.0f);
    glVertex2f(7.0f,6.0f);
    glEnd();

    glBegin(GL_POLYGON); //========front
    glColor3ub(67, 161, 74);
    glVertex2f(20.0f,10.0f);
    glVertex2f(23.0f,10.0f);
    glVertex2f(25.0f,8.0f);
    glVertex2f(25.0f,5.0f);
    glVertex2f(20.0f,5.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(67, 161, 74);
    glVertex2f(25.0f,8.0f);
    glVertex2f(26.0f,8.0f);
    glVertex2f(27.0f,7.0f);
    glVertex2f(27.0f,5.0f);
    glVertex2f(25.0f,5.0f);
    glEnd();
    glPopMatrix();

    glBegin(GL_POLYGON);// wheel
    for(int i=0;i<200;i++)
    {
    glColor3ub(1, 1, 1);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+11.0,y+4.0);

    }
    glEnd();

    glBegin(GL_POLYGON);// wheel
    for(int i=0;i<200;i++)
    {
    glColor3ub(1, 1, 1);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+13.5,y+4.0);

    }
    glEnd();

    glBegin(GL_POLYGON);// wheel
    for(int i=0;i<200;i++)
    {
    glColor3ub(1, 1, 1);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+25.0,y+4.2);
    }
    glEnd();
    //window
    glBegin(GL_POLYGON);
    glColor3ub(12, 35, 148);
    glVertex2f(20.5f,9.5f);
    glVertex2f(23.0f,9.5f);
    glVertex2f(24.5f,8.0f);
    glVertex2f(20.5f,8.0f);
    glEnd();

    //=================TEXT BIMAN
    int l,i;
    char st[] = "Jet Fuel";

    l=strlen( st ); // see how many characters are in text string.

    glColor3ub(171, 19, 19);
    glRasterPos2f( 8.0, 7.5); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);

    }
    glPopMatrix();
}


//---------Abdullah Al Mahadi------------------------

void runway()       //F15
{
    glColor3ub(96,96,96);
    glBegin(GL_POLYGON);
    glVertex2f(100.0f,40.0f);
    glVertex2f(1300.0f,40.0f);
    glVertex2f(1200.0f,180.0f);
    glVertex2f(200.0f,180.0f);
    glEnd();

    //----------Runway stripe-----
    float endR = 110,begR =45;
    for(int i = 0;i<8;i++)
    {
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
        glVertex2f(endR,begR);
        glVertex2f(endR+50,begR);
        glVertex2f(endR+57,begR+10);
        glVertex2f(endR+7,begR+10);
        glEnd();
        begR = begR+15;
        endR = endR + 12;
        if(i==3){
            begR+=15;
            endR+=5;
        }
    }
    endR = 1240,begR =45 ;
    for(int i = 0;i<8;i++)
    {
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
        glVertex2f(endR,begR);
        glVertex2f(endR+50,begR);
        glVertex2f(endR+43,begR+10);
        glVertex2f(endR-7,begR+10);
        glEnd();
        begR = begR+15;
        endR = endR-12;
        if(i==3){
            begR+=15;
            endR-=5;
        }
    }

    //--------Runway Middle Stripe--------
    endR = 230,begR =105 ;
    for(int i = 0;i<10;i++)
    {
        glColor3ub(255,255,255);
        glBegin(GL_POLYGON);
        glVertex2f(endR,begR);
        glVertex2f(endR+50,begR);
        glVertex2f(endR+45,begR+10);
        glVertex2f(endR+6,begR+10);
        glEnd();
        endR = endR+100;

    }
    //-------Runway double stripe----
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(168.0f,45.0f);
    glVertex2f(1230.0f,45.0f);
    glVertex2f(1222.0f,55.0f);
    glVertex2f(178.0f,55.0f);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(260.0f,165.0f);
    glVertex2f(880.0f,165.0f);
    glVertex2f(872.0f,175.0f);
    glVertex2f(268.0f,175.0f);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(1060.0f,165.0f);
    glVertex2f(1145.0f,165.0f);
    glVertex2f(1138.0f,175.0f);
    glVertex2f(1068.0f,175.0f);
    glEnd();

}

void taxiWay()      //F16
{
    //-----Main Taxi way------
    glColor3ub(96,96,96);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,200.0f);
    glVertex2f(1400.0f,200.0f);
    glVertex2f(1400.0f,470.0f);
    glVertex2f(0.0f,470.0f);
    glEnd();
    //------Sub Taxi Way----
    glColor3ub(96,96,96);
    glBegin(GL_POLYGON);
    glVertex2f(880.0f,175.0f);
    glVertex2f(1060.0f,175.0f);
    glVertex2f(1060.0f,200.0f);
    glVertex2f(880.0f,200.0f);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(870.0f,165.0f);
    glVertex2f(880.0f,165.0f);
    glVertex2f(880.0f,205.0f);
    glVertex2f(870.0f,205.0f);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(1060.0f,165.0f);
    glVertex2f(1070.0f,165.0f);
    glVertex2f(1070.0f,205.0f);
    glVertex2f(1060.0f,205.0f);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,205.0f);
    glVertex2f(880.0f,205.0f);
    glVertex2f(880.0f,215.0f);
    glVertex2f(.0f,215.0f);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(1060.0f,205.0f);
    glVertex2f(1400.0f,205.0f);
    glVertex2f(1400.0f,215.0f);
    glVertex2f(1060.0f,215.0f);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,460.0f);
    glVertex2f(1400.0f,460.0f);
    glVertex2f(1400.0f,465.0f);
    glVertex2f(0.0f,465.0f);
    glEnd();

    //------Yellow taxi line---------
    glLineWidth(0.75);   //Width of the line

	glBegin(GL_LINES);
	glColor3ub(255,255,51);
	glVertex2f(0.0f, 435.0f);
	glVertex2f(1400.0f, 435.0f);
	glEnd();

    glLineWidth(0.85);   //Width of the line

	glBegin(GL_LINES);
	glColor3ub(255,255,51);
	glVertex2f(0.0f, 400.0f);
	glVertex2f(1400.0f, 400.0f);
	glEnd();

	glLineWidth(1);   //Width of the line

	glBegin(GL_LINES);
	glColor3ub(255,255,51);
	glVertex2f(0.0f, 350.0f);
	glVertex2f(1400.0f, 350.0f);
	glEnd();

	glLineWidth(1);   //Width of the line

	glBegin(GL_LINES);
	glColor3ub(255,255,51);
	glVertex2f(0.0f, 280.0f);
	glVertex2f(1400.0f, 280.0f);
	glEnd();

	//-----Subway to taxiway yellow line
	glBegin(GL_LINES);
	glColor3ub(255,255,51);
	glVertex2f(965.0f, 140.0f);
	glVertex2f(965.0f, 250.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,51);
	glVertex2f(925.0f, 280.0f);
	glVertex2f(965.0f, 250.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,51);
	glVertex2f(1005.0f, 280.0f);
	glVertex2f(965.0f, 250.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,51);
	glVertex2f(925.0f, 110.0f);
	glVertex2f(965.0f, 140.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,51);
	glVertex2f(1005.0f, 110.0f);
	glVertex2f(965.0f, 140.0f);
	glEnd();

}


void airbusA380()   //F17
{
    glPushMatrix();
    glTranslatef(_planeAirbusA380MoveX, _planeAirbusA380MoveY, 0.0f);
    glScalef(8.2f, 6.5f, 0.0f);

    glPushMatrix();
    glTranslatef(20.0f, 0.0f, 0.0f);

    glColor3ub(255, 234,234);
    glBegin(GL_POLYGON);
    glVertex2f(110.0f,11.0f);
    glVertex2f(130.0f,12.0f);
    glVertex2f(133.0f,19.0f);
    glVertex2f(110.0f,19.0f);
    glVertex2f(107.0f,18.0f);
    glVertex2f(105.0f,16.0f);
    glVertex2f(105.0f,14.0f);
    glVertex2f(107.0f,12.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(130.0f,12.0f);
    glVertex2f(141.0f,19.0f);
    glVertex2f(143.0f,24.0f);
    glVertex2f(139.0f,24.0f);
    glVertex2f(133.0f,19.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,255,30);
    glVertex2f(130.0f,12.0f);
    glVertex2f(141.0f,19.0f);
    glVertex2f(143.0f,24.0f);
    glVertex2f(139.0f,24.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,25,30);
    glVertex2f(138.0f,19.0f);
    glVertex2f(141.0f,19.0f);
    glVertex2f(145.0f,21.0f);
    glVertex2f(141.0f,21.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(j, k, l);
    glVertex2f(105.0f,15.0f);
    glVertex2f(108.0f,15.0f);
    glVertex2f(108.0f,16.5f);
    glVertex2f(106.0f,16.5f);
    glVertex2f(105.0f,16.0f);
    glEnd();

    float temp = 0;
    for(int x = 0;x<14;x++)
    {
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            glColor3ub(j, k, l);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+110+temp,y+17.5);
        }
        glEnd();
        temp+=1.7;
    }
    temp = 0;
    for(int x = 0;x<14;x++)
    {
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            glColor3ub(j, k, l);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+110+temp,y+14.5);
        }
        glEnd();
        temp+=1.5;
    }


    //================wing
    glBegin(GL_POLYGON);
    glColor3ub(124, 94, 29);
    glVertex2f(112.0f,13.0f);
    glVertex2f(120.0f,13.0f);
    glVertex2f(128.0f,16.0f);
    glVertex2f(123.0f,16.0f);
    glEnd();

    //===============engine
    glBegin(GL_POLYGON);
    glColor3ub(124, 102, 29);
    glVertex2f(112.0f,15.0f);
    glVertex2f(120.0f,13.0f);
    glVertex2f(120.0f,12.0f);
    glVertex2f(112.0f,12.0f);
    glEnd();


    //----Wheel of A380----------

    glBegin(GL_POLYGON);  //==================wheel
    glColor3ub(255,255,255);
    glVertex2f(110.0f,11.0f);
    glVertex2f(110.0f,9.0f);
    glVertex2f(111.0f,9.0f);
    glVertex2f(111.0f,11.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
        glColor3ub(1, 1, 1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=1.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+110.5,y+8.5);
    }
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(125.0f,12.0f);
    glVertex2f(125.0f,9.0f);
    glVertex2f(126.0f,9.0f);
    glVertex2f(126.0f,12.0f);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
        glColor3ub(1, 1, 1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=1.2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+125.5,y+9.0);

    }
    glEnd();

    glPopMatrix();
    glPopMatrix();
}

//Rahatul Ashekin Ashik
void blueCar()  //F18
{
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glScalef(0.55f, 0.4f, 0.0f);
    glTranslatef(0.0f, 730.0f, 0.0f);

    glPushMatrix();
    glTranslatef(_moveBlueCar, 0.0f, 0.0f);
    //Body
    glBegin(GL_POLYGON);
    glColor3ub(55, 100, 213);
    glVertex2d(840.0f, 260.0f);
    glVertex2d(750.0f, 260.0f);
    glVertex2d(730.0f, 230.0f);
    glVertex2d(700.0f, 230.0f);
    glVertex2d(700.0f, 200.0f);
    glVertex2d(860.0f, 200.0f);
    glVertex2d(860.0f, 230.0f);
    glEnd();

    //FrontWheel
    glPushMatrix();
    glTranslatef(820.0f, 200.0f, 0.0f);
    glRotatef(_angleBlueCar, 0.0f, 0.0f, 1.0f);
    glTranslatef(-820.0f, -200.0f, 0.0f);
    glBegin(GL_POLYGON);// wheel
    for(int i=0; i<200; i++)
    {
        glColor3ub(1, 1, 1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=16.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+820.0,y+200.0);
    }
    glEnd();
    //Wheel Lines
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(820.0f, 215.0f);
    glVertex2d(820.0f, 185.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(805.0f, 200.0f);
    glVertex2d(835.0f, 200.0f);
    glEnd();
    glPopMatrix();

    //RearWheel
    glPushMatrix();
    glTranslatef(740.0f, 200.0f, 0.0f);
    glRotatef(_angleBlueCar, 0.0f, 0.0f, 1.0f);
    glTranslatef(-740.0f, -200.0f, 0.0f);
    glBegin(GL_POLYGON);// wheel
    for(int i=0; i<200; i++)
    {
        glColor3ub(1, 1, 1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=16.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+740.0,y+200.0);
    }
    glEnd();
    //Wheel Lines
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(740.0f, 215.0f);
    glVertex2d(740.0f, 185.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(725.0f, 200.0f);
    glVertex2d(755.0f, 200.0f);
    glEnd();
    glPopMatrix();

    //Glass
    glBegin(GL_POLYGON);
    glColor3ub(189, 183, 183);
    glVertex2d(753.0f, 255.0f);
    glVertex2d(737.0f, 233.0f);
    glVertex2d(853.0f, 233.0f);
    glVertex2d(837.0f, 255.0f);
    glEnd();
    glPopMatrix();
}
void redCar()   //F19
{
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glScalef(0.52f, 0.36f, 0.0f);
    glTranslatef(0.0f, 910.0f, 0.0f);

    glPushMatrix();
    glTranslatef(_moveRedCar, 0.0f, 0.0f);
    //Body
    glBegin(GL_POLYGON);
    glColor3ub(237, 61, 61);
    glVertex2d(5.0f, 90.0f);
    glVertex2d(5.0f, 50.0f);
    glVertex2d(190.0f, 50.0f);
    glVertex2d(190.0f, 90.0f);
    glVertex2d(160.0f, 90.0f);
    glVertex2d(120.0f, 130.0f);
    glVertex2d(30.0f, 130.0f);
    glEnd();

    //FrontWheel
    glPushMatrix();
    glTranslatef(140.0f, 55.0f, 0.0f);
    glRotatef(_angleRedCar, 0.0f, 0.0f, 1.0f);
    glTranslatef(-140.0f, -55.0f, 0.0f);
    glBegin(GL_POLYGON);// wheel
    for(int i=0; i<200; i++)
    {
        glColor3ub(1, 1, 1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=19.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+140.0,y+55.0);
    }
    glEnd();
    //Wheel Lines
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(140.0f, 73.0f);
    glVertex2d(140.0f, 37.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(122.0f, 55.0f);
    glVertex2d(158.0f, 55.0f);
    glEnd();
    glPopMatrix();

    //RearWheel
    glPushMatrix();
    glTranslatef(50.0f, 55.0f, 0.0f);
    glRotatef(_angleRedCar, 0.0f, 0.0f, 1.0f);
    glTranslatef(-50.0f, -55.0f, 0.0f);
    glBegin(GL_POLYGON);// wheel
    for(int i=0; i<200; i++)
    {
        glColor3ub(1, 1, 1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=19.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+50.0,y+55.0);
    }
    glEnd();
    //Wheel Lines
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(50.0f, 73.0f);
    glVertex2d(50.0f, 37.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(32.0f, 55.0f);
    glVertex2d(68.0f, 55.0f);
    glEnd();
    glPopMatrix();

    //Glass
    glBegin(GL_POLYGON);
    glColor3ub(189, 183, 183);
    glVertex2d(33.0f, 125.0f);
    glVertex2d(10.0f, 90.0f);
    glVertex2d(153.0f, 90.0f);
    glVertex2d(117.0f, 125.0f);
    glEnd();
    glPopMatrix();
}


void shuttleBus1() {    //F20
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glScalef(0.57f, 0.4f, 0.0f);
    glTranslatef(0.0f, 865.0f, 0.0f);

    glPushMatrix();
    glTranslatef(_moveShuttleBus1, 0.0f, 0.0f);
    //Body
    glBegin(GL_POLYGON);
    glColor3ub(128, 69, 174);
    glVertex2d(900.0f, 135.0f);
    glVertex2d(900.0f, 100.0f);
    glVertex2d(1200.0f, 100.0f);
    glVertex2d(1200.0f, 200.0f);
    glVertex2d(940.0f, 200.0f);
    glEnd();

    //GlassDoor1
    glBegin(GL_POLYGON);
    glColor3ub(189, 183, 183);
    glVertex2d(940.0f, 190.0f);
    glVertex2d(908.0f, 140.0f);
    glVertex2d(975.0f, 140.0f);
    glVertex2d(975.0f, 190.0f);
    glEnd();

    //GlassDoor2
    glBegin(GL_POLYGON);
    glColor3ub(189, 183, 183);
    glVertex2d(980.0f, 190.0f);
    glVertex2d(980.0f, 105.0f);
    glVertex2d(1195.0f, 105.0f);
    glVertex2d(1195.0f, 190.0f);
    glEnd();
    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2d(1051.0f, 190.0f);
    glVertex2d(1051.0f, 105.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2d(1122.0f, 190.0f);
    glVertex2d(1122.0f, 105.0f);
    glEnd();

    //FrontWheel1
    glPushMatrix();
    glTranslatef(950.0f, 100.0f, 0.0f);
    glRotatef(_angleShuttleBus1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-950.0f, -100.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(1, 1, 1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+950.0,y+100.0);
    }
    glEnd();
    //Wheel Lines
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(950.0f, 116.0f);
    glVertex2d(950.0f, 84.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(934.0f, 100.0f);
    glVertex2d(966.0f, 100.0f);
    glEnd();
    glPopMatrix();

    //FrontWheel2
    glPushMatrix();
    glTranslatef(980.0f, 100.0f, 0.0f);
    glRotatef(_angleShuttleBus1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-980.0f, -100.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(1, 1, 1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+980.0,y+100.0);
    }
    glEnd();
    //Wheel Lines
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(980.0f, 116.0f);
    glVertex2d(980.0f, 84.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(964.0f, 100.0f);
    glVertex2d(996.0f, 100.0f);
    glEnd();
    glPopMatrix();

    //RearWheel1
    glPushMatrix();
    glTranslatef(1140.0f, 100.0f, 0.0f);
    glRotatef(_angleShuttleBus1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-1140.0f, -100.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(1, 1, 1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=16.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+1140.0,y+100.0);
    }
    glEnd();
    //Wheel Lines
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(1140.0f, 116.0f);
    glVertex2d(1140.0f, 84.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(1124.0f, 100.0f);
    glVertex2d(1156.0f, 100.0f);
    glEnd();
    glPopMatrix();

    //RearWheel2
    glPushMatrix();
    glTranslatef(1170.0f, 100.0f, 0.0f);
    glRotatef(_angleShuttleBus1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-1170.0f, -100.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(1, 1, 1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=16.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+1170.0,y+100.0);
    }
    glEnd();
    //Wheel Lines
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(1170.0f, 116.0f);
    glVertex2d(1170.0f, 84.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(1154.0f, 100.0f);
    glVertex2d(1186.0f, 100.0f);
    glEnd();
    glPopMatrix();

    glPopMatrix();
}


void shuttleBus2() {    //F21
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glScalef(0.57f, 0.4f, 0.0f);
    glTranslatef(0.0f, 580.0f, 0.0f);

    glPushMatrix();
    glTranslatef(_moveBus2Left, 0.0f, 0.0f);
    //Body
    glBegin(GL_POLYGON);
    glColor3ub(1231, 131, 78);
    glVertex2d(900.0f, 135.0f);
    glVertex2d(900.0f, 100.0f);
    glVertex2d(1200.0f, 100.0f);
    glVertex2d(1200.0f, 200.0f);
    glVertex2d(940.0f, 200.0f);
    glEnd();

    //GlassDoor1
    glBegin(GL_POLYGON);
    glColor3ub(189, 183, 183);
    glVertex2d(940.0f, 190.0f);
    glVertex2d(908.0f, 140.0f);
    glVertex2d(975.0f, 140.0f);
    glVertex2d(975.0f, 190.0f);
    glEnd();

    //GlassDoor2
    glBegin(GL_POLYGON);
    glColor3ub(189, 183, 183);
    glVertex2d(980.0f, 190.0f);
    glVertex2d(980.0f, 105.0f);
    glVertex2d(1195.0f, 105.0f);
    glVertex2d(1195.0f, 190.0f);
    glEnd();
    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2d(1051.0f, 190.0f);
    glVertex2d(1051.0f, 105.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2d(1122.0f, 190.0f);
    glVertex2d(1122.0f, 105.0f);
    glEnd();

    //FrontWheel1
    glPushMatrix();
    glTranslatef(950.0f, 100.0f, 0.0f);
    glRotatef(_angleShuttleBus2, 0.0f, 0.0f, 1.0f);
    glTranslatef(-950.0f, -100.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(1, 1, 1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+950.0,y+100.0);
    }
    glEnd();
    //Wheel Lines
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(950.0f, 116.0f);
    glVertex2d(950.0f, 84.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(934.0f, 100.0f);
    glVertex2d(966.0f, 100.0f);
    glEnd();
    glPopMatrix();

    //FrontWheel2
    glPushMatrix();
    glTranslatef(980.0f, 100.0f, 0.0f);
    glRotatef(_angleShuttleBus2, 0.0f, 0.0f, 1.0f);
    glTranslatef(-980.0f, -100.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(1, 1, 1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=17.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+980.0,y+100.0);
    }
    glEnd();
    //Wheel Lines
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(980.0f, 116.0f);
    glVertex2d(980.0f, 84.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(964.0f, 100.0f);
    glVertex2d(996.0f, 100.0f);
    glEnd();
    glPopMatrix();

    //RearWheel1
    glPushMatrix();
    glTranslatef(1140.0f, 100.0f, 0.0f);
    glRotatef(_angleShuttleBus2, 0.0f, 0.0f, 1.0f);
    glTranslatef(-1140.0f, -100.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(1, 1, 1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=16.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+1140.0,y+100.0);
    }
    glEnd();
    //Wheel Lines
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(1140.0f, 116.0f);
    glVertex2d(1140.0f, 84.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(1124.0f, 100.0f);
    glVertex2d(1156.0f, 100.0f);
    glEnd();
    glPopMatrix();

    //RearWheel2
    glPushMatrix();
    glTranslatef(1170.0f, 100.0f, 0.0f);
    glRotatef(_angleShuttleBus2, 0.0f, 0.0f, 1.0f);
    glTranslatef(-1170.0f, -100.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(1, 1, 1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=16.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+1170.0,y+100.0);
    }
    glEnd();
    //Wheel Lines
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(1170.0f, 116.0f);
    glVertex2d(1170.0f, 84.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2d(1154.0f, 100.0f);
    glVertex2d(1186.0f, 100.0f);
    glEnd();
    glPopMatrix();

    glPopMatrix();
    glFlush();
}
//=====================MD RIFAT=====================================
void Tug(){
    glPushMatrix();
    glTranslatef(0.0f, 310.0f, 0.0f);
    glScalef(9.2f, 5.2f, 2.0f);

    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3ub(255, 234, 234);
    glVertex2f(7.0f,10.0f);
    glVertex2f(8.0f,11.0f);
    glVertex2f(20.0f,11.0f);
    glVertex2f(20.0f,5.0f);
    glVertex2f(8.0f,5.0f);
    glVertex2f(7.0f,6.0f);
    glEnd();

    glBegin(GL_POLYGON); //========front
    glColor3ub(67, 161, 74);
    glVertex2f(20.0f,10.0f);
    glVertex2f(23.0f,10.0f);
    glVertex2f(25.0f,8.0f);
    glVertex2f(25.0f,5.0f);
    glVertex2f(20.0f,5.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(67, 161, 74);
    glVertex2f(25.0f,8.0f);
    glVertex2f(26.0f,8.0f);
    glVertex2f(27.0f,7.0f);
    glVertex2f(27.0f,5.0f);
    glVertex2f(25.0f,5.0f);
    glEnd();
    glPopMatrix();

    glBegin(GL_POLYGON);// wheel
    for(int i=0;i<200;i++)
    {
    glColor3ub(1, 1, 1);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+11.0,y+4.0);

    }
    glEnd();

    glBegin(GL_POLYGON);// wheel
    for(int i=0;i<200;i++)
    {
    glColor3ub(1, 0, 0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+13.5,y+4.0);

    }
    glEnd();

    glBegin(GL_POLYGON);// wheel
    for(int i=0;i<200;i++)
    {
    glColor3ub(1, 1, 1);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+25.0,y+4.2);
    }
    glEnd();
    //window
    glBegin(GL_POLYGON);
    glColor3ub(12, 35, 148);
    glVertex2f(20.5f,9.5f);
    glVertex2f(23.0f,9.5f);
    glVertex2f(24.5f,8.0f);
    glVertex2f(20.5f,8.0f);
    glEnd();


    int l,i;
    char st[] = "Tug";

    l=strlen( st ); // see how many characters are in text string.

    glColor3ub(171, 19, 19);
    glRasterPos2f( 9.0, 7.5); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);

    }
    glPopMatrix();
}

void airStair(){            //F22
    glPushMatrix();
    glTranslatef(2090.0f, -180.0f, 0.0f);
    glScalef(7.2f, 7.2f, 2.0f);

    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3ub(255, 234, 234);
    glVertex2f(5.0f,5.0f);
    glVertex2f(20.0f,5.0f);
    glVertex2f(25.0f,5.0f);
    glVertex2f(25.0f,8.0f);
    glVertex2f(23.0f,10.0f);
    glVertex2f(5.0f,10.0f);
    glEnd();

    glBegin(GL_POLYGON); //========front
    glColor3ub(67, 161, 74);
    glVertex2f(25.0f,5.0f);
    glVertex2f(30.0f,5.0f);
    glVertex2f(28.0f,15.0f);
    glVertex2f(20.0f,15.0f);
    glVertex2f(20.0f,5.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(67, 161, 74);
    glVertex2f(25.0f,8.0f);
    glVertex2f(25.0f,8.0f);
    glVertex2f(27.0f,7.0f);
    glVertex2f(27.0f,5.0f);
    glVertex2f(25.0f,5.0f);
    glEnd();
    glPopMatrix();

    glBegin(GL_POLYGON);// wheel
    for(int i=0;i<200;i++)
    {
    glColor3ub(1, 1, 1);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.7;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+11.0,y+4.0);

    }
    glEnd();

    glBegin(GL_POLYGON);// wheel
    for(int i=0;i<200;i++)
    {
    glColor3ub(1, 0, 0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.7;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+14.5,y+4.0);

    }
    glEnd();
    //window
    glBegin(GL_POLYGON);
    glColor3ub(0, 35, 148);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,10.0f);
    glVertex2f(0.0f,8.0f);
    glVertex2f(0.0f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 234, 234);
    glVertex2f(5.0f,10.0f);
    glVertex2f(10.0f,10.0f);
    glVertex2f(15.0f,20.0f);
    glVertex2f(20.0f,20.0f);
    glVertex2f(20.0f,15.0f);
    glVertex2f(15.f,15.f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(12, 35, 148);
    glVertex2f(20.5f,7.5f);
    glVertex2f(29.0f,7.5f);
    glVertex2f(27.5f,14.0f);
    glVertex2f(20.5f,14.0f);
    glEnd();

    glBegin(GL_POLYGON);// wheel
    for(int i=0;i<200;i++)
    {
    glColor3ub(1, 1, 1);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.7;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x+25.0,y+4.2);
    }
    glEnd();


    int l,i;
    char st[] ="Stair" ;

    l=strlen( st );

    glColor3ub(171, 19, 19);
    glRasterPos2f( 9.0, 7.5);
    for( i=0; i < l; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);

    }
    glPopMatrix();
}

//================== MD. SADMAN RAHMAN ==========================================

void updateCloud(int value) {           //M1

     _cloudMove -= 0.42;


    if(_cloudMove < -400.5)
    {
        _cloudMove = 0.0;
    }



    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(20, updateCloud, 0); //Notify GLUT to call update again in 25 milliseconds
}

void updatePlaneFlying(int value){      //M2
    _planeFlyingMove -= 3.22;

    if(_planeFlyingMove < -1401.5)
    {
    _planeFlyingMove = 300.0;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed


     glutTimerFunc(20, updatePlaneFlying, 0);
}

void updatePlaneGround(int value){      //M3
    _planeGroundMove += speedPlaneGround;

    if(_planeGroundMove > 1801.5)
    {
    _planeGroundMove = 0.0;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed


     glutTimerFunc(20, updatePlaneGround, 0);
}

void updateFuelTruck(int value){        //M4
    _FuelTruckMove += speedFuelTruck;

    if(_FuelTruckMove > 1401.5)
    {
    _FuelTruckMove = -50.0;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed


     glutTimerFunc(20, updateFuelTruck, 0);
}

//---------Abdullah Al Mahadi-----------------------------------------------
void updateAirbusA380(int value)        //M5
{
    //--- Takeoff animation----
    if(flagTakeOff>0){
        _planeAirbusA380MoveX -=takeOffPlaneX;
        takeOffPlaneX += 0.07;

        if(_planeAirbusA380MoveX<-250){
            _planeAirbusA380MoveY += takeOffPlaneY;
            takeOffPlaneY += 0.021;
        }
    }

    //--------landing Animation ------------
    if(flagLanding>0){

        if(landingPlaneX<0){
            landingPlaneX = 0;
        }

        _planeAirbusA380MoveX -= landingPlaneX;
        landingPlaneX += temp2;
        temp2 -= 0.03;

        if(_planeAirbusA380MoveY > 60){
            _planeAirbusA380MoveY-=temp;
            temp += 0.16;
        }
    }

    glutPostRedisplay(); //Notify GLUT that the display has changed
    glutTimerFunc(20,updateAirbusA380, 0);
}

//======================== Rahatul Ashekin Ashik ==========================================
void updateRedCar(int value) {          //M6
    if (_moveRedCar > 2700)
        _moveRedCar = -160.0f;
    _moveRedCar += 5.5;

    _angleRedCar -= 2.0f;
    if(_angleRedCar < -360.0)
    {
        _angleRedCar += -360;
    }

    glutPostRedisplay();
    glutTimerFunc(10, updateRedCar, 0);
}


void updateBlueCar(int value) {         //M7
    if (_moveBlueCar < -861)
        _moveBlueCar = 1900.0f;
    _moveBlueCar -= 3.5;

    _angleBlueCar += 2.0f;
    if(_angleBlueCar > 360.0)
    {
        _angleBlueCar -= 360;
    }

    glutPostRedisplay();
    glutTimerFunc(10, updateBlueCar, 0);
}


void updateShuttleBus1 (int value) {        //M8
    if (_moveShuttleBus1 < -1201)
        _moveShuttleBus1 = 1600.0f;
    _moveShuttleBus1 -= 5.0;

    _angleShuttleBus1 += 2.0f;
    if(_angleShuttleBus1 > 360.0)
    {
        _angleShuttleBus1 -= 360;
    }

    glutPostRedisplay();
    glutTimerFunc(10, updateShuttleBus1, 0);
}


void updateBus2Left(int val)        //M9
{
    if(_moveBus2Left < -1201.0)
        _moveBus2Left = 1300.0;
    _moveBus2Left -= 4.0;

    _angleShuttleBus2 += 2.0f;
    if(_angleShuttleBus2 > 360.0)
    {
        _angleShuttleBus2 -= 360;
    }

    glutPostRedisplay();
    glutTimerFunc(10, updateBus2Left, 0);
}


void updateBus2Right(int val)       //M10
{
    if(_moveBus2Left > 1301.0)
    {
        _moveBus2Left = -1201.0;
    }
    _moveBus2Left += 4.0;

    _angleShuttleBus2 -= 2.0f;
    if(_angleShuttleBus2 < -360.0)
    {
        _angleShuttleBus2 += -360;
    }

    glutPostRedisplay();
    glutTimerFunc(10, updateBus2Right, 0);
}

//==========================================================

void allDisplay() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glColor3d(1,0,0);
    glLineWidth(7.5);
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);

    Sky();
    backBuildings();
    airportBuilding();
    terminal();
    controlTower();
    lamp();
    hanger();
    runway();
    taxiWay();
    groundPlaneMove();
    fuelTruck();
    cloud();
    AirportName();

    flyingPlane();
    //take off condition
        if(flagTakeOff>0){
            airbusA380();
        }
        if(flagLanding>0){
            airbusA380();
        }
    shuttleBus1();
    blueCar();
    shuttleBus2();
    redCar();
    airStair();
    //Tug();

    glFlush();
    glutSwapBuffers();
}



void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluOrtho2D(0,1400,0,800);
   glMatrixMode(GL_MODELVIEW);
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {


    case '1':
    speedPlaneGround = 0.0f;
    break;

    case '2':
    speedPlaneGround = 3.22f;
    break;

    case '3':
    speedFuelTruck = 0.0f;
    break;

    case '4':
    speedFuelTruck = 3.22f;
    break;

    //====MAHADI
    case 't':
        takeOffPlaneX = 0.2;
        flagTakeOff++;
        flagLanding = 0;
        _planeAirbusA380MoveX = 0;
        _planeAirbusA380MoveY = 60.0;
        takeOffPlaneX = 0;
        takeOffPlaneY = 0;
        break;

    case 'l':
        flagLanding++;
        flagTakeOff = 0;
        _planeAirbusA380MoveX = 450;
        _planeAirbusA380MoveY = 200.0;
        temp = 0;
        landingPlaneX = 0;
        temp2 = 1.2;
        break;

    break;

    glutPostRedisplay();


	}
}

//Rahatul Ashekin Ashik
void SpecialInput(int key, int x, int y)
{
    switch(key)
    {
    case GLUT_KEY_LEFT:
        updateBus2Left(0);
        break;
    case GLUT_KEY_RIGHT:
        updateBus2Right(0);
        break;
    }
    glutPostRedisplay();
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
	    //window
    a = 8.0;
    b = 98.0;
    c = 166.0;

    //Sky
    d = 135;
    e = 245;
    f = 255;

    //lamp
    g = 148;
    h = 121;
    i = 53;

    //Plane Window
    j = 47;
    k = 53;
    l = 145;

    //ground
    m = 168;
    n = 145;
    o = 103;

    }
if (button == GLUT_RIGHT_BUTTON)
	{
	    a = 168;
    b = 168;
    c = 0;

    //Sky
    d = 27;
    e = 56;
    f = 55;

    //Lamp
    g = 251;
    h = 255;
    i = 0;

    //Plane Window
    j = 209;
    k = 209;
    l = 59;

    //ground
    m = 128;
    n = 117;
    o = 54;
    }
glutPostRedisplay();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1400, 800);
    glutCreateWindow("Airport");
    glutDisplayFunc(allDisplay);
    init();
    glutKeyboardFunc(handleKeypress);
    glutSpecialFunc(SpecialInput);
    glutMouseFunc(handleMouse);
    glutTimerFunc(20, updateCloud, 0); //Add a timer
    glutTimerFunc(20, updatePlaneFlying, 0); //Add a timer
    glutTimerFunc(20, updatePlaneGround, 0); //Add a timer
    glutTimerFunc(20, updateFuelTruck, 0); //Add a timer
    glutTimerFunc(20, updateAirbusA380,0);
    glutTimerFunc(20, updateRedCar, 0);
    glutTimerFunc(20, updateBlueCar, 0);
    glutTimerFunc(20, updateShuttleBus1, 0);
    glutMainLoop();
    return 0;
}



