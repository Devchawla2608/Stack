// Special Stack
// Design a data-structure SpecialStack that supports all the stack operations like push(), pop(), isEmpty(), isFull() and an additional operation getMin() which should return minimum element from the SpecialStack. Your task is to complete all the functions, using stack data-Structure.

// Link -> https://practice.geeksforgeeks.org/problems/special-stack/1

int mini = 1e9;

void push(stack<int>& s, int a){
	// Your code goes here
	if(s.empty()){
	    s.push(a);
	    mini = a;
	}else{
	    if(a < mini){
	        s.push(2*a - mini);
	        mini = a;
	    }else{
	        s.push(a);
	    }
	}
}
bool isFull(stack<int>& s,int n){
    return s.size() == n;
}

bool isEmpty(stack<int>& s){
	return s.size() == 0;
}

int pop(stack<int>& s){
	if(s.size() == 0) return -1;
	int curr = s.top();
	s.pop();
	if(curr > mini){
	    return curr;
	}else{
	    int preMin = mini;
	    int val = 2*mini - curr;
	    mini = val;
	    return preMin;
	}
}

int getMin(stack<int>& s){
	if(s.empty()) return -1;
	return mini;
}

// Time Complexity -> O(1)
// Space Complexity -> O(1)

// Algorithm to implement Special Stack with steps in details:
// 1.) Create a stack s.
// 2.) Pushing an element in the stack:
//     -> if stack is empty then push the element and make mini = a
//     -> else if a < mini then push 2*a - mini and make mini = a
//     -> else push a
// 3.) Popping an element from the stack:
//     -> if stack is empty then return -1
//     -> else if curr > mini then return curr
//     -> else preMin = mini , val = 2*mini - curr , mini = val , return preMin
// 4.) getMin() function:
//     -> if stack is empty then return -1
//     -> else return mini
// 5.) isFull() function:
//     -> return s.size() == n
// 6.) isEmpty() function:
//     -> return s.size() == 0
//

