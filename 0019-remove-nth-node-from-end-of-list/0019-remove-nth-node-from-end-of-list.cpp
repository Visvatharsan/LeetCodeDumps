class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* curr = head;

        while (curr != nullptr) {
            count++;
            curr = curr->next;
        }

        
        if (n == count) {
            return head->next;
        }

        int x = count - n;
        curr = head;

        
        for (int i = 1; i < x; i++) {
            curr = curr->next;
        }

        
        curr->next = curr->next->next;

        return head;
    }
};
