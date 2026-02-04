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
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=nullptr;

        while(curr!=nullptr){
            ListNode* node=new ListNode(curr->val);
            node->next=prev;
            prev=node;
            curr=curr->next;
        }

        ListNode* x=head;
        while (x != nullptr){
            if(x->val != prev->val){
                return false;
            }
            x=x->next;
            prev=prev->next;
        }
        return true;
    }
};