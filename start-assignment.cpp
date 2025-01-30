#include <GL/glut.h>

// Function to draw the star
void drawStar() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the window

    // Set the color for the star (e.g., yellow)
    glColor3f(1.0f, 1.0f, 0.0f);

    // Begin drawing a star using a triangle fan
    glBegin(GL_TRIANGLE_FAN);

    // Define the center of the star
    glVertex2f(0.0f, 0.0f);

    // Define the outer points of the star
    glVertex2f(0.0f, 0.5f);   // Point 1
    glVertex2f(0.2f, 0.2f);   // Point 2
    glVertex2f(0.5f, 0.2f);   // Point 3
    glVertex2f(0.3f, -0.1f);  // Point 4
    glVertex2f(0.4f, -0.5f);  // Point 5
    glVertex2f(0.0f, -0.3f);  // Point 6
    glVertex2f(-0.4f, -0.5f); // Point 7
    glVertex2f(-0.3f, -0.1f); // Point 8
    glVertex2f(-0.5f, 0.2f);  // Point 9
    glVertex2f(-0.2f, 0.2f);  // Point 10
    glVertex2f(0.0f, 0.5f);   // Close the star (Point 1)

    glEnd();

    glFlush(); // Render the drawing
}

// Initialization function
void initialize() {
    // Set the background color to black
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    // Set up the 2D orthographic projection
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

// Main function
int main(int argc, char** argv) {
    // Initialize GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Star Shape");

    // Initialize rendering settings
    initialize();

    // Register the display callback function
    glutDisplayFunc(drawStar);

    // Start the main loop
    glutMainLoop();

    return 0;
}
