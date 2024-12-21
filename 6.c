#include <stdio.h>

int main() {
    int numPoints, x, y;
    int q1 = 0, q2 = 0, q3 = 0, q4 =0;
    printf("Enter the number of points: ");
    scanf("%d", &numPoints);
    for (int i = 0; i < numPoints; i++) {
        printf("Enter coordinates of point %d (x y): ", i + 1);
        scanf("%d %d", &x, &y);
        if (x > 0 && y > 0) {
            q1++;
        } else if (x < 0 && y > 0) {
            q2++;
        } else if (x < 0 && y < 0) {
            q3++;
        } else if (x > 0 && y < 0) {
            q4++;
        }
    }

    // Determine which quadrant has the most points
    int maxPoints = q1;
    int maxQuadrant = 1;

    if (q2 > maxPoints) {
        maxPoints = q2;
        maxQuadrant = 2;
    }
    if (q3 > maxPoints) {
        maxPoints = q3;
        maxQuadrant = 3;
    }
    if (q4 > maxPoints) {
        maxPoints = q4;
        maxQuadrant = 4;
    }
    printf("Quadrant %d has the most points.\n", maxQuadrant);
    return 0;
}
