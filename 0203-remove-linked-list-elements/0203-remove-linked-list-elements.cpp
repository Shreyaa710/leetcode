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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr=head, *p=NULL;
        int n=1;
        if(curr==NULL) return NULL;
        
        while(curr != NULL)
        {
            if(curr->val == val)
            {
                ListNode* temp=curr;
                if(p != NULL) p->next=curr->next;
                curr=curr->next;
                if(n==1) head=curr;
                delete temp;
            }
            
            else
            {
                p=curr;
                curr=curr->next;
                n++;
            }
        }
        return head;
    }
};