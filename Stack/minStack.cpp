#include <stack>
#include <utility>
#include <algorithm>
using namespace std;

class MinStack {
public:
    stack<pair<int, int>> st;

    MinStack() {
        
    }
    
    void push(int val) {
        if (st.empty()) {
            st.push({val, val});
        }
        else {
            int minSoFar = min(val, st.top().second);
            st.push({val, minSoFar});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};