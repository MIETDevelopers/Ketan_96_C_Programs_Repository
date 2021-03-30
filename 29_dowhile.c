#include <stdio.h>/
int main()
{

    int a = 5;

    do
    {
        printf(" a: %d\n", a);
        a = a + 5;
    } while (a < 50);

    return 0;
}