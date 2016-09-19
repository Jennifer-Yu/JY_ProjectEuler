//Jennifer Yu
//9-16-16

#include <stdio.h>
#include <stdlib.h>


//PROBLEM 2
int main() {


  printf("PROBLEM 2\n");
  int x = 2;
  int y = 1;
  int z;
  int sum;
  
  while (x < 4000000) {
    if (x % 2 == 0) { //even
      //printf("%d ", x);
      sum+=x;
    }
    z=x;
    x+=y;
    y=z;
  }
  
  printf("%d\n", sum);

  return 0;

  /*
  printf("Problem 6\n");
  int x;
  int y;
  int z;
  int sum1;
  int sum2;
  int diff;
  for (x = 1; x <= 10; x++) {
    sum1 += x * x;
  }
  for (y = 1; y <= 10; y++) {
    sum2 += y;
  }

  diff = (sum2 * sum2) - sum1;

  printf("%d\n", diff);

  return 0;
  */
}
