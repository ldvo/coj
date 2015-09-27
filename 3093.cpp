#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
    unsigned int multiply = 1;
    char x;
    while ( isupper((x = getchar())) )
    {
        multiply = (multiply*(x-64))%26;
    }
    if (multiply < 10)
        printf("0%d\n", multiply);
    else
        printf("%d\n", multiply);
    return 0;
}