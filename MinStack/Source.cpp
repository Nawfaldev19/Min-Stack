#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

class MinStack {
	stack<int> minStack;
	stack<int> st;
public:

	void push(int val) {
		st.push(val);
		if (minStack.empty())
			minStack.push(val);
		else if (minStack.top() > val) {
			minStack.push(val);
		}
		else {
			minStack.push(minStack.top());
		}
	}

	void pop() {
		st.pop();
		minStack.pop();
	}

	int top() {
		return st.top();
	}

	int getMin() {
		return minStack.top();
	}
};





int main()
{
 	MinStack* obj = new MinStack();
 	obj->push(val);
	obj->pop();
	int param_3 = obj->top();
	int param_4 = obj->getMin();

/**solved in leetcode
 * Your MinStack object will be instantiated and called as such:
 * stack will show minimum in O(1).
 */

}