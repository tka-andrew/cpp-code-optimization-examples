#include <iostream>
#include <iomanip>
#include <vector>

#include "simpleProfilingTemplate.h"
#include "testLoopUnrolling.h"
#include "testDeadCode.h"
#include "testRedundantCode.h"
#include "testIfStatements.h"
#include "testUnnecessaryNestedLoop.h"
#include "testReserveVectorMemory.h"
#include "testPassByReference.h"
#include "testStaticLocalVariable.h"

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

	// test: if statements
    simpleProfilingTemplate(&testIfStatements, &testIfStatementsOptimized, iterations, "If Statements");

	// test: unnecessary nested loop
    simpleProfilingTemplate(5, 5, &testUnnecessaryNestedLoop, &testUnnecessaryNestedLoopOptimized, iterations, "Unnecessary Nested Loop");

	// test: reserve vector memory
    simpleProfilingTemplate(&testReserveVectorMemory, &testReserveVectorMemoryOptimized, iterations, "Reserve Vector Memory");

    // test: pass by reference
    std::vector<int> v(50,1);
    simpleProfilingTemplate(v, &testPassByReference, &testPassByReferenceOptimized, iterations, "Pass By Reference");

	// test: static local variable
    int x1 = 1;
    int x2 = 1;
    simpleProfilingTemplate(x1, x2, &testStaticLocalVariable, &testStaticLocalVariableOptimized, iterations, "Static Local Variable");

}