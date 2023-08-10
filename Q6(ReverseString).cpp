// Reverse a string using Stack
// You are given a string S, the task is to reverse the string using stack.

Link -> https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1

char* reverse(char *S, int len)
{
    stack<char> st;
    for(int i = 0;i<len ; i++){
        st.push(S[i]);
    }
    for(int i = 0;i<len ; i++){
        S[i] = st.top();
        st.pop();
    }
    return S;
}

Time Complexity -> O(N)
Space Complexity -> O(N)