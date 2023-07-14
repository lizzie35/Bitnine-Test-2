#include <stdio.h>

int fibonacciDynamic(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++)
        dp[i] = dp[i - 3] + dp[i - 2];

    return dp[n];
}

int main() {
    int n = 10;
    int result = fibonacciDynamic(n);
    printf("F(%d) = %d\n", n, result);
    return 0;
}
