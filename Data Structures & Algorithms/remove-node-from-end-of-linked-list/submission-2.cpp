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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* curr = head;
        while(curr!=nullptr){
            len++;
            curr= curr->next;
        }
       
        int tmp  = len - n + 1;
        if (tmp == 1) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
         }
        curr = head;

        ListNode* pre = nullptr;
        int count = 0;

       
        while(curr!=nullptr){
            count++;
            if(count==tmp){
                pre->next = curr->next;
                delete curr;
                break;
            }
            pre = curr;
            curr = curr->next;
        }

        return head;
    }
};
