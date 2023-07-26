#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map <string, int> m;
    int q, y, t;
    string x;
    cin >> q;
    while (q--) {
        cin >> t >> x;
        if (t == 1) {
            cin >> y;
            m[x] += y;
        }
        else if (t == 2) {
            m[x] = 0;
        }
        else {
            if (m.find(x) != m.end()) {
                cout << m[x] << endl;
            }
            else {
                cout << "0" << endl;
            }
        }
    }
    return 0;
}


