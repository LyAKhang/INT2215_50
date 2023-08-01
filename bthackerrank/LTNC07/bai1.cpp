#include <iostream>

using namespace std;
int search_binary(int a[], int l, int r, int k) {
    while (r > l) {
        int mid = (r + l) / 2;
        if (a[mid] == k) {
            return mid;
            break;
        }
        else if (a[mid] > k) search_binary(a, l, mid - 1, k);
        else if (a[mid] < k) search_binary(a, mid + 1, r, k);
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i; i < n; i++) {
        cin >> a[i];
    }
    int b = search_binary(a, 0, n - 1, 5);
    cout << b;
    return 0;
}