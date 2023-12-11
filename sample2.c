#include <stdio.h>

int main() {
     int n, sum = 0;

     // Enter the number N
     printf("Enter number N: ");
     scanf("%d", &n);

     // Calculate the sum of numbers from 1 to N
     for (int i = 1; i <= n; ++i) {
         sum += i;
     }

     // Print the result
     printf("Sum of numbers from 1 to %d: %d\n", n, sum);

     return 0;
}
