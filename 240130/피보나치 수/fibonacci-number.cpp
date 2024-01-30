#include <iostream>
#define MAX 46

using namespace std;

int memo[MAX] = {};

int Fibo(int n) {
    if (memo[n] != -1) return memo[n]; // 이미 n번째 값을 구해본 적이 있다면 memo에 있는 값 반환
    if (n <= 2) memo[n] = 1;
    else memo[n] = Fibo(n-1) + Fibo(n-2);
    return memo[n];
}

int main() {
    fill_n(memo, MAX, -1);

    int n;
    cin >> n;

    cout << Fibo(n);

    return 0;
}