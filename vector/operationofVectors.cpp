#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
     v.push_back(1);
      v.push_back(9);
       v.push_back(10);
        v.push_back(9);
         v.push_back(1);
          v.push_back(9);
           v.push_back(10);
            v.push_back(9);
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<"Size is : "<<v.size()<<endl;
            cout<<"Capacity is : "<<v.capacity()<<endl;
            cout<<endl;
            v.pop_back();
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<"Size is : "<<v.size()<<endl;
            cout<<"Capacity is : "<<v.capacity()<<endl;
}
