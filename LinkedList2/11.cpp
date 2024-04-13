// rotate the linkedlist right by k step
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* tail = head;
        int len = 0;

        while(temp!=NULL){
            len++;
            if(temp->next==NULL) tail = temp;
            temp = temp->next;
        }
        if(len==0) return head;
        if(len>0) k = k%len;

        temp = head;
        for(int i = 1;i<=len-k-1;i++){
            temp = temp->next;
        }
        tail->next = head;
        head = temp->next;
        temp->next = NULL;
        return head;




    }
};