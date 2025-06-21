#include <iostream>
#include <vector>

using namespace std;

int maxSubArray(vector<int> &nums)
{
    int sum = 0, maxima = INT_MIN;
    for (auto i : nums)
    {
        sum += i;
        maxima = max(sum, maxima);
        if (sum < 0)
            sum = 0;
    }
    return maxima;
}

int main()
{
    int a;
    vector<int> nums;
    while (cin >> a)
        nums.push_back(a);

    cout << maxSubArray(nums);
}