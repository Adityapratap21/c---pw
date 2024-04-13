// spiral matrix
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int> >arr(m,vector<int> (n,-1));
        int minr = 0;
        int maxr = m-1;
        int mincol = 0;
        int maxcol = n-1;
        ListNode* temp = head;
       while(minr<=maxr && mincol<=maxcol){
        //right
        for(int i = mincol;i<=maxcol;i++){
            if(temp==NULL) return arr;
            arr[minr][i] = temp->val;
            temp = temp->next;
        }
        minr++;
        if(minr>maxr || mincol>maxcol) break;
        // down
        for(int i = minr;i<=maxr;i++){
            if(temp==NULL) return arr;
            arr[i][maxcol] = temp->val;
          temp = temp->next;
        }
        maxcol--;
        if(minr>maxr || mincol>maxcol) break;
        //left
        for(int i = maxcol;i>=mincol;i--){
            if(temp==NULL) return arr;
            arr[maxr][i] = temp->val;
          temp = temp->next;
        }
        maxr--;
        if(minr>maxr || mincol>maxcol) break;
        //up
        for(int i = maxr;i>=minr;i--){
            if(temp==NULL) return arr;
            arr[i][mincol] = temp->val;
          temp = temp->next;
        }
        mincol++;
        if(minr>maxr || mincol>maxcol) break;
       }
       return arr;

    }
};