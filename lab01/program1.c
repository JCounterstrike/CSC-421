#include <stdio.h>

int main() {
  int i;
  char buf[256];

  printf("Enter a number: ");
  fgets(buf, 256, stdin);
  i = atoi(buf);

  printf("Output: %d", i + 5);

  return 0;
}