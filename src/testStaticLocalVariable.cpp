#include "testStaticLocalVariable.h"

#include <vector>

void testStaticLocalVariable(int &x)
{
    std::vector<int> rate{1, 2, 3, 4, 5};
    for (const auto &r:rate)
    {
        x = x*r;
    }
}

void testStaticLocalVariableOptimized(int &x)
{
    static std::vector<int> rate{1, 2, 3, 4, 5};
    for (const auto &r:rate)
    {
        x = x*r;
    }
}