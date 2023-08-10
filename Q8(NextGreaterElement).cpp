// Given an array arr[ ] of size N having elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
// Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
// If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.   
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long> s;
        vector<long long> ans(n , 0);
        for(int i = n-1 ; i>=0 ; i--){
            while(s.size() != 0){
                if(arr[i] < s.top()){
                    ans[i] = s.top();
                    s.push(arr[i]);
                    break;
                }else{
                    s.pop();
                }
            }
            if(s.size() == 0){
                ans[i] = -1;
                s.push(arr[i]);
            }
        }
        return ans;
    }

    // Time Complexity -> O(N)
    // Space Complexity -> O(N)