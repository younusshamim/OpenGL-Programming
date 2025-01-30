#include <GL/glut.h>
#include <cmath>

void landscape() {
    glClear(GL_COLOR_BUFFER_BIT);

    //road section
    glColor3f(0.196f, 0.196f, 0.196f);
    glBegin(GL_POLYGON);
    glVertex2f(10.0f, -10.0f);
    glVertex2f(-10.0f, -10.0f);
    glVertex2f(-10.0f, -5.0f);
    glVertex2f(10.0f, -5.0f);
    glEnd();



    //Land section

    // Set color to light green using glColor3f
     glColor3f(0.3f, 1.0f, 0.2f);

    glBegin(GL_POLYGON);
    glVertex2f(10.0f, -5.0f);
    glVertex2f(-10.0f, -5.0f);
    glVertex2f(-10.0f, 1.0f);
    glVertex2f(10.0f, 1.0f);
    glEnd();

    // house full
    glColor3f(0.8f, 0.33f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-9.0f, 2.0f);
    glVertex2f(-1.0f, 2.0f);
    glVertex2f(-1.0f, -3.0f);
    glVertex2f(-9.0f, -3.0f);
    glEnd();

    // tringle home
    glColor3f(0.2f, 0.2f, 0.2f);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f, 2.0f);
    glVertex2f(-10.0f, 2.0f);
    glVertex2f(-5.0f, 6.0f);
    glEnd();

    // door
    glColor3f(0.85f, 0.65f, 0.13f);
    glBegin(GL_POLYGON);
    glVertex2f(-6.0f,0.0f);
    glVertex2f(-6.0f,-3.0f);
    glVertex2f(-4.0f,-3.0f);
    glVertex2f(-4.0f,0.0f);
    glEnd();

    //window
    glColor3f(0.85f, 0.65f, 0.13f);
    glBegin(GL_POLYGON);
    glVertex2f(-8.5f, 0.0f);
    glVertex2f(-8.5f, -2.0f);
    glVertex2f(-7.0f, -2.0f);
    glVertex2f(-7.0f, 0.0f);
    glEnd();

    //windows
    glColor3f(0.85f, 0.65f, 0.13f);
    glBegin(GL_POLYGON);
    glVertex2f(-3.0f, 0.0f);
    glVertex2f(-1.5f, 0.0f);
    glVertex2f(-1.5f, -2.0f);
    glVertex2f(-3.0f, -2.0f);
    glEnd();

     // home road
    glColor3f(0.196f, 0.196f, 0.196f);
    glBegin(GL_POLYGON);
    glVertex2f(-6.0f, -3.0f);
    glVertex2f(-6.0f, -5.0f);
    glVertex2f(-4.0f, -5.0f);
    glVertex2f(-4.0f, -3.0f);
    glEnd();

     // home road
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-5.0f, -3.4f);
    glVertex2f(-5.0f, -4.6f);
    glVertex2f(-5.1f, -4.6f);
    glVertex2f(-5.1f, -3.4f);
    glEnd();

        // Sun
    glColor3f(1.0f, 0.85f, 0.0f);
    float sunX = 8.5f, sunY = 8.0f, sunRadius = 1.5f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(sunX, sunY);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = sunRadius * cos(angle);
        float y = sunRadius * sin(angle);
        glVertex2f(sunX + x, sunY + y);
    }
    glEnd();



    //Full tree start

    //body
    glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.5f,2.0f);
    glVertex2f(-0.5f,-4.0f);
    glVertex2f(1.0f,-4.0f);
    glVertex2f(1.0f,2.0f);
    glEnd();

    //top leep
    glColor3f(0.0f, 0.5f, 0.0f);  // Green
    float leep1X = 0.5f, leep1Y = 2.0f, leep1Radius = 1.0f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(leep1X, leep1Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = leep1Radius * cos(angle);
        float y = leep1Radius * sin(angle);
        glVertex2f(leep1X + x, leep1Y + y);
    }
    glEnd();

    //leep 2
    glColor3f(0.0f, 0.5f, 0.0f);  // Green
    float leep2X = -1.0f, leep2Y = 1.5f, leep2Radius = 1.0f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(leep2X, leep2Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = leep2Radius * cos(angle);
        float y = leep2Radius * sin(angle);
        glVertex2f(leep2X + x, leep2Y + y);
    }
    glEnd();

    //leep3
    glColor3f(0.0f, 0.5f, 0.0f);  // Green
    float leep3X = 1.5f, leep3Y = 1.5f, leep3Radius = 1.0f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(leep3X, leep3Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = leep3Radius * cos(angle);
        float y = leep3Radius * sin(angle);
        glVertex2f(leep3X + x, leep3Y + y);
    }
    glEnd();

    //leep 4
    glColor3f(0.0f, 0.5f, 0.0f); // Green
    float leep4X = -1.5f, leep4Y = 2.5f, leep4Radius = 1.4f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(leep4X, leep4Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = leep4Radius * cos(angle);
        float y = leep4Radius * sin(angle);
        glVertex2f(leep4X + x, leep4Y + y);
    }
    glEnd();

    //leep 5
    glColor3f(0.0f, 0.5f, 0.0f);  // Green
    float leep5X = -1.7f, leep5Y = 4.5f, leep5Radius = 1.4f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(leep5X, leep5Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = leep5Radius * cos(angle);
        float y = leep5Radius * sin(angle);
        glVertex2f(leep5X + x, leep5Y + y);
    }
    glEnd();

    //leep 6

    glColor3f(0.0f, 0.5f, 0.0f);  // Green
    float leep6X = 2.0f, leep6Y = 3.7f, leep6Radius = 1.6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(leep6X, leep6Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = leep6Radius * cos(angle);
        float y = leep6Radius * sin(angle);
        glVertex2f(leep6X + x, leep6Y + y);
    }
    glEnd();

    //leep 7
    glColor3f(0.0f, 0.5f, 0.0f);  // Green
    float leep7X = 0.5f, leep7Y = 5.5f, leep7Radius = 1.6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(leep7X, leep7Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = leep7Radius * cos(angle);
        float y = leep7Radius * sin(angle);
        glVertex2f(leep7X + x, leep7Y + y);
    }
    glEnd();

    //leep 8
    glColor3f(0.0f, 0.5f, 0.0f);  // Green
    float leep8X = 0.5f, leep8Y = 3.5f, leep8Radius = 1.6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(leep8X, leep8Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = leep8Radius * cos(angle);
        float y = leep8Radius * sin(angle);
        glVertex2f(leep8X + x, leep8Y + y);
    }
    glEnd();


    //s-tree 2
    glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_POLYGON);
    glVertex2f(-3.6f, -5.0f);
    glVertex2f(-3.4f, -5.0f);
    glVertex2f(-3.4f, -4.6f);
    glVertex2f(-3.6f, -4.6f);
    glEnd();

    //triangle
    glColor3f(0.0f, 0.5f, 0.0f);  // Green
    glBegin(GL_TRIANGLES);
    glVertex2f(-4.0f, -4.6f);
    glVertex2f(-3.0f, -4.6f);
    glVertex2f(-3.5f, -3.8f);


   //triangle
    glBegin(GL_TRIANGLES);
    glVertex2f(-4.0f, -4.2f);
    glVertex2f(-3.0f, -4.2f);
    glVertex2f(-3.5f, -3.2f);
    glEnd();


    // small trees
    //s-tree 1
    glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_POLYGON);
    glVertex2f(-9.4f, -5.0f);
    glVertex2f(-9.2f,-5.0f);
    glVertex2f(-9.2f,-4.6f);
    glVertex2f(-9.4f,-4.6f);
    glEnd();

    //
    glColor3f(0.0f, 0.5f, 0.0f);  // Green
    glBegin(GL_TRIANGLES);
    glVertex2f(-9.8f, -4.6f);
    glVertex2f(-8.8f, -4.6f);
    glVertex2f(-9.3f, -4.0f);
    glEnd();

    glColor3f(0.0f, 0.5f, 0.0f);  // Green
    glBegin(GL_TRIANGLES);
    glVertex2f(-9.8f, -4.3f);
    glVertex2f(-8.8f, -4.3f);
    glVertex2f(-9.3f, -3.2f);
    glEnd();

    //tree small 3
     glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_POLYGON);
    glVertex2f(1.4f, -5.0f);
    glVertex2f(1.6f,-5.0f);
    glVertex2f(1.6f,-4.6f);
    glVertex2f(1.4f,-4.6f);
    glEnd();

    //triangle
    glColor3f(0.0f, 0.5f, 0.0f);  // Green
    glBegin(GL_TRIANGLES);
    glVertex2f(1.0f, -4.6f);
    glVertex2f(2.0f, -4.6f);
    glVertex2f(1.5f, -3.8f);
    glEnd();

     //triangle

    glBegin(GL_TRIANGLES);
    glVertex2f(1.0f, -4.2f);
    glVertex2f(2.0f, -4.2f);
    glVertex2f(1.5f, -3.2f);
    glEnd();

    // tree small 4
    glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_POLYGON);
    glVertex2f(6.4f, -5.0f);
    glVertex2f(6.6f,-5.0f);
    glVertex2f(6.6f,-4.6f);
    glVertex2f(6.4f,-4.6f);
    glEnd();

    //triangle
    glColor3f(0.0f, 0.5f, 0.0f);  // Green
    glBegin(GL_TRIANGLES);
    glVertex2f(6.0f, -4.6f);
    glVertex2f(7.0f, -4.6f);
    glVertex2f(6.5f, -3.8f);

    glBegin(GL_TRIANGLES);
    glVertex2f(6.0f, -4.2f);
    glVertex2f(7.0f, -4.2f);
    glVertex2f(6.5f, -3.2f);
    glEnd();

    // small tree 5

    glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_POLYGON);
    glVertex2f(9.8f, -5.0f);
    glVertex2f(10.0f,-5.0f);
    glVertex2f(10.0f,-4.6f);
    glVertex2f(9.8f,-4.6f);
    glEnd();

     //triangle
    glColor3f(0.0f, 0.5f, 0.0f); // Green
    glBegin(GL_TRIANGLES);
    glVertex2f(9.4f, -4.6f);
    glVertex2f(10.2f, -4.6f);
    glVertex2f(9.9f, -3.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(9.4f, -4.2f);
    glVertex2f(10.2f, -4.2f);
    glVertex2f(9.9f, -3.2f);
    glEnd();

    // mountend
    glColor3f(0.4f, 0.2f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(6.0f, 1.0f);
    glVertex2f(10.0f, 1.0f);
    glVertex2f(8.0f, 7.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(3.0f, 1.0f);
    glVertex2f(7.0f, 1.0f);
    glVertex2f(5.5f, 6.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(4.0f, 1.0f);
    glVertex2f(8.0f, 1.0f);
    glVertex2f(6.5f, 5.0f);
    glEnd();

     glBegin(GL_TRIANGLES);
    glVertex2f(7.0f, 1.0f);
    glVertex2f(12.0f, 1.0f);
    glVertex2f(9.5f, 8.0f);
    glEnd();


    //lamp post
    //lamp post 1
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-6.6f, -5.0f);
    glVertex2f(-6.5f,-5.0f);
    glVertex2f(-6.5f,-1.5f);
    glVertex2f(-6.6f,-1.5f);
    glEnd();

    //light
    glColor3f(1.0f, 0.9f, 0.7f);
    float light1X = -6.5f, light1Y = -1.0f, light1Radius = .5f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(light1X, light1Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = light1Radius * cos(angle);
        float y = light1Radius * sin(angle);
        glVertex2f(light1X + x, light1Y + y);
    }
    glEnd();

    //lamp 2
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-1.0f, -5.0f);
    glVertex2f(-0.9f,-5.0f);
    glVertex2f(-0.9f,-1.5f);
    glVertex2f(-1.0f,-1.5f);
    glEnd();

    //light2
    glColor3f(1.0f, 0.9f, 0.7f);
    float light2X = -1.0f, light2Y = -1.0f, light2Radius = .5f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(light2X, light2Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = light2Radius * cos(angle);
        float y = light2Radius * sin(angle);
        glVertex2f(light2X + x, light2Y + y);
    }
    glEnd();

    //lamp 3
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(4.5f, -5.0f);
    glVertex2f(4.6f,-5.0f);
    glVertex2f(4.6f,-1.5f);
    glVertex2f(4.5f,-1.5f);
    glEnd();

    //light2
    glColor3f(1.0f, 0.9f, 0.7f);
    float light3X = 4.55f, light3Y = -1.0f, light3Radius = .5f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(light3X, light3Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = light3Radius * cos(angle);
        float y = light3Radius * sin(angle);
        glVertex2f(light3X + x, light3Y + y);
    }
    glEnd();

    //lamp 4
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(8.1f, -5.0f);
    glVertex2f(8.2f,-5.0f);
    glVertex2f(8.2f,-1.5f);
    glVertex2f(8.1f,-1.5f);
    glEnd();

    //light4
    glColor3f(1.0f, 0.9f, 0.7f);
    float light4X = 8.15f, light4Y = -1.0f, light4Radius = .5f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(light4X, light4Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = light4Radius * cos(angle);
        float y = light4Radius * sin(angle);
        glVertex2f(light4X + x, light4Y + y);
    }
    glEnd();

    //road line
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-10.0f, -7.4f);
    glVertex2f(-10.0f, -7.6f);
    glVertex2f(-7.0f, -7.6f);
    glVertex2f(-7.0f, -7.4f);
    glEnd();

    //2
    //road line
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-5.0f, -7.4f);
    glVertex2f(-5.0f, -7.6f);
    glVertex2f(-2.0f, -7.6f);
    glVertex2f(-2.0f, -7.4f);
    glEnd();

    //3
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, -7.4f);
    glVertex2f(0.0f, -7.6f);
    glVertex2f(3.0f, -7.6f);
    glVertex2f(3.0f, -7.4f);
    glEnd();

    //4
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(5.0f, -7.4f);
    glVertex2f(5.0f, -7.6f);
    glVertex2f(8.0f, -7.6f);
    glVertex2f(8.0f, -7.4f);
    glEnd();

    //5
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(9.5f, -7.4f);
    glVertex2f(9.5f, -7.6f);
    glVertex2f(12.0f, -7.6f);
    glVertex2f(12.0f, -7.4f);
    glEnd();




    //mag a
    //mag a 1
    glColor3f(1.0f, 1.0f, 1.0f); // Pure white
    float maga1X = 6.0f, maga1Y = 8.0f, maga1Radius = .6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(maga1X, maga1Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = maga1Radius * cos(angle);
        float y = maga1Radius * sin(angle);
        glVertex2f(maga1X + x, maga1Y + y);
         }
    glEnd();
    //mag a 2
    glColor3f(1.0f, 1.0f, 1.0f); // Pure white
    float maga2X = 5.0f, maga2Y = 8.5f, maga2Radius = .6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(maga2X, maga2Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = maga2Radius * cos(angle);
        float y = maga2Radius * sin(angle);
        glVertex2f(maga2X + x, maga2Y + y);
         }
    glEnd();
    //mag a 3
    glColor3f(1.0f, 1.0f, 1.0f); // Pure white
    float maga3X = 4.0f, maga3Y = 8.3f, maga3Radius = .6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(maga3X, maga3Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = maga3Radius * cos(angle);
        float y = maga3Radius * sin(angle);
        glVertex2f(maga3X + x, maga3Y + y);
         }
    glEnd();
    //mag a 4
    glColor3f(1.0f, 1.0f, 1.0f); // Pure white
    float maga4X = 4.5f, maga4Y = 7.5f, maga4Radius = .6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(maga4X, maga4Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = maga4Radius * cos(angle);
        float y = maga4Radius * sin(angle);
        glVertex2f(maga4X + x, maga4Y + y);
         }
    glEnd();
    //mag a 5
    glColor3f(1.0f, 1.0f, 1.0f); // Pure white
    float maga5X = 5.4f, maga5Y = 7.5f, maga5Radius = .6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(maga5X, maga5Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = maga5Radius * cos(angle);
        float y = maga5Radius * sin(angle);
        glVertex2f(maga5X + x, maga5Y + y);
         }
    glEnd();

    //mag b 1
    glColor3f(1.0f, 1.0f, 1.0f); // Pure white
    float magb1X = 1.0f, magb1Y = 8.5f, magb1Radius = .6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(magb1X, magb1Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = magb1Radius * cos(angle);
        float y = magb1Radius * sin(angle);
        glVertex2f(magb1X + x, magb1Y + y);
         }
    glEnd();
    //mag b 2
    glColor3f(1.0f, 1.0f, 1.0f); // Pure white
    float magb2X = 0.2f, magb2Y = 8.8f, magb2Radius = .6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(magb2X, magb2Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = magb2Radius * cos(angle);
        float y = magb2Radius * sin(angle);
        glVertex2f(magb2X + x, magb2Y + y);
         }
    glEnd();
    //mag b 3
    glColor3f(1.0f, 1.0f, 1.0f); // Pure white
    float magb3X = -0.6f, magb3Y = 8.6f, magb3Radius = .6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(magb3X, magb3Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = magb3Radius * cos(angle);
        float y = magb3Radius * sin(angle);
        glVertex2f(magb3X + x, magb3Y + y);
         }
    glEnd();
    //mag b 4
    glColor3f(1.0f, 1.0f, 1.0f); // Pure white
    float magb4X = 0.2f, magb4Y = 7.8f, magb4Radius = .6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(magb4X, magb4Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = magb4Radius * cos(angle);
        float y = magb4Radius * sin(angle);
        glVertex2f(magb4X + x, magb4Y + y);
         }
    glEnd();
    //mag b 5
    glColor3f(1.0f, 1.0f, 1.0f); // Pure white
    float magb5X = -0.8f, magb5Y = 7.8f, magb5Radius = .6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(magb5X, magb5Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = magb5Radius * cos(angle);
        float y = magb5Radius * sin(angle);
        glVertex2f(magb5X + x, magb5Y + y);
         }
    glEnd();
    //mag c 1
    glColor3f(1.0f, 1.0f, 1.0f); // Pure white
    float magc1X = -5.8f, magc1Y = 7.0f, magc1Radius = .6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(magc1X, magc1Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = magc1Radius * cos(angle);
        float y = magc1Radius * sin(angle);
        glVertex2f(magc1X + x, magc1Y + y);
         }
    glEnd();
    //mag c 2
    glColor3f(1.0f, 1.0f, 1.0f); // Pure white
    float magc2X = -6.5f, magc2Y = 7.5f, magc2Radius = .6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(magc2X, magc2Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = magc2Radius * cos(angle);
        float y = magc2Radius * sin(angle);
        glVertex2f(magc2X + x, magc2Y + y);
         }
    glEnd();
    //mag c 3
    glColor3f(1.0f, 1.0f, 1.0f); // Pure white
    float magc3X = -7.5f, magc3Y = 7.2f, magc3Radius = .6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(magc3X, magc3Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = magc3Radius * cos(angle);
        float y = magc3Radius * sin(angle);
        glVertex2f(magc3X + x, magc3Y + y);
         }
    glEnd();
    //mag c 4
    glColor3f(1.0f, 1.0f, 1.0f); // Pure white
    float magc4X = -6.8f, magc4Y = 6.6f, magc4Radius = .6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(magc4X, magc4Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = magc4Radius * cos(angle);
        float y = magc4Radius * sin(angle);
        glVertex2f(magc4X + x, magc4Y + y);
         }
    glEnd();
    //mag c 5
    glColor3f(1.0f, 1.0f, 1.0f); // Pure white
    float magc5X = -7.8f, magc5Y = 6.5f, magc5Radius = .6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(magc5X, magc5Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = magc5Radius * cos(angle);
        float y = magc5Radius * sin(angle);
        glVertex2f(magc5X + x, magc5Y + y);
         }
    glEnd();

// bus
    glColor3f(1.0f, 0.27f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-5.0f, -8.0f);
    glVertex2f(0.0f, -8.0f);
    glVertex2f(0.0f, -7.0f);
    glVertex2f(-5.0f, -7.0f);
    glEnd();

    glColor3f(1.0f, 0.27f, 0.0f); //gray
    glBegin(GL_POLYGON);
    glVertex2f(-5.0f, -5.5f);
    glVertex2f(-5.0f, -7.0f);
    glVertex2f(0.0f, -7.0f);
    glVertex2f(-0.6f, -5.5f);
    glEnd();

    // bus window
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-4.8f, -6.2f);
    glVertex2f(-4.8f, -6.8f);
    glVertex2f(-4.2f, -6.8f);
    glVertex2f(-4.2f, -6.2f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-3.8f, -6.2f);
    glVertex2f(-3.8f, -6.8f);
    glVertex2f(-3.2f, -6.8f);
    glVertex2f(-3.2f, -6.2f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-2.8f, -6.2f);
    glVertex2f(-2.8f, -6.8f);
    glVertex2f(-2.2f, -6.8f);
    glVertex2f(-2.2f, -6.2f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-1.8f, -6.2f);
    glVertex2f(-1.8f, -6.8f);
    glVertex2f(-1.2f, -6.8f);
    glVertex2f(-1.2f, -6.2f);
    glEnd();

    // chaka
     glColor3f(0.1f, 0.1f, 0.1f); // Black soil
     float chaka1X = -3.8f, chaka1Y = -8.0f, chaka1Radius = .6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(chaka1X, chaka1Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = chaka1Radius * cos(angle);
        float y = chaka1Radius * sin(angle);
        glVertex2f(chaka1X + x, chaka1Y + y);

    }
    glEnd();

    //chaka 2
     glColor3f(0.1f, 0.1f, 0.1f); // Black soil
     float chaka2X = -1.2f, chaka2Y = -8.0f, chaka2Radius = .6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(chaka2X, chaka2Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = chaka2Radius * cos(angle);
        float y = chaka2Radius * sin(angle);
        glVertex2f(chaka2X + x, chaka2Y + y);

    }
    glEnd();


    //car
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(4.0f, -7.0f);
    glVertex2f(4.0f, -8.0f);
    glVertex2f(8.0f, -8.0f);
    glVertex2f(8.0f, -7.0f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); // Pure black
    glBegin(GL_POLYGON);
    glVertex2f(5.0f, -6.0f);
    glVertex2f(4.5f, -7.0f);
    glVertex2f(7.0f, -7.0f);
    glVertex2f(6.5f, -6.0f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f); // Pure white
    glBegin(GL_POLYGON);
    glVertex2f(5.2f, -6.2f);
    glVertex2f(4.8f, -7.0f);
    glVertex2f(6.3f, -6.2f);
    glVertex2f(6.7f, -7.0f);
    glEnd();

    //car chaka 1
    glColor3f(0.0f, 0.0f, 0.0f); // Pure black
    float car1X = 6.7f, car1Y = -8.0f, car1Radius = .5f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(car1X, car1Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = car1Radius * cos(angle);
        float y = car1Radius * sin(angle);
        glVertex2f(car1X + x, car1Y + y);
         }
    glEnd();

    //car chaka 2
    glColor3f(0.0f, 0.0f, 0.0f); // Pure black
    float car2X = 4.8f, car2Y = -8.0f, car2Radius = .5f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(car2X, car2Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = car2Radius * cos(angle);
        float y = car2Radius * sin(angle);
        glVertex2f(car2X + x, car2Y + y);
         }
    glEnd();





















    glFlush();
}

void init() {
    glClearColor(0.529f, 0.808f, 0.922f, 1.0f);
    gluOrtho2D(-10, 10, -10, 10);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple landscape in OpenGL");
    glutInitWindowSize(1920, 1080);
    init();
    glutDisplayFunc(landscape);
    glutMainLoop();
    return 0;
}
