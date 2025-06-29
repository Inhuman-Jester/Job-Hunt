class Solution
{
public:
    int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes)
    {
        int n = customers.size();

        int baseSum = 0;

        for (int i = 0; i < n; i++)
        {
            if (!grumpy[i])
            {
                baseSum += customers[i];
                customers[i] = 0;
            }
        }

        int maxSum = 0, sum = 0;
        int high = 0, low = 0;

        while (high < n && low <= high)
        {
            if (high - low + 1 <= minutes)
            {
                sum += customers[high];
                high++;
            }
            else
            {
                sum -= customers[low];
                low++;
            }
            maxSum = max(sum, maxSum);
        }
        return maxSum + baseSum;
    }
};