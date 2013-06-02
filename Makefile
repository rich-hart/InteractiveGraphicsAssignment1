<<<<<<< HEAD
GCC_OPTIONS=-Wall -pedantic -I include 
=======
GCC_OPTIONS=-Wall -pedantic -I include
>>>>>>> f5aefe07c1bb48b18ff58a7f602b072e08c8ed95
GL_OPTIONS=-lGLEW -lGL -lglut
OPTIONS=$(GCC_OPTIONS) $(GL_OPTIONS)


<<<<<<< HEAD
all: 
	g++ assignment1.cpp Common/InitShader.o -lGLEW -lGL -lglut -o assignment1

=======
all: red_triangle 
	g++ red_triangle.cpp Common/InitShader.o $(OPTIONS) -o $red_triangle  
>>>>>>> f5aefe07c1bb48b18ff58a7f602b072e08c8ed95

