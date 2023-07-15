#include <iostream>

using namespace std;

int main() {
    int n;
    int tich = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        tich *= a[i];
    }

    tich = tich % 1037;
    cout << tich;
    return 0;

}