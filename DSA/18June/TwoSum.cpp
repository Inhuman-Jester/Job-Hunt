#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> TwoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<pair<int, int>> hash;

    for (int i = 0; i < n; i++)
    {
        hash.push_back(make_pair(nums[i], i));
    }

    sort(hash.begin(), hash.end());

    int i = 0, j = n - 1;
    vector<int> v;

    while (i < j)
    {
        int sum = hash[i].first + hash[j].first;
        if (sum < target)
            i++;
        else if (sum == target)
        {
            v.push_back(hash[i].second);
            v.push_back(hash[j].second);
            break;
        }
        else
            j--;
    }
    return v;
}

int main()
{
    vector<int> nums;
    int target;
    cin >> target;
    int a;
    while (cin >> a)
    {
        nums.push_back(a);
    }
    vector<int> ans = TwoSum(nums, target);
}