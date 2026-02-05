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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        
        ListNode* odd=head;
        ListNode* even=head->next;

        vector<int> oarr, earr;
         while (odd != nullptr) {
            oarr.push_back(odd->val);
            if (odd->next == nullptr) break;
            odd = odd->next->next;
        }

        while (even != nullptr) {
            earr.push_back(even->val);
            if (even->next == nullptr) break;
            even = even->next->next;
        }

        ListNode* final=head;
        int n=oarr.size()+earr.size();
        for(int i=0; i<n; i++){
            if(i < oarr.size()){
                final->val=oarr[i];
            }
            else{
                int m=i-oarr.size();
                final->val=earr[m];
            }
            final=final->next;
        }
        final=head;
        return final;
    }
};