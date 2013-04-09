GCC_OPTIONS=-Wall -pedantic -I include
GL_OPTIONS=-lGLEW -lGL -lglut
OPTIONS=$(GCC_OPTIONS) $(GL_OPTIONS)


all: red_triangle 
	g++ red_triangle.cpp Common/InitShader.o $(OPTIONS) -o $red_triangle  

