#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <iomanip>

#include "simpleProfilingTemplate.h"
#include "testLoopUnrolling.h"
#include "testDeadCode.h"
#include "testRedundantCode.h"

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

	// test: dead code
    simpleProfilingTemplate(&testDeadCode, &testDeadCodeOptimized, iterations, "Dead Code");

	// test: redundant code
    simpleProfilingTemplate(&testRedundantCode, &testRedundantCodeOptimized, iterations, "Redundant Code");

}