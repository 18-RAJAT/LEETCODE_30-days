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
    
        ListNode* ans = new ListNode(0);
        
        ListNode* p = l1,*q = l2,*current = ans;
        
        int carry =0;
        while(p != NULL or q != NULL)
        {
            int x = (p != NULL) ? p->val:0;
            int y = (q != NULL) ? q->val:0;
            
            int sum = carry+x+y;
            
            carry = sum/10;
            
            current->next =new ListNode(sum%10);
            
            current = current->next;
            
            if(p!=NULL)
                
               p=p->next;
               
            if(q != NULL)
                
              q = q->next;
        }
        
        if(carry > 0)
        {
            current->next = new ListNode(carry);
    
        }
          return ans->next;
    }
};