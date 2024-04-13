// kth symbol in grammar
//LC-> 779
// GO ON THE LEETCODE AND REVISE THE CONCEPT IMEDIATELY
// finding all permutation of an string given all elements of the string are unique
#include<iostream>
#include<string>
using namespace std;
void permutation(vector<string> &v,string ans,string original){
    if(original==""){
        v.push_back(ans);
        return;
    }
    for(int i = 0;i<original.length();i++){
        char ch = original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
        permutation(v,ans+ch,left+right);
    }
}
int main(){
    string str = "abc";
    vector<string> v;
    permutation(v,"",str);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    // string left = str.substr(0,2);
    // cout<<left<<endl;
    // string right = str.substr(3);
    // cout<<right;
}