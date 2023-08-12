#include "cuadrado.h"
void cuadrado::dibujarCuadrado(float x, float y, float z, float rot, float rotX, float rotY, float rotZ ) {
	glPushMatrix();
	glTranslatef(x, y, z);
	glRotatef(rot, rotX, rotY, rotZ);
	glutSolidCube(0.5);
	glPopMatrix();
}