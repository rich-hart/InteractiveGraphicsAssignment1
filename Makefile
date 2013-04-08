CC=g++
GCC_OPTIONS=-Wall -pedantic -I include
GL_OPTIONS=-lGL -lglut 
OPTIONS=$(GCC_OPTIONS) $(GL_OPTIONS)

all: red_triangle

red_triangle: red_triangle.o InitShader.o
	$(CC) red_triangle.o InitShader.o  -o red_triangle

red_triangle.o: red_triangle.cpp
	$(CC) -c red_triangle.cpp

InitShader.o: Common/InitShader.cpp
	$(CC) -c Common/InitShader.cpp

clean:
	rm -rf *.o red_triangle
