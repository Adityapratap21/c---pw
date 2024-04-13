// remove the nth node from end of linkedlist
// using slow & fast pointer :
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;
        // traverse fast to (n+1) step
        for(int i = 1;i<=n+1;i++){
            if(fast==NULL) return head->next;
            fast = fast->next;

        }
        // move slow and fast at same speed
        while(fast!=NULL){
            slow = slow->next;
            fast = fast->next;
        }
        // now the slow is exactly at left of the nth node frome the end
        slow->next = slow->next->next;
        return head;

    }
};