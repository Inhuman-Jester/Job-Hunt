#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int i = g.size() - 1, j = s.size() - 1, cnt = 0;

    while (i > -1 && j > -1)
    {
        if (g[i] > s[j])
        {
            i--;
        }
        else
        {
            cnt++;
            i--;
            j--;
        }
    }

    return cnt;
}

int main()
{
    int a;

    int n, m, a;
    vector<int> g, s;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        g.push_back(a);
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        s.push_back(a);
    }

    cout << findContentChildren(g, s);
}