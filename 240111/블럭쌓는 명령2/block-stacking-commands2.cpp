#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K, MAX = 0;

    cin >> N >> K;

    vector<int> v(N);

    for (int i = 0; i < K; i++) {
        int a, b;
        cin >> a >> b;

        for (int i = a-1; i < b; i++) {
            v[i] += 1;
        }
    }

    for (int i = 0; i < v.size(); i++) {
        if (MAX < v[i]) MAX = v[i];
    }

    cout << MAX << endl;
    
    return 0;
}