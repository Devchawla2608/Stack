//Insert an Element at the Bottom of a Stack

// You are given a stack St of N integers and an element X. You have to insert X at the bottom of the given stack.


    void f(stack<int> &st , int e){
        if(st.size() == 0){
            st.push(e);
            return;
        }
        int E = st.top();
        st.pop();
        f(st , e);
        st.push(E);
    }

    stack<int> insertAtBottom(stack<int> st,int X){
        f(st , X);
        return st;
    }

    Time Complexity -> O(N)
    Space Complexity -> O(N)