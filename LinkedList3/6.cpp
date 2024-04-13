// partition list
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        ListNode* lo = new ListNode(0);
        ListNode* tlo = lo;
        ListNode* hi = new ListNode(0);
        ListNode* th = hi;

        while(temp){
            if(temp->val<x){
                tlo->next = temp;
                temp = temp->next;
                tlo =tlo->next;

            }
            else{
           th->next = temp;
           temp = temp->next;
           th = th->next;
            }

        }
         tlo->next = hi->next;
         th->next = NULL;
         return lo->next;
    }
};