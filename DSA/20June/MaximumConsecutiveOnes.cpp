#include <iostream>
#include <vector>

using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int maxCnt = 0, cnt = 0;
    for (auto i : nums)
    {
        if (i == 1)
            cnt++;
        else
        {
            maxCnt = max(maxCnt, cnt);
            cnt = 0;
        }
    }
    return maxCnt;
}

int main()
{
    vector<int> nums;
    int a;
    while (cin >> a)
    {
        nums.push_back(a);
    }
    cout << findMaxConsecutiveOnes(nums);
}