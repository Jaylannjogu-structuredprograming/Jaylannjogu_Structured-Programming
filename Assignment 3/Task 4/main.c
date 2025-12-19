#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;  //Declaration of integers
    int *ptr1= &num1;      //pointer storing value of num1
    int *ptr2= &num2;      //pointer storing value of num2
    int sum;

     printf("Enter num1:");
     scanf("%d", &num1);

     printf("Enter num2:");
     scanf("%d", &num2);

    sum= *ptr1 + *ptr2;  //add values using pointers

    printf("Sum: %d\n", sum);

    return 0;
}
