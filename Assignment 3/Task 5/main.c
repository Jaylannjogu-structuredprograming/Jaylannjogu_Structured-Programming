#include <stdio.h>

//Function to swap numbers using pointers
void swapNumbers(int *a, int *b){
    int temp;

    temp=*a;
    *a=*b;
    *b= temp;
}

int main()
{
     int a, b; //Declaration of integers

  printf("Enter value of a:");
  scanf("%d", &a);

  printf("Enter value of b:");
  scanf("%d", &b);

  printf("Before swapping:a= %d, b=%d\n", a, b);

  swapNumbers(&a, &b); // passes addresses

  printf("After swapping:a=%d, b=%d\n", a, b);

    return 0;
}
