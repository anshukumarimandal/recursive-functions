#include <stdio.h>

// Recursive function
int sum(int n) {
    if (n == 0)   // Base case
        return 0;
    else
        return n + sum(n - 1);  // Recursive call
}

int main() {
    int n;
    printf("Enter a number to generate the fibonacci series:");
    scanf("%d",&n);
    printf("Sum = %d", sum(n));

    return 0;
}