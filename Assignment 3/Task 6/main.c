#include <stdio.h>

// Pass by value
void incrementByValue(int x){
    x=x+1;
}

//Pass by reference
void incrementByReference(int *x){
    *x=*x+1;
}

int main()
{
    int num;

   printf("Enter value of num1:");
   scanf(" %d", &num);

   incrementByValue(num);
   printf("After pass by value: %d\n", num);

   incrementByReference(&num);

   printf("After pass by reference: %d\n", num);

    return 0;
}
