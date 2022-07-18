#include "testReserveVectorMemory.h"

#include <vector>

void testReserveVectorMemory()
{
    std::vector<int> v;
    int numOfElements = 30;
    for (int i=0; i<numOfElements; i++)
    {
        v.push_back(123);
    }
}

void testReserveVectorMemoryOptimized()
{
    std::vector<int> v;
    int numOfElements = 30;
    v.reserve(numOfElements);
    for (int i=0; i<numOfElements; i++)
    {
        v.push_back(123);
    }
}