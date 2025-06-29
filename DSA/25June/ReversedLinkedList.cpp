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

// By recursion
class Solution
{
public:
    ListNode *reverse(ListNode *head)
    {
        if (!head || !head->next)
        {
            return head;
        }

        ListNode *newHead = reverse(head->next);
        ListNode *front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }

    ListNode *reverseList(ListNode *head)
    {
        return reverse(head);
    }
};

// Iterative:

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (!head)
            return head;

        ListNode *prev = head, *curr = head->next;
        while (curr)
        {
            ListNode *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        head->next = NULL;
        head = prev;
        return head;
    }
};