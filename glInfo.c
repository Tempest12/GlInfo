#include <stdio.h>

#include <GL/glut.h>

int main(int argc, char** argv)
{
    const char* infoString;

    glutInit(&argc, argv); 
    glutCreateWindow("Do you see me?");

    //Vendor:
    infoString = (char*)glGetString(GL_VENDOR);    
    printf("Vendor: %s\n", infoString);
    
    //Renderer:
    //infoString = (char*)glGetString(Gl_RENDERER);
    //printf("Renderer: %s\n", infoString);

    //Version:
    infoString = (char*)glGetString(GL_VERSION);
    printf("Version: %s\n", infoString);

    //GLSL Version:
    infoString = (char*)glGetString(GL_SHADING_LANGUAGE_VERSION);
    printf("GLSL version: %s\n", infoString);

    //Extensions:
    //infoString = (char*)glGetString(GL_EXTENSIONS);
    //printf("Extensions: %s\n", infoString);

    return 0;
}
