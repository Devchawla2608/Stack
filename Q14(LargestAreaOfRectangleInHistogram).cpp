//  Largest Rectangle in Histogram

// Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n , 0);
        vector<int> right(n , 0);
        stack<int> st;
        for(int i = 0;i<n ; i++){
            while(st.size() != 0){
                int front = st.top();
                if(heights[front] >= heights[i]){
                    st.pop();
                }else{
                    left[i] = front + 1;
                    st.push(i);
                    break;
                }
            }
            if(st.size() == 0){
                st.push(i);
                left[i] = 0;
            }
        }
        while(st.size() !=0) st.pop();
        for(int i = n-1;i>=0 ; i--){
            while(st.size() != 0){
                int front = st.top();
                if(heights[front] >= heights[i]){
                    st.pop();
                }else{
                    right[i] = front -1;
                    st.push(i);
                    break;
                }
            }
            if(st.size() == 0){
                st.push(i);
                right[i] = n-1;
            }
        }
        int ans = INT_MIN;
        for(int i = 0;i<n ; i++){
            int val = ((right[i] - left[i]) +1)*heights[i];
            ans = max(val , ans);
        }
    return ans;
    }
};

// Time Complexity -> O(N)
// Space Complexity -> O(N)

// // Write steps and fully descirbe format
// 1.) Make two arrays left and right of size n. Initialize all values of left and right as -1.
// 2.) Iterate over array from left to right. If we see a smaller element on right side, we store index of smaller element in right array. Else we store -1 in right array.
// 3.) Iterate over array from right to left. If we see a smaller element on left side, we store index of smaller element in left array. Else we store -1 in left array.
// 4.) After filling arrays left[] and right[], we can find maximum width rectangle by comparing area of rectangle with maximum height and width[i] where width[i] is right[i] - left[i] -1, i varies from 0 to n-1.

// Where we are using stack ?
// We are using stack to store the index of the elements of the array.
// We are storing the index of the elements of the array because we want to find the left and right smaller element of the current element. 

// Leetcode Link -> https://leetcode.com/problems/largest-rectangle-in-histogram/
