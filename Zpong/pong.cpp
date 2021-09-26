#include <string>
#include <windows.h>
#include <iostream>
#include <conio.h>
#include <sstream>
#include <math.h>
#include <gl\gl.h>
#include <gl\glu.h>
#include "GL/freeglut.h"
#pragma comment(lib, "OpenGL32.lib")

// window size and update rate (60 fps)
int width = 500;
int height = 200;
int interval = 1000 / 60;

// program entry point
int _tmain(int argc, char** argv) {
    // initialize opengl (via glut)
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(width, height);
    glutCreateWindow("noobtuts.com Pong");

    // start the whole thing
    glutMainLoop();
    return 0;
}