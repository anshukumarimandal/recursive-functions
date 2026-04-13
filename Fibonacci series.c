#include <stdio.h>

// Recursive function
int fibonacci(int n) {
    if (n == 0)        // Base case
        return 0;
    else if (n == 1)   // Base case
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

int main() {
    int n = 6, i;

    printf("Fibonacci Series: ");
    for(i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}