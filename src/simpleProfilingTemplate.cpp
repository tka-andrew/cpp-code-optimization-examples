#include "simpleProfilingTemplate.h"

#include <ctime>
#include <iostream>

void simpleProfilingTemplate(void (* func1)(), void (* func2)(), int iterations, std::string testName)
{
    static std::clock_t start {std::clock()};
	static double duration1 {0.0};
	static double duration2 {0.0};
	static double optimizedPercentage {0.0};

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

    optimizedPercentage = (duration1-duration2)*100/duration1;

    if (optimizedPercentage < 0)
    {
        std::cout << "Optimized " << optimizedPercentage << " % \n";
        std::cout << "WARNING: The optimized function has worse performance, please run again and check.\n\n";    
    }
    else if (abs(optimizedPercentage) >= 20)
    {
        std::cout << "Optimized " << optimizedPercentage << " % \n\n";
    }
    else
    {
        std::cout << "Optimized " << optimizedPercentage << " % \n";
        std::cout << "WARNING: The performance difference is less than 20%, probably your compiler has done the optimization for you. \n\n";    
    }
}

void simpleProfilingTemplate(int num_rows, int num_cols, void (* func1)(int, int), void (* func2)(int, int), int iterations, std::string testName)
{
    static std::clock_t start {std::clock()};
	static double duration1 {0.0};
	static double duration2 {0.0};
	static double optimizedPercentage {0.0};

    std::cout << "\n=== "<<testName<<" ===\n";
    start = std::clock();
    for (int i=0; i<iterations; i++)
    {
        func1(num_rows, num_cols);
    }
    duration1 = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    std::cout << "Before optimization: " << 1000 * duration1 << " milliseconds \n";

    start = std::clock();
    for (int i=0; i<iterations; i++)
    {
        func2(num_rows, num_cols);
    }
    duration2 = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    std::cout << "After optimization: " << 1000 * duration2 << " milliseconds \n";

    optimizedPercentage = (duration1-duration2)*100/duration1;

    if (optimizedPercentage < 0)
    {
        std::cout << "Optimized " << optimizedPercentage << " % \n";
        std::cout << "WARNING: The optimized function has worse performance, please run again and check.\n\n";    
    }
    else if (abs(optimizedPercentage) >= 20)
    {
        std::cout << "Optimized " << optimizedPercentage << " % \n\n";
    }
    else
    {
        std::cout << "Optimized " << optimizedPercentage << " % \n";
        std::cout << "WARNING: The performance difference is less than 20%, probably your compiler has done the optimization for you. \n\n";    
    }
}

void simpleProfilingTemplate(std::vector<int> v, void (* func1)(std::vector<int>), void (* func2)(std::vector<int>&), int iterations, std::string testName)
{
    static std::clock_t start {std::clock()};
	static double duration1 {0.0};
	static double duration2 {0.0};
	static double optimizedPercentage {0.0};

    std::cout << "\n=== "<<testName<<" ===\n";
    start = std::clock();
    for (int i=0; i<iterations; i++)
    {
        func1(v);
    }
    duration1 = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    std::cout << "Before optimization: " << 1000 * duration1 << " milliseconds \n";

    start = std::clock();
    for (int i=0; i<iterations; i++)
    {
        func2(v);
    }
    duration2 = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    std::cout << "After optimization: " << 1000 * duration2 << " milliseconds \n";

    optimizedPercentage = (duration1-duration2)*100/duration1;

    if (optimizedPercentage < 0)
    {
        std::cout << "Optimized " << optimizedPercentage << " % \n";
        std::cout << "WARNING: The optimized function has worse performance, please run again and check.\n\n";    
    }
    else if (abs(optimizedPercentage) >= 20)
    {
        std::cout << "Optimized " << optimizedPercentage << " % \n\n";
    }
    else
    {
        std::cout << "Optimized " << optimizedPercentage << " % \n";
        std::cout << "WARNING: The performance difference is less than 20%, probably your compiler has done the optimization for you. \n\n";    
    }
}
