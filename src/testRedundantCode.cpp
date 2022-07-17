#include "testRedundantCode.h"

void testRedundantCode()
{
    int x = 10;
    if (x < 10)
    {
        x = x + 1;
    }
    else if (x >= 10 && x < 20)
    {
        x = x + 2;
    }
    else {
        x = x + 1;
    }
}

void testRedundantCodeOptimized()
{
    int x = 10;
    if (x < 10)
    {
        x = x + 1;
    }
    else if (x < 20)
    {
        x = x + 2;
    }
    else {
        x = x + 1;
    }
}
