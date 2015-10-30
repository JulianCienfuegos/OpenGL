#include <iostream>
#include "display.h"
#include <GL/glew.h>

using namespace std;

int main()
{
    Display d(800, 800, "Hello World");

    while(!d.IsClosed()){
        glClearColor(0.0f, 0.15f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
    }
    return 0;
}
