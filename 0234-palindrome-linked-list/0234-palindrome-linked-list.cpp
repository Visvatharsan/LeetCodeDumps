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
        vector<int> arr;
        
        ListNode* ptr=head;
        while(ptr != nullptr){
            arr.push_back(ptr->val);
            ptr=ptr->next;
        }

        reverse(arr.begin(),arr.end());
        ptr=head;

        for(int i=0; i<arr.size(); i++){
            if(arr[i] != ptr->val){
                return false;
            }
            ptr=ptr->next;
        }
        return true;
    }
};