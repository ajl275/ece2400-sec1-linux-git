#include "fact.h"

unsigned int fact(unsigned int n)
{
    unsigned int result = 1;
    unsigned int i;
    for ( i = 1; i <= n; i++ ) {
        result *= i;
    }
    return result;
}
