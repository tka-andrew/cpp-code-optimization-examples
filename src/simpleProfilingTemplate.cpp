#include "simpleProfilingTemplate.h"

#include <ctime>
#include <iostream>

void simpleProfilingTemplate(void (* func1)(), void (* func2)(), int iterations, std::string testName)
{
    static std::clock_t start {std::clock()};
	static double duration1 {0.0};
	static double duration2 {0.0};
    
    std::cout << "\n=== "<<testName<<" ===\n";
    start = std::clock();
    for (int i=0; i<iterations; i++)
    {
        func1();
    }
    duration1 = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    std::cout << "Before optimization: " << 1000 * duration1 << " milliseconds \n";

    start = std::clock();
    for (int i=0; i<iterations; i++)
    {
        func2();
    }
    duration2 = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    std::cout << "After optimization: " << 1000 * duration2 << " milliseconds \n";
    std::cout << "Optimized " << (duration1-duration2)*100/duration1 << " % \n\n";
}
