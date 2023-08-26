#include <stdio.h>
 /* Write a program to copy its input to its ouput
  * replacing each of one or more blanks by a single blank */
int main() {
  short c, space;

  space = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      ++space;
    } else {
      if (space >= 1) {
        putchar(' ');
        space = 0;
      } 
      putchar(c);
    }
  }
  return 0;
}
