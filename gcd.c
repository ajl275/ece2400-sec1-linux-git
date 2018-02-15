#include "gcd.h"

int gcd(int a, int b)
{
  if (a < 0 || b < 0) {
    return -1;
  }
  if(a<b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
  }
  if (b==0) {
    return a;
  }
  
  return gcd(b, a % b);
}
