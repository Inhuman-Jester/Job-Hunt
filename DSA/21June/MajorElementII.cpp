class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int curr = nums[0];
        int cnt = 0;
        vector<int> ans;
        for (auto i : nums)
        {
            if (i == curr)
                cnt++;
            else
            {
                if (cnt > n / 3)
                    ans.push_back(curr);
                cnt = 1;
                curr = i;
            }
        }
        if (cnt > n / 3)
            ans.push_back(curr);
        return ans;
    }
};