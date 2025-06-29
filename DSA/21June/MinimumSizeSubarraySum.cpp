class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int low = 0, high = 0, sum = 0, length = INT_MAX;
        while (high < nums.size() && low <= high)
        {
            sum += nums[high];
            while (low <= high && sum >= target)
            {
                length = min(high - low + 1, length);
                sum -= nums[low];
                low++;
            }
            high++;
        }
        if (length > nums.size())
            return 0;
        return length;
    }
};