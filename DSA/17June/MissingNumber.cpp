#include <iostream>
#include <vector>

using namespace std;

int SingleNumber(vector<int> &nums)
{
    int n = nums.size();
    int sum = n * (n + 1) / 2;

    for (auto i : nums)
    {
        sum -= i;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    // cout << nums[0];
    cout << SingleNumber(nums);
}