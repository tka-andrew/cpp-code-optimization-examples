#include <iostream>
#include <cstdio>
#include <ctime>
#include <vector>
#include <string>
#include <iomanip>

#include "testLoopUnrolling.h"

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

int main() {

	// number of iterations 
	const int iterations = 10000;

	std::clock_t start;
	double duration1;
	double duration2;

    // to print more decimal places
    std::cout << std::fixed << std::setprecision(8);

	std::cout << "\nNumber of iterations: " << iterations << " " << "\n";

	// test: loop unrolling
    simpleProfilingTemplate(&testLoopUnrolling, &testLoopUnrollingOptimized, iterations, "Loop Unrolling");

}