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
        ListNode* dummy= new ListNode(-1);
        ListNode *curr1=l1, *curr2=l2;
        ListNode *curr=dummy;
        
        int carry=0;
        while(curr1 != NULL || curr2 != NULL){
            int sum=carry;
            if(curr1) sum=sum+curr1->val;
            if(curr2) sum=sum+curr2->val;
            
            ListNode *temp= new ListNode(sum%10);
            carry=sum/10;
            
            curr->next=temp;
            curr=curr->next;
            
            if(curr1) curr1=curr1->next;
            if(curr2) curr2=curr2->next;
        }
        
        if(carry){
            ListNode *temp=new ListNode(carry);
            curr->next=temp;
        }
        return dummy->next;
    }
};