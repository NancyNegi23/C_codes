#include <stdio.h>

int main(void) {
  int passenger;
  float amt;
  printf("Input");
  scanf("%i",&passenger);
  scanf("%f",&amt);
  if(passenger>0)
  {
    passenger += 1;
    amt += 1;
    amt = amt / passenger;
    printf("Output: %.2f", amt);
  }
  else
  {
    printf("Output: %.2f", amt);
  }
  return 0;
}