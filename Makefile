CC=g++
GCC_OPTIONS=-Wall -pedantic -I include
GL_OPTIONS=-framework OpenGL -framework GLUT 
OPTIONS=$(GCC_OPTIONS) $(GL_OPTIONS)


all: red_triangle

red_triangle: red_triangle.o initShader.o
	$(CC) red_triangle.o initShader.o $(OPTIONS) -o red_triangle

red_triangle.o: red_triangle.cpp
	$(CC) -c red_triangle.cpp

initShader.o: Common/initShader.cpp
	$(CC) -c Common/initShader.cpp

clean:
	rm -rf *.o red_triangle