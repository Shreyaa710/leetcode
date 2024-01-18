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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int c1=0, c2=0;
        ListNode *curr1=headA, *curr2=headB;
        while(curr1 != NULL){
            c1++;
            curr1=curr1->next;
        }
        while(curr2 != NULL){
            c2++;
            curr2=curr2->next;
        }
        
        if(c1==0 ||  c2==0) return NULL;
        
        curr1=headA;
        curr2=headB;
        
        
        int n= abs(c1-c2);
        for(int i=0;i<n;i++){
            if(c1>c2) curr1=curr1->next;
            else curr2=curr2->next;
        }
        
        while(curr1 != NULL && curr2 != NULL){
            if(curr1 == curr2) return curr1;
            
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return NULL;
    }
};