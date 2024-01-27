#include <GL/glut.h>

void init(void) {
    glColor3ub(224, 220, 85);
    glLineWidth(1.0);
    glOrtho(-6, 6, -6, 6, -6, 6);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    
    glPushMatrix();
    
    
    
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(-0.10, 0.20);
    glVertex2f(0.10, 0.20);
    glColor3f(1.0, 0.0, 1.0);
    glVertex2f(0.20, 0.40);
    glVertex2f(-0.30, 0.40);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.15, 0.40);
    glVertex2f(0.18, 0.40);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.16, 0.50);
    glVertex2f(-0.13, 0.50);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.10, 0.50);
    glVertex2f(0.15, 0.50);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.13, 0.60);
    glVertex2f(-0.08, 0.60);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3ub(242, 235, 102);
    glVertex2f(-0.10, 0.47);
    glVertex2f(-0.05, 0.47);
    glVertex2f(-0.10, 0.42);
    glVertex2f(0.0, 0.42);
    glVertex2f(0.0, 0.47);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3ub(242, 235, 102);
    glVertex2f(0.15, 0.47);
    glVertex2f(0.05, 0.47);
    glVertex2f(0.05, 0.42);
    glVertex2f(0.15, 0.42);
    glVertex2f(0.10, 0.47);
    glEnd();
    
    glPopMatrix();
    
    glutSwapBuffers();
    glFlush();
}

void KeyboardAssign(GLubyte key, GLint x, GLint y) {
    switch (key) {
    case 'w':
        glTranslatef(0.0, 0.1, 0.0);
        break;
    case 'a':
        glTranslatef(-0.1, 0.0, 0.0);
        break;
    case 's':
        glTranslatef(0.0, -0.1, 0.0);
        break;
    case 'd':
        glTranslatef(0.1, 0.0, 0.0);
        break;
    case 'r':
        glRotatef(10.0, 0.0, 0.0, 1.0);
        break;
    }
    glutPostRedisplay();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("Bujur Sangkar");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(KeyboardAssign);
    glutMainLoop();
    return 0;
}

