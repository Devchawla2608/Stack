// Expression contains redundant bracket or not
// Given a string of balanced expression, find if it contains a redundant parenthesis or not. A set of parenthesis are redundant if the same sub-expression is surrounded by unnecessary or multiple brackets. Print Yes if redundant, else No.
// Note: Expression may contain + , - , *, and / operators. Given expression is valid and there are no white spaces present.

    int checkRedundancy(string s) {
        stack<char> st;
        for(int i = 0 ;i<s.size() ; i++){
            if(s[i] != ')'){ st.push(s[i]);}
            else if(s[i] == ')'){
                int count = 0;
                while(st.size() != 0){
                    if(st.top() == '(') {st.pop() ; break;}
                    count++;
                    st.pop();
                }
                if(count == 0 || count == 1) return 1;
            }
        }  
        return 0;
    }

// Time Complexity -> O(N)
// Space Complexity -> O(N)

// Algo with steps in details ?
// 1.) Iterate over the string and push all the characters in the stack except the closing bracket.
// 2.) If the current character is a closing bracket, then pop elements from the stack till we encounter an opening bracket.
// 3.) If the count of popped elements is less than or equal to 1, then the bracket is redundant else it is not redundant.
