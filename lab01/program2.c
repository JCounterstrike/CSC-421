#include <stdio.h>
#include <math.h>

double sum (double arr[], int n) {

  double sum = 0;


   for (int i = 0; i < 5; i++)
      sum += arr[i];

  return sum;

}


int main() {

  double arr[5] = { 5.00, 8.00, 10.00, 13.00, 19.00 };
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("The array is [%.2lf, %.2lf, %.2lf, %.2lf, %.2lf]\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
  printf("Sum of the array: %.2lf", sum(arr, n));

  return 0;
}