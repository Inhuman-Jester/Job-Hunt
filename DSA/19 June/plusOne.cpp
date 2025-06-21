#include <iostream>
#include <vector>

using namespace std;

void plusOne(vector<int> &digits)
{
    int i = digits.size() - 1;
    while (i > -1 && digits[i] == 9)
    {
        digits[i] = 0;
        i--;
    }

    if (i == -1)
    {
        digits.insert(digits.begin(), 1);
    }
    digits[i]++;
}

int main()
{
    vector<int> digits;
    int a;
    while (cin >> a)
    {
        digits.push_back(a);
    }

    plusOne(digits);

    for (auto i : digits)
        cout << i << " ";
}