// Stack Permutations
// You are given two arrays A and B of unique elements of size N. Check if array B is a stack permutation of the array A or not.
// Stack permutation means that array B can be created from array A using a stack and stack operations.

// Link -> https://practice.geeksforgeeks.org/problems/stack-permutations-1587115621/1
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        stack<int> st;
        int j = 0;
        for(int i = 0;i<N ; i++){
            st.push(A[i]);
            while(st.size() != 0 and st.top() == B[j]){
                st.pop();
                j++;
            }
        }
        if(j == N and st.size() == 0) return true;
        else return false;
    }

    // Time Complexity -> O(N)
    // Space Complexity -> O(N)