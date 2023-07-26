#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, data;
    vector<int> V;
    cin >> N;
    while (V.size() < N && cin >> data) V.push_back(data);
    sort(V.begin(), V.end());
    for (auto x : V) cout << x << ' ';
    return 0;
    return 0;
}
