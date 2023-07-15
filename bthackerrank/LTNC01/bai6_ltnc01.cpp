#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int number = 0;
        cin >> number;
        arr.push_back(number);
    }
    cout << arr[arr.size() - 1];
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        cout << " " << arr[i];
    }

    return 0;
}
