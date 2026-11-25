/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*>mp;
        Node* copiedHead = new Node(-1);
        Node* newtemp = copiedHead;
        Node* oldtemp = head;

        while(oldtemp!=NULL){
            Node* temp = new Node(oldtemp->val);
            mp[oldtemp] = temp;
            newtemp->next = temp;
            newtemp = newtemp->next;
            oldtemp = oldtemp->next;
        }
        oldtemp = head;
        copiedHead = copiedHead->next;
        newtemp = copiedHead;

        while(oldtemp!=NULL){
            newtemp->random = mp[oldtemp->random];
            oldtemp = oldtemp->next;
            newtemp = newtemp->next;

        }

        return copiedHead;

    }
};
