#include <stdio.h>

/* print Fahrenheit-Celsius  table */


int main() {
  int fahr;

  printf("Fahr\tCelsius\n");
  printf("-----------------\n");
  for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32.0f));
  return 0;
}
