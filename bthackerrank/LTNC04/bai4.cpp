#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n >> q;
    vector<int> tmp_vec;
    vector<vector<int>> index_vec;
    for (int i = 0; i < n; i++) {
        int val;
        int vec_size;
        cin >> vec_size;
        for (int j = 0; j < vec_size; j++) {
            cin >> val;
            tmp_vec.push_back(val);
        }
        index_vec.push_back(tmp_vec);
        tmp_vec.clear();
    }

    for (int k = 0; k < q; k++) {
        int index_arr, index_val;
        cin >> index_arr >> index_val;
        cout << index_vec[index_arr][index_val] << endl;
    }

    return 0;
}
