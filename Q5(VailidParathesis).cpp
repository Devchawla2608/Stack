// Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
// For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).

// Note: The drive code prints "balanced" if function return true, otherwise it prints "not balanced".

Link -> https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1

    bool ispar(string x)
    {
        stack<int> st;
        for(int i = 0;i<x.size() ; i++){
            if(x[i] == '[' || x[i] == '('  ||  x[i] == '{'){
                st.push(x[i]);
                continue;
            }
            if(st.size() == 0) return false;
            if(x[i] == ']'){
                if(st.top() == '[') {
                    st.pop();
                    continue;
                }
                return false;
            }else if(x[i] == ')'){
                if(st.top() == '(') {
                    st.pop();
                    continue;
                }
                return false;
            }else if(x[i] == '}'){
                if(st.top() == '{') {
                    st.pop();
                    continue;
                }
                return false;
            }
        }
        if(st.size()) return false;
        return true;
    }

    Time Complexity -> O(N)
    Space Complexity -> O(N)
