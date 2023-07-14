#include <stdio.h>

int fibonacciRecursive(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return fibonacciRecursive(n - 3) + fibonacciRecursive(n - 2);
}

int main() {
    int n = 10;
    int result = fibonacciRecursive(n);
    printf("F(%d) = %d\n", n, result);
    return 0;
}
