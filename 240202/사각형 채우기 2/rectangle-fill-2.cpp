#include <iostream>
#define MAX 1001
#define MOD 10007

using namespace std;

int main() {
    long long dp[MAX];
    int n;
    cin >> n;

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 3;

    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i-1] + (2 * dp[i-2])) % MOD;
    }

    cout << dp[n];

    return 0;
}