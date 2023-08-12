#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"
#pragma once
class cuadrado
{
public:
	cuadrado() {};
	void dibujarCuadrado(float x, float y, float z, float rot, float rotX, float rotY, float rotZ);
	~cuadrado() {};

};

