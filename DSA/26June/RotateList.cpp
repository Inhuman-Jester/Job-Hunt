/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head || !head->next)
            return head;

        int len = 1;
        ListNode *last = head, *start = head;
        while (last->next)
        {
            len++;
            last = last->next;
        }
        k = len - k % len;
        while (k > 1)
        {
            start = start->next;
            k--;
        }

        last->next = head;
        head = start->next;
        start->next = NULL;
        return head;
    }
};