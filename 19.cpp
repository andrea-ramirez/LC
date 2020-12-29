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
        if(head == nullptr){
            return nullptr;
        }
        
        if(n == 1 && head -> next == nullptr){
            return head -> next;
        }        
        

        ListNode* slow = new ListNode(0);
        slow -> next = head;
        ListNode* fast = slow;
        
        while(n--){
            fast = fast -> next;
        }
        
        while(fast -> next != nullptr){
            fast = fast -> next;
            slow = slow -> next;
        }
        
        if(slow -> next != head){
            slow -> next = slow -> next -> next;
            return head;
        }else{
            slow -> next = slow -> next -> next;
            return slow -> next;
        }

    }
};
