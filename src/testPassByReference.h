#ifndef TEST_PASS_BY_REFERENCE_H
#define TEST_PASS_BY_REFERENCE_H

#include <vector>

void testPassByReference(std::vector<int> v);
void testPassByReferenceOptimized(std::vector<int> &v);

#endif