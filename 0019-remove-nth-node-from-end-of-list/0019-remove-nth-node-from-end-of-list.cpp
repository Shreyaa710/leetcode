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
        
        if(head->next==NULL) return NULL;
        
        int count=0;
        for(ListNode *curr=head; curr !=NULL; curr=curr->next){
            count++;
        }
        
        if(count==n){
            ListNode *temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        
        ListNode *p=head;
         for(int i=0; i<count-n-1 ; i++){
             p=p->next;
        }
        ListNode *temp=p->next;
        p->next=temp->next;
        delete temp;
        
        return head;
        
    }
};
