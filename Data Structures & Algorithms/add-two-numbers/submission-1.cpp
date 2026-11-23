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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* temp = new ListNode(-1);
        ListNode* ans = temp;
        int carr = 0;

        while(l1!=nullptr && l2!=nullptr){
            int val1 = l1->val;
            int val2 = l2->val;
            int total = val1 + val2 +carr;
            ListNode* curr = new ListNode(total%10);
            carr = total/10;
            ans->next = curr;
            ans = ans->next;
            l1 = l1->next;
            l2 = l2->next;
        }

       while(l1!=nullptr){
            int total = l1->val +carr;
            ListNode* curr = new ListNode(total%10);
            carr = total/10;
            ans->next = curr;
            ans = ans->next;
            l1 = l1->next;
        }
        while(l2!=nullptr){
            int total = l2->val +carr;
            ListNode* curr = new ListNode(total%10);
            carr = total/10;
            ans->next = curr;
            ans = ans->next;
            l2 = l2->next;
        }

        if(carr>0){
         ListNode* curr1 = new ListNode(carr);
         ans->next = curr1;
         }

        

        return temp->next;

        
    }
};
