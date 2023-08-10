// Stack Using Deque 
// Link -> https://practice.geeksforgeeks.org/problems/implement-stack-using-deque/1

// Function to push element on rear of deque
void push_back_pb(deque<int> &dq, int x){
    dq.push_back(x);
}

// Function to pop element from rear of deque

int pop_back_ppb(deque<int> &dq){
    if(dq.empty()) return -1;
    int val = dq.back();
    dq.pop_back();
    return val;
}

// Function to push element on front of deque

void push_front_pf(deque<int> &dq, int x){
    dq.push_front(x);
}

// Function to pop element from front of deque

int pop_front_ppf(deque<int> &dq){
    if(dq.empty()) return -1;
    int val = dq.front();
    dq.pop_front();
    return val;
}


// Time Complexity -> O(1)
// Space Complexity -> O(1)

// How to declare deque
// deque<int> dq;