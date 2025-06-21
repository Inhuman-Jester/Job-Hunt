#include <iostream>
#include <vector>

using namespace std;

int findJudge(int n, vector<vector<int>> &trust)
{
    vector<int> hash(n + 1, 0);
    for (auto i : trust)
    {
        hash[i[0]]--;
        hash[i[1]]++;
    }

    for (int i = 0; i < hash.size(); i++)
    {
        if (hash[i] == n - 1)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> trust;
    int a, b;
    while (cin >> a >> b)
    {
        trust.push_back({a, b});
    }

    cout << findJudge(n, trust);
}