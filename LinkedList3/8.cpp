// best itterative approch to reverse a linkedlost
class Solution {
public:  //TC=O(n),SC=O(1)
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
         ListNode* curr = head;
          ListNode* Next = head;
          while(curr){
              Next = curr->next;
              curr->next = prev;
              prev = curr;
              curr = Next;
          }
          return prev;
    }
}