
vector<int> v;
int n, data;
int q1, q2, q3;
cin >> n;
for (int i = 0; i < n; i++)
{
    cin >> data;
    v.push_back(data);
}
cin >> q1 >> q2 >> q3;

v.erase(v.begin() + q1 - 1);
v.erase(v.begin() + q2 - 1, v.begin() + q3 - 1);
cout << v.size() << endl;
for (auto x : v)
{
    cout << x << " ";
}

return 0;