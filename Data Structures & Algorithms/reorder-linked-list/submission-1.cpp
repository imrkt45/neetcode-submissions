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
    void reorderList(ListNode* head) {
        int count =0;
        vector<int>ans;
        ListNode* curr = head;
        while(curr!=nullptr){
            ans.push_back(curr->val);
            curr = curr->next;
        }
        curr = head;
        int n = ans.size();
        int i =0;
        int j = n-1;
        while(i<=j){
            if(count%2==0){
                curr->val = ans[i];
                i++;
            } else {
                curr->val = ans[j];

                j--;
            }
            curr = curr->next;
            count++;
        } 
      
    }
};
