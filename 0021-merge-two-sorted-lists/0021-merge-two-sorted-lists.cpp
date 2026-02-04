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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p1=list1;
        ListNode* p2=list2;

        ListNode* m1=new ListNode(-1);
        ListNode* ma=m1;

        while(p1 != nullptr && p2 != nullptr){
            if(p1->val <= p2->val){
                m1->next=p1;
                p1=p1->next;
            }
            else{
                m1->next=p2;
                p2=p2->next;
            }
            m1=m1->next;

        }

        while(p1 != nullptr){
            m1->next=p1;
            p1=p1->next;
            m1=m1->next;
        }

        while(p2 != nullptr){
            m1->next=p2;
            p2=p2->next;
            m1=m1->next;
        }

        return ma->next;
    }
};