#include <stdio.h>

int main() {
  int year;
  scanf("%d", & year);

  if (year % 400 == 0)
    printf("%d is a Leap Year", year);

  else if (year % 4 == 0 && year % 100 != 0)
    printf("%d is a Leap Year", year);

  else
    printf("%d is not a Leap Year", year);

  return 0;

}  

/*A year is a leap year if:

It is divisible by 400, OR

It is divisible by 4 but not divisible by 100
*/