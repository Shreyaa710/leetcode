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
    
    ListNode *revList(ListNode *head){
        ListNode *prev=NULL, *curr=head;
        
        while(curr != NULL){
            ListNode *nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head, *fast=head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow= slow->next;
            fast=fast->next->next;
        }
        ListNode *rev= revList(slow->next);
        ListNode *curr=head;
        
        while(rev != NULL){
            if(curr->val != rev->val) return false;
            
            curr=curr->next;
            rev=rev->next;
        }
        return true;
    }
};