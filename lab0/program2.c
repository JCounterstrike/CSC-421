#include<stdio.h>

int main() {
int h = 5;
int w = 3;
int perimeter;
int area;

perimeter = h+h+w+w;
area = h * w;

printf("Perimeter of the rectangle = %d inches.\n", perimeter);
printf("Area of the rectangle = %d square inches.", area);
return 0;
}
