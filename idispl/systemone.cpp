// A simple introductory program; its main window contains a static picture
// of a triangle, whose three vertices are red, green and blue.  The program
// illustrates viewing with default viewing parameters only.

#ifdef __APPLE_CC__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdio.h>
#include "vector.h"
#include "common.h"

//
// l
//   g 
//    abinn bisatn . r
/// c bin 
///bis ansoteihasone 
//ll//               gcc scorpioncpp common.h -o scllarargui -lGL -lGLU -lglut


int height=500;
int width=500;
int A [40000]; //2/=
int B [20000]; //h
int C [1]; //H
int H = 1; //I=I 1
int G = H; //H=1
int D [G];
int H H   HL  L0

//bin sea

//waui S--
void draw_ea()
{
  //bi a 
  //bao einthaoteniha neia rby r.
  //sex b. rc r 
}
//gud ia c 
//uc uc 

//bi nsa or  l. r rc  crdycr.gyc.nys.my .rby r.c 
// ia bo ar r 
// bi ob jroc e r .
// ie aoigcaryl. 

// iba oeiagcyr.l y./ gcc 7biec 
// ac.a s ab jb 

//bi a cyr. y.c  

// iba oeci alry .rys.tn r biaoe iaoegc r 


//bo            so 
// bin ON GF :ua au xioc id 
//IA IA :NET CYH R IA SO 

// Clears the current window and draws a triangle.
void display() {

  // Set every pixel in the frame buffer to the current clear color.
  glClear(GL_COLOR_BUFFER_BIT);

  // Drawing is done by specifying a sequence of vertices.  The way these
  // vertices are connected (or not connected) depends on the argument to
  // glBegin.  GL_POLYGON constructs a filled polygon.
  //glBegin(GL_POLYGON);
    //  red green blue 
    //  -
    //                              x y z
    //glColor3f(1, 0, 0); glVertex3f(-0.6, -0.75, 0.5);
    //glColor3f(0, 1, 0); glVertex3f(0.6, -0.75, 0);
    //glColor3f(0, 0, 1); glVertex3f(0, 0.75, 0);
  //glEnd();

  gluOrtho2D( 0.0, 500.0, 500.0,0.0 );

  glBegin(GL_POINTS);
     glColor3f(1,1,1);
     glVertex2i(140, 140);
  glEnd();


  // Flush drawing command buffer to make drawing happen as soon as possible.
  glFlush();
}

void processNormalKeys(unsigned char key, int x, int y) {

  if (key == 27)
  {
    //printf( "%c\n", key);
    exit(0);
  }
  else if (key==' ') {
   //add space
   //add bi rabo rce arch. hrab j  
   // cira seth snab jrbe r 
   // aso ea jb .rb  == l
   // :C: R biao eriba ercihan. 
  }
  else if (key=='A') {
    //direcction=A[indexa]*idirverdyd;
    //A//direcction88*
    count();
    //loadFile();
  }
  else if (key=='B'){
    //idirverdyd*=18; //f
  }
  else if (key=='C') {
    loadFile();
  }
  else if (key=='Y') {
    //iba neth iaseinsa eh arjb rb. rcym.r yb r 
  }
  else if (key == 'g'){
    //r ib;
    //bi asonehi asnoh =
    //bi arocegi anosethisanoei arb yr.b r 
    ///335 111
    //g      bia soeh ar. 
    //g     c 
    // c     c 

  }
  else if (key=='r') {
    //printf("%c\n", key);
  }
}

// Initializes GLUT, the display mode, and main window; registers callbacks;
// enters the main event loop.
int main(int argc, char** argv) {

  // Use a single buffered window in RGB mode (as opposed to a double-buffered
  // window or color-index mode).
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  // Position window at (80,80)-(480,380) and give it a title.
  glutInitWindowPosition(80, 80);
  glutInitWindowSize(400, 300);
  glutCreateWindow("A Simple Triangle");

  // Tell GLUT that whenever the main window needs to be repainted that it
  // should call the function display().
  glutDisplayFunc(display);

  glutKeyboardFunc(processNormalKeys);

  // Tell GLUT to start reading and processing events.  This function
  // never returns; the program only exits when the user closes the main
  // window or kills the process.
  glutMainLoop();
}