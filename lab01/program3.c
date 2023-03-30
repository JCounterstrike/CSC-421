#include <stdio.h>

int main() {
    double values[3];
    double sum = 0.0;
    double avg;

    printf("Enter three values:\n");
    scanf("%lf %lf %lf", &values[0], &values[1], &values[2]);

    sum = values[0] + values[1] + values[2];

    avg = sum / 3.0;

    printf("The array is [%.2lf, %.2lf, %.2lf]\n", values[0], values[1], values[2]);

    printf("The average of the three values is %.2lf\n", avg);

    return 0;
}
