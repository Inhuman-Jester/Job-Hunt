#include <iostream>
#include <algorithm>
using namespace std;

int reverseDigit(int n)
{
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return stoi(s);
}

int main()
{
    int n;
    cin >> n;
    cout << "Reveresed: " << reverseDigit(n);
    return 0;
}