class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int Break = -1, nextGreaterElement = -1;

        for (int i = n - 1; i > 0; i--)
        {
            if (nums[i - 1] < nums[i])
            {
                Break = i - 1;
                break;
            }
        }
        if (Break == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        for (int i = Break + 1; i < n; i++)
        {
            if (nums[i] > nums[Break])
                nextGreaterElement = i;
        }

        swap(nums[Break], nums[nextGreaterElement]);
        reverse(nums.begin() + Break + 1, nums.end());
        return;
    }
};