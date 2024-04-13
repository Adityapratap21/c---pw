// implementation of queue  using stack by poping and peek efficient
class MyQueue {
public:
        stack<int> st;
        stack<int> helper;
    MyQueue() {

    }

    void push(int x) { //O(n)
        // push at bottom
        if(st.size()==0){
            st.push(x);
            return;
        }
        else{
            while(st.size()>0){
            helper.push(st.top());
            st.pop();
        }
        st.push(x);
          while(helper.size()>0){
            st.push(helper.top());
            helper.pop();
        }
        }

    }

    int pop() { // O(1)
    int x = st.top();
    st.pop();
        return x;
    }

    int peek() {  // O(n)
        return st.top();
    }

    bool empty() {
        if(st.size()==0) return true;
        else return false;
    }
};