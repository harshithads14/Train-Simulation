#include<windows.h>
#include <GL/glut.h>
float angle = 0.0, x=-4;
int flag=0;
void home()
{
glPushMatrix(); //main building
 glColor3f(0.91, 0.76,0.65);
 glTranslated(0,0.4,0);
 glScaled(2,0.8,1);
 glutSolidCube(1);
 glColor3f(0.91, 0.76,0.65);
 glutWireCube(1);
 glPopMatrix();
// if(flag == 0){
// char pro[] = " HASSAN RAILWAY STATION ";
// drawhead(0, 20, 10, pro);
// }
 glPushMatrix(); //door
 glColor3f(0,0,0);
 glTranslated(0,0.2,0);
 glScaled(0.3,0.4,1);
 glutSolidCube(1);
 glColor3f(0,0,0);
 glutWireCube(1);
 glPopMatrix();
 glPushMatrix(); //main building roof
 glColor3f(0,0,0);
 glTranslated(0,0.8,0);
 glScaled(2,0.02,1);
 glutSolidCube(1);
 glColor3f(0,0,0);
 glutWireCube(1);
 glPopMatrix();
 glPushMatrix(); //room on floor
 glColor3f(0.91, 0.76,0.65);
 glTranslated(0,1.1,0);
 glScaled(1.4,0.6,1);
 glutSolidCube(1);
 glColor3f(0.65, 0.49,0.24);
 glutWireCube(1);
 glPopMatrix();
 glPushMatrix(); //top room roof
 glColor3f(0,0,0);
 glTranslated(0,1.4,0);
 glScaled(2,0.02,1);
 glutSolidCube(1);
 glColor3f(0,0,0);
 glutWireCube(1);
 glPopMatrix();
 glPushMatrix(); //top room window
 glColor3f(0,0,0);
 glTranslated(0,1.1,0);
 glScaled(0.4,0.3,1);
 glutSolidCube(1);
 glColor3f(0,0,0);
 glutWireCube(1);
 glPopMatrix();
}
void trainDabba()
{



 glPushMatrix(); //Right Wheel Far
 glColor3f(1,1,1);
 glTranslated(0.75,-0.5, -0.5);
 if (flag ==1)
    {
 glRotated(angle,0,0,1);
    }
 glutWireTorus (0.1,0.2,10,10);
 glPopMatrix();
 glPushMatrix(); //Left Wheel Far
 glColor3f(1,1,1);
 glTranslated(-0.75,-0.5, -0.5);
if (flag ==1)
    {
 glRotated(angle,0,0,1);
    }
 glutWireTorus (0.1,0.2,10,10);
 glPopMatrix();
 glPushMatrix(); //Train BOX
 glColor3f(0,0,0);
 glScaled(2,1,1);
 glutSolidCube(1);
 glColor3f(0,0,0);
 glutWireCube(1);
 glPopMatrix();
 glPushMatrix(); //train window
 glColor3f(1,1,1);
 glTranslated(0,0,0);
 glScaled(0.3,0.2,1);
 glutSolidCube(1.0);
 glColor3f(1,1,1);
 glutWireCube(1.0);
 glPopMatrix();
 glPushMatrix(); //Train Connection Boxes
 glColor3f(0,0,0);
 glTranslated(1,-0.35,0);
 glScaled(1,0.09,0.09);
 glutSolidCube(1);
 glPopMatrix();
 glPushMatrix(); //Right Wheel Far
 glColor3f(1,1,1);
 glTranslated(0.75,-0.5, 0.5);
 if (flag ==1)
    {
 glRotated(angle,0,0,1);
    }
 glutWireTorus (0.1,0.2,10,10);
 glPopMatrix();
 glPushMatrix(); //Left Wheel Far
 glColor3f(1,1,1);
 glTranslated(-0.75,-0.5, 0.5);
if (flag ==1)
    {
 glRotated(angle,0,0,1);
    }
 glutWireTorus (0.1,0.2,10,10);
 glPopMatrix();
 angle-=0.2;
}
void tree()
{
 glPushMatrix();
 glColor3b(102,100,70);
 glScaled(0.2,6,0.2);
 glutSolidCube(1);
 glPopMatrix();
 glPushMatrix();
 glColor3b(48,124,66);
 glTranslated(0,2,0);
 glutSolidSphere(1,8,8);
 glColor3f(0,1,0);
 glutWireSphere(1,8,8);
 glPopMatrix();
}
void background()
{
 glColor3f(0.24,0.56,0.37);
 glRecti(-3,-2,3,0); //green grass
 glColor3f(0.13,0.68,0.85);
 glRecti(-3,0,3,2); //sky
//small trees
 glPushMatrix();
 glTranslated(1.7,0.6,0);
 glScaled(0.3,0.3,0.1);
 tree();
 glPopMatrix();
 glPushMatrix();
 glTranslated(1.5,0.8,0);
 glScaled(0.3,0.3,0.1);
 tree();
 glPopMatrix();
 //big trees
 glPushMatrix();
 glTranslated(-1.6,0.4,0);
 glScaled(0.23,0.23,0.1);
 tree();
 glPopMatrix();
 glPushMatrix();
 glTranslated(-1.4,0.6,0);
 glScaled(0.23,0.23,0.1);
 tree();
 glPopMatrix();
 home();
}


void drawhead(float x, float y, float z, char *string)
{
 glColor3f(1, 1, 1);
 glRasterPos3f(x, y, z);
 for (char *c = string; *c != '\0'; c++)
 {
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, *c);
 }
}


void renderScene (void)
{
 glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
 glMatrixMode (GL_PROJECTION);
 glLoadIdentity();
 glOrtho (-3,3,-2,2,-4,4);
 background ();
 glRotatef(10,1.0,1.0,0.0); //
 glPushMatrix ();
 glColor3f(0,0,0); //Rail
 glTranslated (0,-0.4,0);
 glScaled (9,0.1,0.1);
 glutWireCube(1);
 glPopMatrix();
 glTranslatef(x,0,0); // to move train
 glScaled(0.5,0.5,0.5);
 glPushMatrix();
 glTranslated (-2.4,0,0);
 trainDabba();
 glPopMatrix();
 glPushMatrix();
 glTranslated (0,0,0);
 trainDabba();
 glPopMatrix();
 glPushMatrix();
 glTranslated (2.4,0,0);
 trainDabba();
  glPopMatrix();

if (flag==1)
{
     if (x<6)
 x+=0.001; //control train speed from here
 else
 x=-6;
}
 glutSwapBuffers();
 }
void key(unsigned char key,int x,int y)
{
    switch (key)
    {
  case 's':
    {
        flag=1;
        break;
    }
  case 'n':
    {
        flag=0;
        break;
    }
  case 'e':
    exit(0);
    }
}
int main(int argc,char** argv) {
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
glutInitWindowPosition (10,10);
glutInitWindowSize (1366,768);
glutCreateWindow("HARSHITHA D S  4GH19CS019");
glutDisplayFunc(renderScene);
glutIdleFunc (renderScene);
glutFullScreen();
glutKeyboardFunc(key);
glClearColor(1,1,1,1);
glutMainLoop();
return 0;
}
