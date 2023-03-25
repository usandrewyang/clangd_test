#include <stdio.h>
#include "func.h"

int main ()
{
  int a = 10, b = 20, sum = 0;
  sum = add_test(a, b);
  printf("%d + %d = %d\n", a, b, sum);
  sum = dec(a, b);
  printf("%d + %d = %d\n", a, b, sum);
  return 0;
}
