class Solution
{
public:
    int maxProfit(vector<int> &nums)
    {
        int n = nums.size();
        int maxDiff = 0, minElement = INT_MAX;

        for (auto i : nums)
        {
            if (i < minElement)
            {
                minElement = i;
            }
            else
            {
                maxDiff = max(maxDiff, i - minElement);
            }
        }

        return maxDiff;
    }
};