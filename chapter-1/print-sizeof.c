#include <stdio.h>

int main() {
  printf("size of short: %zu\n", sizeof(short));
  printf("size of int: %zu\n", sizeof(int));
  printf("size of long: %zu\n", sizeof(long));

  int myArray[10];
  printf("Size of myArray: %zu\n", sizeof(myArray));
  return 0;
}
