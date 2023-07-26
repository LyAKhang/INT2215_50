#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    vector <int> v;
    for (int i = 0; i < N; i++) {
        int item;
        cin >> item;
        v.push_back(item);
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q > 0) {
        int y;
        cin >> y;

        auto it = lower_bound(v.begin(), v.end(), y);

        if (*it == y) {
            cout << "Yes" << " " << it - v.begin() + 1 << endl;
        }
        else {
            cout << "No" << " " << it - v.begin() + 1 << endl;
        }
        q--;
    }
    return 0;
}
