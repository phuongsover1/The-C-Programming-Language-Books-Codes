#include <stdio.h>

 /* Write a program to copy its input to its ouput
  * replacing each of one or more blanks by a single blank */

int main() {
  int c;
  int last_c = '\0';

  while((c = getchar()) != EOF) {
    if (c != ' ' || last_c != ' ')
      putchar(c);

    last_c = c;
  }
  return 0;
}
