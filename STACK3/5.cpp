// min stack
// using vector
class MinStack {
public:
vector<int>v;
    MinStack() { // constructor

    }

    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        v.pop_back();
    }

    int top() {
        return v[v.size()-1];
    }

    int getMin() {

        return *min_element(v.begin(),v.end());
    }
};