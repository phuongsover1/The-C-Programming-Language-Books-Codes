#include <stdio.h>

/* Print Celsius-Fahrenheit table
 *  for celsius = 0, 20,...,300
*/
main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0; /*  lower limit of temperature scale */
  upper = 300; /* upper limit*/
  step = 20; /* step size */

  // Heading above table
  printf("Celsius\tFahr\n");
  printf("----------------\n");

  celsius = lower;

  while(celsius <= upper) {
    fahr = (celsius+32.0f) * 9.0/5.0;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
 
}
