void testIfStatements()
{
    int x = 0;
    for (int i = 0; i < 100; i++) {
        if (i > 0 && i <= 10) {
            // super rare
            ++x;
        }
        else if (i > 10 && i <= 40) {
            // rare
            ++x;
        }
        else {
            // common
            ++x;
        }
    }
}

void testIfStatementsOptimized()
{
    int x = 0;
    for (int i = 0; i < 100; i++) {
        if ( i > 40 ) {
            // common
            ++x;
        }
        else if (i > 10 && i <= 40) {
            // rare
            ++x;
        }
        else {
            // super rare
            ++x;
        }
    }

}