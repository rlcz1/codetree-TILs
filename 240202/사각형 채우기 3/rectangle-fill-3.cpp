#include <iostream>
#define MAX 1001
#define MOD 1000000007

using namespace std;

int main() {
    long long dp[MAX];
    int n;
    cin >> n;

    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 7;
    dp[3] = 22;

    for (int i = 4; i <= n; i++) {
        dp[i] = (2 * dp[i-1]) + (3 * dp[i-2]) % MOD;
        for(int j = i - 3; j >= 0; j--) {
            dp[i] = (dp[i] + (2 * dp[j])) % MOD;
        }
    }

    cout << dp[n];

    return 0;
}