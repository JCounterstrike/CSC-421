#include <stdio.h>

int main() {
    double array1[3], array2[3], array3[6];
    int i, j;

    printf("Enter values for array1:\n");
    for (i = 0; i < 3; i++) {
        scanf("%lf", &array1[i]);
    }

    printf("Enter values for array2:\n");
    for (i = 0; i < 3; i++) {
        scanf("%lf", &array2[i]);
    }

    // Merge the two size 3 arrays into the size 6 array
     j = 0;
    for (i = 0; i < 3; i++) {
        array3[j] = array1[i];
        array3[j + 1] = array2[i];
        j += 2;
    }

    // Print out the merged array
    printf("The merged array is [");
    for (i = 0; i < 6; i++) {
        printf("%.2lf, ", array3[i]);
    }
    printf("]\n");

    return 0;
}
