// Valid Substring

// Given a string S consisting only of opening and closing parenthesis 'ie '('  and ')', find out the length of the longest valid(well-formed) parentheses substring.
// NOTE: Length of the smallest valid substring ( ) is 2.  

int findMaxLen(string s) {
        // code here
        
        stack<int>st;
        int cnt=0;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')st.push(i);
            
            else if(s[i]==')'){
                
                if( !st.empty() && s[st.top()]=='(')st.pop();
                
                else st.push(i);
                
              
            }
            
        }
        
        int curr=s.size();
        
        if(s.empty())return curr;
        
        int maxi=INT_MIN;
        
        while(!st.empty()){
            int x=st.top();
            maxi=max(maxi,(curr-x-1));
            curr=x;
            st.pop();
        }
        maxi=max(maxi,curr);
        
        return maxi;
    }

    Time Complexity -> O(N)
    Space Complexity -> O(N)

    Steps in details:
    1.) Create a stack.
    2.) Iterate over the string and push the index of the opening bracket in the stack.
    3.) If the current character is a closing bracket, then pop elements from the stack till we encounter an opening bracket.
    4.) If the stack is empty, then push the current index in the stack.
    5.) If the stack is not empty, then find the length of the current valid substring by subtracting the current index from the top element of the stack.
    6.) Return the maximum length.    