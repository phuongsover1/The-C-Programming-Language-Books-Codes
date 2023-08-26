#include <stdio.h>

/* Write a program to count blanks, tabs, and newlines */

int main() {
  short c, bl, tab, nl;

  bl = tab = nl = 0;

  while((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    else if (c == '\t')
      ++tab;
    else if (c == ' ')
      ++bl;
  }
  printf("Number of blanks: %d\n", bl );
  printf("Number of tabs: %d\n", tab);
  printf("Number of new lines: %d\n", nl);
  return 0;
}
