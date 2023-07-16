#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string a, b;
    getline(cin, a);
    getline(cin, b);
    string  c = a + b;
    int d = a.length();
    int e = b.length();

    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    cout << d << " " << e << endl << c << endl << a << " " << b;
    return 0;
}