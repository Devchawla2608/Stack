// A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not.
// A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.
// Note: Follow 0 based indexing.
// Follow Up: Can you optimize it to O(N)

// Link -> https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1

    int celebrity(vector<vector<int> >& a, int n) 
    {
        int c = 0;
        for(int i = 1 ;i<n ; i++){
            if(a[c][i] == 1){
                c = i;
            }
        }
        for(int i = 0 ;i<n ; i++){
            if(i != c && (a[c][i] == 1 || a[i][c] == 0)) return -1;
        }
        return c;
    }

// Time Complexity -> O(N)
// Space Complexity -> O(1)
