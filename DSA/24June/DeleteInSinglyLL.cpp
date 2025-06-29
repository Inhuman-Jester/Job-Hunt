/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
public:
    /* Function to delete a node from a linked list */
    Node *deleteNode(Node *head, int x)
    {
        // code here
        if (x == 1)
            return head->next;

        Node *curr = head;
        while (x > 2)
        {
            curr = curr->next;
            x--;
        }

        curr->next = curr->next->next;
        return head;
    }
};