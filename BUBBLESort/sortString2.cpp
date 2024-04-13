#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "AZYZXBDXJK";
    string str = "";
    for(int i =0;i< s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    cout<<str<<endl;
    for(int i =0;i<str.size()-1;i++){
        int flag = 0;
        for(int j = str.size()-1-i;j>0;j--){
            if(str[j]>str[j-1]){
                swap(str[j],str[j- 1]);
                flag = 1;
            }
        }
        if(flag==0){
            break;
        }
    }
     cout<<str<<endl;

}