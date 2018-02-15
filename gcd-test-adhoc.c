#include "gcd.h"

#include <stdio.h>

int main()
{
	int error = 0;

	// Try a simple GCD that does not have 1 as a result
	if (gcd(15,5) != 5) {
		error = 1;
	}
	// Try a GCD with co-prime numbers
	if (gcd(7, 3) != 1) {
		error = 1;
	}
	// Try a GCD where one of the parameters is zero
	if (gcd(7, 0) != 7) {
		error = 1;
	}
  
  if (gcd(0, 7) != 7) {
		error = 1;
	}
  
  if( gcd(-1, -12) != -1) {
    error = 1;
  }
  
  if (gcd(3, 7) != 1) {
		error = 1;
	}
  
  if (gcd(5, 15) != 5) {
		error = 1;
	}
  
  if (gcd(20,20) != 20 ) {
    error = 1;
  }

	if (error) {
		printf("Test failed\n");
	} else {
		printf("Test passed\n");
	}

	return error;
}
