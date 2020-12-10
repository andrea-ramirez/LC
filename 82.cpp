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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr){
            return head;
        }else if(head -> next == nullptr){
            return head;
        }
        
        ListNode* current = head;
        ListNode *pre = new ListNode(0);
        pre -> next = head;
        ListNode* newHead = pre;
        
        while(current != nullptr){
            
            if(current -> next != nullptr && current -> val == current -> next -> val){
                while(current -> next != nullptr && current -> val == current -> next -> val){
                    current = current -> next;
                }
                pre -> next = current -> next;
            }else{
                pre = pre -> next;
            }
            current = current -> next;
        }
     
        return newHead -> next;
    }
};
