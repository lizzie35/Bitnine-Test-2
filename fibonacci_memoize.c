#include <stdio.h>

int fibonacciMemoize(int n, int* memo) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    if (memo[n] != -1)
        return memo[n];

    memo[n] = fibonacciMemoize(n - 3, memo) + fibonacciMemoize(n - 2, memo);
    return memo[n];
}

int fibonacci(int n) {
    int memo[n + 1];
    for (int i = 0; i <= n; i++)
        memo[i] = -1;

    return fibonacciMemoize(n, memo);
}

int main() {
    int n = 10;
    int result = fibonacci(n);
    printf("F(%d) = %d\n", n, result);
    return 0;
}
