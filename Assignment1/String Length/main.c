#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];  // Can store up to 99 characters + '\0' (null terminator)

    // Ask the user to enter a string
    printf("Enter a string (like your name): ");

    // Read the string from user input
    // Note: %s reads input until a space is encountered
    scanf("%s", name);

    // Print the string back to the user
    printf("You entered: %s\n", name);

    // Find the length of the string using strlen()
    int length = strlen(name);

    // Display the length of the string
    printf("The length of the string is: %d\n", length);


    return 0;
}
