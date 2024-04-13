// linkedlist cycle 2 isme return lrna hai wo node jha se cucle start ho rha hai;
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
          ListNode* slow = head;
        ListNode* fast = head;
        bool flag = false;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                flag = true;
                break;
            }
        }
        if(flag==false) return NULL;
        else{
            ListNode* temp = head;
            while(temp!=slow){
                slow = slow->next;
                temp = temp->next;
            }
            return slow; // return temp bhi kr skte hai
        }

    }
};