// product of array execpt self
//concept -> for every element ->product of all other elements =
             // = product of all other in lefy part * product of all other element in right part
             class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n = nums.size();
       vector<int> pre(n);
       vector<int> suf(n);
       vector<int> ans(n);
       //prefix product array
       int p = nums[0];
       pre[0]=1;
       for(int i = 1;i<n;i++){
           pre[i] = p;
           p *= nums[i];
       }
       // sufix product array
        p = nums[n-1];
       suf[n-1]=1;
       for(int i = n-2;i>=0;i--){
           suf[i] = p;
           p *= nums[i];
       }
       //ans array
       for(int i =0;i<n;i++){
           ans[i] = pre[i] * suf[i];
       }
        return ans;

    }
};