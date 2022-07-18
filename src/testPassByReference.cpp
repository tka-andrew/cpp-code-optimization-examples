#include "testPassByReference.h"

void testPassByReference(std::vector<int> v)
{
    for (const auto element : v)
    {
        // do something
    }
}

void testPassByReferenceOptimized(std::vector<int> &v)
{
    for (const auto &element : v)
    {
        // do something
    }
}