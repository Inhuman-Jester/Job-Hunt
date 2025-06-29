class Solution
{
public:
    int magicalString(int n)
    {
        string s = "122";
        int i = 2;
        while (s.size() < n)
        {
            char insert;
            if (i % 2)
                insert = '2';
            else
                insert = '1';

            int x = s[i] - '0';

            while (x > 0)
            {
                s.push_back(insert);
                x--;
            }
            i++;
        }

        int cnt = 0;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '1')
                cnt++;
        }

        return cnt;
    }
};