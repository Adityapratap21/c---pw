//min stack better approch
class MinStack {
public:
stack<long long>st;
long long min;
    MinStack() { // constructor
        min = LLONG_MAX;
    }

    void push(int val) {
        long long x = (long long)val;
        if(st.size()==0){
            st.push(x);
            min = x;
        }
        else if(x>=min) st.push(x);
        else{ // val<min
            st.push(2*x-min);
            min = x;
        }
    }

    void pop() {
        if(st.top()<min) { // st.top<min : Afake value is present
             // before poping make sure to retrive the old min
           long long oldmin = 2*min - st.top();
             min = oldmin;

        }
        st.pop();
    }

    int top() {
        if(st.top()<min) return (int)min;
        else return (int)st.top();
    }

    int getMin() {

        return (int)min;
    }
};