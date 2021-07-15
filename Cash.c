#include <stdio.h>
#include<math.h>

int main(void)
{
  int input, c = 0;
  float d;
  // to get the input from user till it is non negative
  do
  {
    printf("Change owed: ");
    scanf("%f", d);
  }
  while (d < 0);
     
  // roundoff the input and convert it to integer
  input = round(d * 100);
  // to count the no quaters required
  if(input >= 25)
  {
   c = c + input / 25;
   input = input % 25;
  }
  // to count the no dimes required
  if (input >= 10)
  {
   c = c + (input / 10);
   input = input % 10;
  }
  //to count the number of nickels
  if (input >= 5)
  {
   c = c + input / 5;
   input = input % 5;
  }
  // to count the number of cents required
  if (input < 5 && input > 0)
  {
    c = c + input;
  }
     
// print the minimuum number of coins required
 printf("%i\n", c);
}
