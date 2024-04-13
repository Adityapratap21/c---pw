//Minimum penalty
class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.length();
        vector<int>pre(n+1);
        vector<int>suf(n+1);
        pre[0]=0;
        int cnt = 0;
        for(int i=1;i<=n;i++){
          if(customers[i-1]=='N') cnt++;
          pre[i]=cnt;
        }
        cnt = 0;
        suf[n]=0;
        for(int i=n-1;i>=0;i--){
          if(customers[i]=='Y') cnt++;
          suf[i]=cnt;
        }
        int MIN = n;
        for(int i=0;i<=n;i++){
          pre[i] +=suf[i];
          int pen = pre[i];
          MIN = min(MIN,pen);

        }

        for(int i=0;i<=n;i++){
          int pen = pre[i];
          if(pen==MIN) return i;
        }
    return -1;
    }
};