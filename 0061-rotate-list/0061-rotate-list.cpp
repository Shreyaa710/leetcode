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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *end=head, *start=head;
        int count=0;
         ListNode *curr=head;
        while(curr != NULL){
            curr=curr->next;
            count++;
        } 
        
        if(head==NULL || head->next==NULL || (k%count)==0) return head;
    
        
        for(int i=0;i<(k%count);i++)
        {
            end=end->next;
        }
        
        while(end->next !=NULL){
            start=start->next;
            end=end->next;
        }
        
        curr=start;
        start=start->next;
        curr->next=NULL;
        end->next=head;
        return start;
        
    }
};