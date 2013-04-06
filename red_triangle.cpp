// First new GL program
// Just makes a red triangle

#include "include/Angel.h"

const int NumPoints = 3;

//--------------------------------------------------------------------------



void init( void )
{
    // Specifiy the vertices for a triangle

    vec2 triangle_vertices[3] = {
        vec2( -0.75, -0.75 ), vec2( 0.0, 0.75 ), vec2( 0.75, -0.75 )
    };
	


    // Create a vertex array object
    GLuint vao;
    glGenVertexArraysAPPLE( 1, &vao );
    glBindVertexArrayAPPLE( vao );
    

    // Create and initialize a buffer object
    GLuint buffer;
    glGenBuffers( 1, &buffer );
    glBindBuffer( GL_ARRAY_BUFFER, buffer );
    glBufferData( GL_ARRAY_BUFFER, sizeof(triangle_vertices), triangle_vertices, GL_STATIC_DRAW );

    // Load shaders and use the resulting shader program
    GLuint program = InitShader( "vshader21.glsl", "fshader21.glsl" );
    glUseProgram( program );

    // Initialize the vertex position attribute from the vertex shader
    GLuint loc = glGetAttribLocation( program, "vPosition" );
    glEnableVertexAttribArray( loc );
    glVertexAttribPointer( loc, 2, GL_FLOAT, GL_FALSE, 0,
                           BUFFER_OFFSET(0) );

    glClearColor( 0.0, 0.0, 0.0, 0.0 ); // white background
}

//----------------------------------------------------------------------------

void display( void )
{
    glClear( GL_COLOR_BUFFER_BIT );     // clear the window
    glDrawArrays( GL_TRIANGLES, 0, NumPoints );    // draw the points
    glFlush();
}

//----------------------------------------------------------------------------

void keyboard( unsigned char key, int x, int y )
{
    switch ( key ) {
    case 033:
        exit( EXIT_SUCCESS );
        break;
    }
}

//----------------------------------------------------------------------------

int
main( int argc, char **argv )
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGBA );
    glutInitWindowSize( 512, 512 );
    glutInitWindowPosition(100, 100);

    glutCreateWindow( "Red Triangle" );
    
   
    init();
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glutDisplayFunc( display );
    glutKeyboardFunc( keyboard );

    glutMainLoop();
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
    return 0;
}
