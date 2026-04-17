#include <stdio.h>

void swap(int *a, int *b, int n)
{
    // Base condition
    if (n == 0)
        return;

    int temp = *a;
    *a = *b;
    *b = temp;

    // Recursive call (just for demonstration)
    swap(a, b, n - 1);
}

int main()
{
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y, 1);  // Call recursion
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}