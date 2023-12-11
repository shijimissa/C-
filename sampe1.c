#include <stdio.h>

int main() {
     char name[100];

     // Enter the name from the keyboard
     printf("Enter your name: ");
     scanf("%s", name);

     // Print a greeting
     printf("Hello, %s! Welcome to the world of C!\n", name);

     return 0;
}
