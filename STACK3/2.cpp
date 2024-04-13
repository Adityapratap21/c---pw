// sliding window maximum
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        if(k==1) return arr;
        // // brute force approch

         int n = arr.size();
        // for(int i = 0;i<n-k+1;i++){
        //     int mx = INT_MIN;
        //     for(int j =i;j<i+k;j++){
        //         mx = max(mx,arr[j]);
        //     }
        //     ans.push_back(mx);
        // }
        // return ans;

       int ngi[n];
      // using stack : pop ans push & reverse traverse
    // sc = O(n);
      stack<int> st;
     ngi[n-1] = n;
     st.push(n-1);
     for(int i = n-2;i>=0;i--){
        // pop all the elements smaller than arr[i]
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        // mark the ans in nge array
        if(st.size()==0) ngi[i] = n;
        else ngi[i] = st.top();
        //push the arr[i]
        st.push(i);
    }
    vector<int> ans;
    int j = 0;
    for(int i = 0;i<n-k+1;i++){
        if(j<i) j = i;
        int mx = arr[j]; // starting of window se

        while(j<i+k){ // means if nge is inside window
            mx = arr[j];
            if(ngi[j]>=i+k) break;
            j = ngi[j];
        }
        ans.push_back(mx);
    }
    return ans;
    }
};