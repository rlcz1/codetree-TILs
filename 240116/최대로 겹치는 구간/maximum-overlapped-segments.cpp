#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, max = 0;
    cin >> n;

    vector<int> v(200);
    
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        
        a += 100;
        b += 100;

        for (int j = a; j < b; j++) v[j]++;
    }

    for (int i = 0; i < v.size(); i++) {
        if (max < v.at(i)) max = v.at(i);
    }

    cout << max << endl;

    return 0;
}