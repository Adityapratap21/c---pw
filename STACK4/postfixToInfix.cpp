// postfixto infix conversation


#include<iostream>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2; // * /

}
string solve(string val1,string val2,char ch){
  string s = "";
  s += val1;
  s.push_back(ch);
  s += val2;
  return s;
}

int main(){
    string s = "79+4*8/3-"; // postfix expression
    // we need one stacks ->values
    stack<string> val;

    for(int i = 0;i<s.length();i++){
        // check if s[i] is a digit (0-9)
        if(s[i]>=48 && s[i]<=57){  // digit
           val.push(to_string(s[i]-48));

        }
        else{// s[i] it is -> *,/,+,-
          // kaam
          string val2 = val.top();
          val.pop();
          string val1 = val.top();
          val.pop();
          string ans = solve(val1,val2,s[i]);
          val.push(ans);
              }
    }


          cout<<val.top();
}