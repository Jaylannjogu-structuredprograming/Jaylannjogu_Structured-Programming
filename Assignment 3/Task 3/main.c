#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=25;   // Declaration of integer
    int *pCount= &count;   //Pointer to count

    *pCount=20;   // modified value using the pointer

    printf("Updated value of count: %d\n", count);

    return 0;
}
