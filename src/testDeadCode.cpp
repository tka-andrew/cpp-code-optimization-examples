void testDeadCode()
{
    int x = 10;
    x += 5;
    x -= 5;
    x += 10;
    x -= 10;
}

void testDeadCodeOptimized()
{
    int x = 10;
}
