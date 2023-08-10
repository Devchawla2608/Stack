// Sort a stack

// Given a stack, the task is to sort it such that the top of the stack has the greatest element.

void solve(stack<int> &s , int element){
    if(s.size() == 0){
        //   cout<<"I am there "<<element<<endl;
        s.push(element);
        return;
    }
    if(element > s.top()){
        s.push(element);
        return ;
    }
    int store = s.top();
    s.pop();
    // cout<<"I am here "<<store<<endl;
    solve(s , element);
    // cout<<s.top()<<endl;
    s.push(store);
}

void SortedStack :: sort()
{
   if(s.size() == 1){
       return ;
   }
    int store = s.top();
    s.pop();
    sort();
    if(store > s.top()){
          
           s.push(store);
    }else{
        solve(s , store);

    }
   if(s.size() == 0) s.push(store);
}

// Time Complexity -> O(N^2)
// Space Complexity -> O(N)

How time complexity is O(N^2) ?
// Ans ->
// 1.) We are using recursion so we have to find the time complexity of recursion function.