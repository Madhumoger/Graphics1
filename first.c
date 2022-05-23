
#include<stdio.h>
#include<GL/glut.h>




void outpu(char *s1)
{
 int k1;
 for(k1=0;k1<strlen(s1);k1++)
 {
  glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s1[k1]);
 }
}


void build()
{
 glBegin(GL_POLYGON);
 glColor3f(0.9,0.9,0.9);
 glVertex2f(40,30);
 glVertex2f(40,60);
 glVertex2f(70.2,60);
 glVertex2f(70.2,30);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(40.0,60.0);
 glVertex2f(40.0,62.0);
 glVertex2f(41.2,62.0);
 glVertex2f(41.2,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.3,0.5,0.5);
 glVertex2f(41.2,60.0);
 glVertex2f(41.2,62.0);
 glVertex2f(42.4,62.0);
 glVertex2f(42.4,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(42.4,60.0);
 glVertex2f(42.4,62.0);
 glVertex2f(43.6,62.0);
 glVertex2f(43.6,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.3,0.5,0.5);
 glVertex2f(43.6,60.0);
 glVertex2f(43.6,62.0);
 glVertex2f(44.8,62.0);
 glVertex2f(44.8,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(44.8,60.0);
 glVertex2f(44.8,62.0);
 glVertex2f(46.0,62.0);
 glVertex2f(46.0,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.3,0.5,0.5);
 glVertex2f(46.0,60.0);
 glVertex2f(46.0,62.0);
 glVertex2f(47.2,62.0);
 glVertex2f(47.2,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(47.2,60.0);
 glVertex2f(47.2,62.0);
 glVertex2f(48.4,62.0);
 glVertex2f(48.4,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.3,0.5,0.5);
 glVertex2f(48.4,60.0);
 glVertex2f(48.4,62.0);
 glVertex2f(49.6,62.0);
 glVertex2f(49.6,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(49.6,60.0);
 glVertex2f(49.6,62.0);
 glVertex2f(50.8,62.0);
 glVertex2f(50.8,60.0);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.5);
 glRasterPos3f(42.0,48.2,0.0);
 outpu("Departure");
 glFlush();
 
 glColor3f(0.0,0.0,0.5);
 glRasterPos3f(59.0,48.2,0.0);
 outpu("Arrival");
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.3,0.5,0.5);
 glVertex2f(50.8,60.0);
 glVertex2f(50.8,62.0);
 glVertex2f(52.0,62.0);
 glVertex2f(52.0,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(52.0,60.0);
 glVertex2f(52.0,62.0);
 glVertex2f(53.2,62.0);
 glVertex2f(53.2,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.3,0.5,0.5);
 glVertex2f(53.2,60.0);
 glVertex2f(53.2,62.0);
 glVertex2f(54.6,62.0);
 glVertex2f(54.6,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(54.6,60.0);
 glVertex2f(54.6,62.0);
 glVertex2f(55.8,62.0);
 glVertex2f(55.8,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.3,0.5,0.5);
 glVertex2f(55.8,60.0);
 glVertex2f(55.8,62.0);
 glVertex2f(57.0,62.0);
 glVertex2f(57.0,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(57.0,60.0);
 glVertex2f(57.0,62.0);
 glVertex2f(58.2,62.0);
 glVertex2f(58.2,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.3,0.5,0.5);
 glVertex2f(58.2,60.0);
 glVertex2f(58.2,62.0);
 glVertex2f(59.4,62.0);
 glVertex2f(59.4,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(59.4,60.0);
 glVertex2f(59.4,62.0);
 glVertex2f(60.6,62.0);
 glVertex2f(60.6,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.3,0.5,0.5);
 glVertex2f(60.6,60.0);
 glVertex2f(60.6,62.0);
 glVertex2f(61.8,62.0);
 glVertex2f(61.8,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(61.8,60.0);
 glVertex2f(61.8,62.0);
 glVertex2f(63.0,62.0);
 glVertex2f(63.0,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.3,0.5,0.5);
 glVertex2f(63.0,60.0);
 glVertex2f(63.0,62.0);
 glVertex2f(64.2,62.0);
 glVertex2f(64.2,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(64.2,60.0);
 glVertex2f(64.2,62.0);
 glVertex2f(65.4,62.0);
 glVertex2f(65.4,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.3,0.5,0.5);
 glVertex2f(65.4,

0);
 glVertex2f(65.4,62.0);
 glVertex2f(66.6,62.0);
 glVertex2f(66.6,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(66.6,60.0);
 glVertex2f(66.6,62.0);
 glVertex2f(67.8,62.0);
 glVertex2f(67.8,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.3,0.5,0.5);
 glVertex2f(67.8,60.0);
 glVertex2f(67.8,62.0);
 glVertex2f(69.0,62.0);
 glVertex2f(69.0,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(69.0,60.0);
 glVertex2f(69.0,62.0);
 glVertex2f(70.2,62.0);
 glVertex2f(70.2,60.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.4,0.4,0.3);
 glVertex2f(42.0,30.0);
 glVertex2f(42.0,45.0);
 glVertex2f(52.0,45.0);
 glVertex2f(52.0,30.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.4,0.4,0.3);
 glVertex2f(58.0,30.0);
 glVertex2f(58.0,45.0);
 glVertex2f(68.0,45.0);
 glVertex2f(68.0,30.0);
 glEnd();
 glFlush();
 
 
 glColor3f(0.0,0.0,0.5);
 glBegin(GL_LINES);
 glVertex2i(46.5,36.0);
 glVertex2i(46.5,39.0);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.5);
 glBegin(GL_LINES);
 glVertex2i(48.5,36.0);
 glVertex2i(48.5,39.0);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.5);
 glBegin(GL_LINES);
 glVertex2i(46.5,37.99);
 glVertex2i(48.5,37.99);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.5);
 glBegin(GL_LINES);
 glVertex2i(62.5,36.0);
 glVertex2i(62.5,39.0);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.5);
 glBegin(GL_LINES);
 glVertex2i(64.5,36.0);
 glVertex2i(64.5,39.0);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.5);
 glBegin(GL_LINES);
 glVertex2i(62.5,37.99);
 glVertex2i(64.5,37.99);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.6,0.8,0.8);
 glVertex2f(30.0,70.0);
 glVertex2f(30.0,73.0);
 glVertex2f(74.6,64.0);
 glVertex2f(74.6,61.0);
 glEnd();
 glFlush();
 
 glColor3f(0.6,0.8,0.8);
 glBegin(GL_LINES);
 glVertex2i(30.0,70.0);
 glVertex2i(40.0,50.0);
 glEnd();
 glFlush();
 
 glColor3f(0.6,0.8,0.8);
 glBegin(GL_LINES);
 glVertex2i(74.8,61.0);
 glVertex2i(70.2,50.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.6,0.8,0.8);
 glVertex2f(29.0,30.0);
 glVertex2f(29.0,32.1);
 glVertex2f(38.0,32.1);
 glVertex2f(38.0,30.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.6,0.8,0.8);
 glVertex2f(32.0,32.1);
 glVertex2f(31.0,69.2);
 glVertex2f(34.3,67.0);
 glVertex2f(33.3,32.1);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.6,0.8,0.8);
 glVertex2f(35.3,32.1);
 glVertex2f(34.5,63.2);
 glVertex2f(37.3,62.0);
 glVertex2f(36.3,32.1);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.7,0.8,0.6);
 glVertex2f(20.0,30.0);
 glVertex2f(20.0,74.5);
 glVertex2f(27.0,74.5);
 glVertex2f(27.0,30.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.7,0.5,0.5);
 glVertex2f(18.7,74.5);
 glVertex2f(20.0,75.5);
 glVertex2f(27.0,75.5);
 glVertex2f(28.3,74.5);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.5,0.7,0.5);
 glVertex2f(20.0,75.5);
 glVertex2f(17.0,84.5);
 glVertex2f(30.0,84.5);
 glVertex2f(27.0,75.5);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.0,1.0,1.0);
 glVertex2f(17.0,84.5);
 glVertex2f(17.0,86.5);
 glVertex2f(30.0,86.5);
 glVertex2f(30.0,84.5);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(17.0,85.5);
 glVertex2i(30.0,85.5);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(17.0,86.5);
 glVertex2i(30.0,86.5);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(18.0,85.5);
 glVertex2i(18.0,86.5);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(19.0,85.5);
 glVertex2i(19.0,86.5);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(20.0,85.5);
 glVertex2i(20.0,86.5);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(21.0,85.5);
 glVertex2i(21.0,86.5);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(22.0,85.5);
 glVertex2i(22.0,86.5);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(23.0,
.5);
 glVertex2i(23.0,86.5);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(24.0,85.5);
 glVertex2i(24.0,86.5);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(25.0,85.5);
 glVertex2i(25.0,86.5);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(26.0,85.5);
 glVertex2i(26.0,86.5);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(27.0,85.5);
 glVertex2i(27.0,86.5);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(28.0,85.5);
 glVertex2i(28.0,86.5);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(29.0,85.5);
 glVertex2i(29.0,86.5);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.3,0.0,0.0);
 glVertex2f(17.0,86.5);
 glVertex2f(20.0,89.5);
 glVertex2f(27.0,89.5);
 glVertex2f(30.0,86.5);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.2,0.0,0.6);
 glVertex2f(20.0,89.5);
 glVertex2f(19.0,92.5);
 glVertex2f(28.0,92.5);
 glVertex2f(27.0,89.5);
 glEnd();
 glFlush();
 
 glColor3f(0.2,0.0,0.6);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
  glPushMatrix();
 glTranslatef(23.4,93.7,0.0);
 glutSolidSphere(4.24,50,50);
 glPopMatrix();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(23.4,98.5);
 glVertex2i(23.4,200.5);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(25.4,97.5);
 glVertex2i(25.4,200.5);
 glEnd();
 glFlush();
 
 glColor3f(0.2,0.0,0.6);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
  glPushMatrix();
 glTranslatef(23.0,99.5,0.0);
 glutSolidSphere(0.54,50,50);
 glPopMatrix();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.4,0.6,0.6);
 glVertex2f(33.0,72.4);
 glVertex2f(33.0,80.0);
 glVertex2f(50.0,80.0);
 glVertex2f(50.0,68.9);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.2,0.5,0.4);
 glVertex2f(32.0,80.0);
 glVertex2f(32.0,83.0);
 glVertex2f(51.0,83.0);
 glVertex2f(51.0,80.0);
 glEnd();
 glFlush();


 glBegin(GL_POLYGON);
 glColor3f(0.3,0.5,0.5);
 glVertex2f(80.8,75.0);
 glVertex2f(79.8,77.0);
 glVertex2f(82.0,79.0);
 glVertex2f(81.0,75.0);
 glEnd();
 glFlush();
}

void cloud()
{
 glColor3f(0.8,0.9,0.9);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
 
 glPushMatrix();
 glTranslatef(12.2,87.4,0.0);
 glutSolidSphere(1.24,50,50);
 glPopMatrix();
 
 glPushMatrix();
 glTranslatef(13.1,88.5,0.0);
 glutSolidSphere(3.24,50,50);
 glPopMatrix();
  
 glPushMatrix();
    glTranslatef(12.4,85.2,0.0);
 glutSolidSphere(3.24,50,50);
 glPopMatrix();
 
 glPushMatrix();
    glTranslatef(12.5,88.2,0.0);
 glutSolidSphere(3.24,50,50);
 glPopMatrix();
 
 glPushMatrix();
    glTranslatef(11.5,84.2,0.0);
 glutSolidSphere(3.24,50,50);
 glPopMatrix();
  
 
 glPushMatrix();
 glTranslatef(35.2,88.4,0.0);
 glutSolidSphere(1.24,50,50);
 glPopMatrix();
 
 glPushMatrix();
 glTranslatef(35.1,88.5,0.0);
 glutSolidSphere(3.24,50,50);
 glPopMatrix();
  
 glPushMatrix();
    glTranslatef(35.4,88.2,0.0);
 glutSolidSphere(3.24,50,50);
 glPopMatrix();
 
 glPushMatrix();
    glTranslatef(38.5,88.2,0.0);
 glutSolidSphere(3.24,50,50);
 glPopMatrix();
 
 glPushMatrix();
    glTranslatef(38.5,88.2,0.0);
 glutSolidSphere(3.24,50,50);
 glPopMatrix();
  
 glPushMatrix();
 glTranslatef(65.2,80.4,0.0);
 glutSolidSphere(1.24,50,50);
 glPopMatrix();
 
 glPushMatrix();
 glTranslatef(65.1,80.5,0.0);
 glutSolidSphere(3.24,50,50);
 glPopMatrix();
  
 glPushMatrix();
    glTranslatef(65.4,85.2,0.0);
 glutSolidSphere(3.24,50,50);
 glPopMatrix();
 
 glPushMatrix();
    glTranslatef(68.5,85.2,0.0);
 glutSolidSphere(3.24,50,50);
 glPopMatrix();
 
 glPushMatrix();
    glTranslatef(68.5,83.2,0.0);
 glutSolidSphere(3.24,50,50);
 glPopMatrix();
 
 
    glFlush();
}

void flight()
{
 glColor3f(0.8,0.9,0.9);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
 glPushMatrix();
 glTranslatef(86.2,40.4,0.0);
 glScalef(0.3,0.5,1);
 glutSolidSphere(10.0,50,50);
 glPopMatrix();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.6,0.6,1.0);
 glVertex2f(83.6,40.0);
 glVertex2f(84.1,42.2);
 glVertex2f(88.2,42.2);

glVertex2f(88.7,40.0);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(84.1,40.0);
 glVertex2i(85.1,42.0);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(85.2,40.0);
 glVertex2i(86.2,42.0);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(87.1,40.0);
 glVertex2i(86.4,42.0);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(88.0,40.0);
 glVertex2i(87.5,42.0);
 glEnd();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(89.3,40.0);
 glVertex2f(89.3,40.6);
 glVertex2f(98.2,41.4);
 glVertex2f(98.7,42.0);
 glEnd();
 glFlush();
 
 
 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(73.3,41.4);
 glVertex2f(73.3,42.0);
 glVertex2f(83.1,40.0);
 glVertex2f(83.3,40.6);
 glEnd();
 glFlush();
 
 glColor3f(0.7,0.0,0.0);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
 glPushMatrix();
 glTranslatef(86.2,45.9,0.0);
 glScalef(0.3,0.5,1);
 glutSolidSphere(2.0,50,50);
 glPopMatrix();
 glFlush();
 
 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(85.8,46.9);
 glVertex2f(86.2,52.0);
 glVertex2f(86.2,52.0);
 glVertex2f(86.6,46.9);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(87.1,45.0);
 glVertex2i(95.4,47.0);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(77.2,47.0);
 glVertex2i(85.4,45.0);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(93.3,39.2);
 glVertex2i(93.3,41.2);
 glEnd();
 glFlush();
 
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(79.3,39.2);
 glVertex2i(79.3,41.2);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
 glPushMatrix();
 glTranslatef(79.0,37.9,0.0);
 glScalef(0.3,0.5,1);
 glutSolidSphere(3.4,50,50);
 glPopMatrix();
 glFlush();
 
 glColor3f(1.0,1.0,1.0);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
 glPushMatrix();
 glTranslatef(79.0,38.0,0.0);
 glScalef(0.3,0.5,1);
 glutSolidSphere(1.0,50,50);
 glPopMatrix();
 glFlush();
 
 
 glColor3f(0.0,0.0,0.0);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
 glPushMatrix();
 glTranslatef(93.0,37.9,0.0);
 glScalef(0.3,0.5,1);
 glutSolidSphere(3.4,50,50);
 glPopMatrix();
 glFlush();
 
 glColor3f(1.0,1.0,1.0);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
 glPushMatrix();
 glTranslatef(93.0,38.0,0.0);
 glScalef(0.3,0.5,1);
 glutSolidSphere(1.0,50,50);
 glPopMatrix();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(81.8,33.1);
 glVertex2i(81.8,41.0);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2i(91.8,33.1);
 glVertex2i(91.8,41.0);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_LINES);
 glVertex2f(86.3,30.5);
 glVertex2f(86.3,35.6);
 glEnd();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
 glPushMatrix();
 glTranslatef(81.1,31.5,0.0);
 glScalef(0.3,0.5,1);
 glutSolidSphere(3.1,50,50);
 glPopMatrix();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
 glPushMatrix();
 glTranslatef(91.1,31.5,0.0);
 glScalef(0.3,0.5,1);
 glutSolidSphere(3.1,50,50);
 glPopMatrix();
 glFlush();
 
 glColor3f(0.0,0.0,0.0);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
 glPushMatrix();
 glTranslatef(86.3,31.5,0.0);
 glScalef(0.3,0.5,1);
 glutSolidSphere(3.1,50,50);
 glPopMatrix();
 glFlush();
}




void display()
{
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(0.0,0.0,0.5);
 glRasterPos3f(42.0,9.2,0.0);
 outpu("AIRPORT");
 
 
 
 glColor3f(0.0,0.0,0.5);
 glBegin(GL_LINES);
 glVertex2i(4,10);
 glVertex2i(40,10);
 
 glVertex2f(53.5,10.0);
 glVertex2f(95.5,10.0);
 
 glVertex2i(8,20);
 glVertex2i(12,20);
 
 glVertex2i(15,20);
 glVertex2i(19,20);
 
 glVertex2i(22,20);
 glVertex2i(26,20);
 
 glVertex2i(29,20);
 glVertex2i(33,20);
 
 glVertex2i(36,20);
 glVertex2i(40,20);
 
 glVertex2i(43,20);
 glVertex2i(47,20);
 
 glVertex2i(50,20);
 glVertex2i(54,20);
 
 glVertex2i(57,20);
 glVertex2i(61,20);
 
 glVertex2i(64,20);
 glVertex2i(68,20);


glVertex2i(71,20);
 glVertex2i(75,20);
 
 glVertex2i(78,20);
 glVertex2i(82,20);
 
 glVertex2i(85,20);
 glVertex2i(89,20);
 
 glVertex2i(4,30);
 glVertex2f(95.5,30);
 


 glEnd();
 glFlush();
 build();
 cloud();
 flight();
 
 
}
int main(int argc,char **argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowSize(1000,1000);
 glutInitWindowPosition(0,0);
 glutCreateWindow("Airport");
 glClearColor(1.0,1.0,1.0,0.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(0.0,100.0,0.0,100.0,0.0,100.0);
 glutDisplayFunc(display);
 glutMainLoop();
 return 0;
}
