#include <stdio.h>

int main() {
    int n, count = 0;
    float temperature, sum = 0.0, average;
    printf("Enter the number of days: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter temperature of day %d: ", i + 1);
        scanf("%f", &temperature);
        if (temperature > 30.0) {
            sum += temperature;
            count++;
        }
    }
    if (count > 0) {
        average = sum / count;
        printf("Average temperature of days with temperature above 30 degrees: %.2f\n", average);
    } else {
        printf("No days with temperature above 30 degrees.\n");
    }

    return 0;
}
