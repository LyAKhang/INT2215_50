#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n1;
    cin >> n1;
    set<int> myset;
    while (n1 > 0) {
        int n2, k;
        cin >> n2 >> k;
        switch (n2) {
        case 1:
            myset.insert(k);
            break;
        case 2:
            myset.erase(k);
            break;
        case 3:
        {set<int>::iterator itr = myset.find(k);
        if (*itr == k) cout << "Yes\n";
        else cout << "No\n";
        break;
        }
        default: break;
        }
        n1--;
    }
    return 0;
}



