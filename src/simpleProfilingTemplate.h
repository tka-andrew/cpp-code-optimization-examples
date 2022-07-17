#ifndef SIMPLE_PROFILING_H
#define SIMPLE_PROFILING_H

#include <string>

void simpleProfilingTemplate(void (* func1)(), void (* func2)(), int iterations, std::string testName);
void simpleProfilingTemplate(int num_rows, int num_cols, void (* func1)(int, int), void (* func2)(int, int), int iterations, std::string testName);

#endif