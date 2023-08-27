#include <stdio.h>

/* Write a program that prints its input one word per line
 * */
// abc fder
// adfdfd fdsfsd  ffd ->
// abc
// fder 
// adfdfd
// fdsfsd
// ffd

int main() {
  int c;


  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n')
      putchar('\n');
    else 
      putchar(c);
    
  }
  return 0;
}
