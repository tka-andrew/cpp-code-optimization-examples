void testLoopUnrolling()
{
    int x = 0;
    for (int i=0; i<3; i++)
    {
        ++x;
    }
}

void testLoopUnrollingOptimized()
{
    int x = 0;
    ++x;
    ++x;
    ++x;
}