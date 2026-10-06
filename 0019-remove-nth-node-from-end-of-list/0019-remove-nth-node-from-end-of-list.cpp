class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        // Find length
        int length = 0;
        ListNode* temp = head;

        while(temp != NULL)
        {
            length++;
            temp = temp->next;
        }


        if(length == n)
        {
            return head->next;
        }

        int pos = length - n;

        temp = head;

        for(int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;

        return head;
    }
};