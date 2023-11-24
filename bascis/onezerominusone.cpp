#include<iostream>
    using namespace std;
int main(){
    char ch;
    cout << "enter a character";
    cin >> ch;
    int a= (int)ch;
    if (64< a &&  a <91) {
        cout << 1;
    }
    else if (96 <a  && a <=123) {
        cout << 0;
    }
    else {
        cout << -1;
    }
    }