#include <bits/stdc++.h>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p) {
    if (p == 1 || p == n)
        return 0;

    else if (p == n - 1 && ((n - 1) % 2) == 0)
        return 0;

    int flip = 1;
    int it = 2;
    int rflip = 1;
    int rit = 0;

    if (n % 2 == 0)
        rit = n - 1;

    else
        rit = n - 2;

    while (it<p || rit>p)
    {
        if (p == it || p == it + 1)
            break;

        else
        {
            flip++;
            it += 2;
        }

        if (p == rit || p == rit - 1)
            break;

        else
        {
            rflip++;
            rit -= 2;
        }
    }

    if (flip > rflip)
        return rflip;

    else
        return flip;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string& str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string& str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
