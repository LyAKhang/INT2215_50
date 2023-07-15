#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int b[n + 1];
    int check[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        check[i] = 0;
    }

    for (int i = 0; i < n + 1; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < n; j++) {
            if (b[i] == a[j]) check[i] = 1;
        }
    }
    for (int i = 0; i < n + 1; i++) {
        if (check[i] == 0) cout << b[i];
    }

}