#include <iostream>
#define MAX 1001

using namespace std;

int main() {
    int dp[MAX] = {0,};
    int n;
    cin >> n;

    dp[0] = 1;
    dp[2] = 1;
    dp[3] = 1;

    for (int i = 4; i <= n; i++) {
        dp[i] = (dp[i - 2] + dp[i - 3]) % 10007;
    }

    cout << dp[n];

    return 0;
}