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
        if(head==NULL)
        {
            return NULL;
        }
        
        else if(head->next == NULL)
        {
            return head;
        }
        
        ListNode *first =head->next;
        ListNode *second=head;
        
        while(first != NULL)
        {
            if(first->val == second->val)
            {
              
                ListNode *temp=first;
                 second->next=first->next;
                first=first->next;
                delete temp;
            }
            else
            {
                first=first->next;
                second=second->next;
            }
        }
        
        return head;
    }
};
