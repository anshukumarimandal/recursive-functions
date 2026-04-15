#include <stdio.h>

// Recursive function
int sum(int n) {
    if (n == 0)   // Base case
        return 0;
    else
        return n + sum(n - 1);  // Recursive call
}

int main() {
    int n = 5;

    printf("Sum = %d", sum(n));

    return 0;
}