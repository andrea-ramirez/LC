/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr){
            return false;
        }
        
        set<ListNode*> s;
        s.insert(head);
        
        ListNode* curr = head;
        while(curr -> next != nullptr && !s.count(curr-> next)){
            s.insert(curr -> next);
            curr = curr -> next;
        }
        
        if(curr -> next != nullptr && s.count(curr-> next)){
            return true;
        }else{
            return false;
        }
        
    }
};
