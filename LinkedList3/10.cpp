// palindrome of linkedlist
class Solution {
public:

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

    bool isPalindrome(ListNode* head) {
        ListNode* c = new ListNode(10);
        //deep copy of head;
        ListNode* temp = head;
        ListNode* tempC = c;
        while(temp){. //TC = O(n) && sc = o(n)
            ListNode* node = new ListNode(temp->val);
            temp = temp->next;
            tempC->next = node;
            tempC = node;
        }
        c = c->next;
        c = reverseList(c);  // TC=O(n)
        ListNode* a = head;
        ListNode* b = c;
        while(a){. //tc=O(n)
            if(a->val!=b->val) return false;
            a = a->next;
            b = b->next;
        }
        return true;
    }
};