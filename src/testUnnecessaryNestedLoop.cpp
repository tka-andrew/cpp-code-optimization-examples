#include "testUnnecessaryNestedLoop.h"

#include <vector>

void testUnnecessaryNestedLoop(int num_rows, int num_cols)
{
    std::vector < std::vector<int> > matrix;
    std::vector<int> new_row;
    int initial_value = 1;
    
    for (int i = 0; i < num_rows; i++) {
        new_row.clear();
        for (int j = 0; j < num_cols; j++) {
            new_row.push_back(initial_value);
        }
        matrix.push_back(new_row);
    }
}

void testUnnecessaryNestedLoopOptimized(int num_rows, int num_cols)
{
    int initial_value = 1;
    std::vector < std::vector<int> > matrix(num_rows, std::vector<int> (num_cols, initial_value));
}