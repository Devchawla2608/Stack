// Stack using  queue
// Implement a Stack using queue q1.

void QueueStack :: push(int x)
{
    int size = q1.size()-1;
    q1.push(x);
    while(size >= 0){
        q1.push(q1.front());
        q1.pop();
        size--;
    }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        if(q1.size() == 0) return -1;
        int element = q1.front();
        q1.pop();
        return element;
}

// Time Complexity -> O(N)
// Space Complexity -> O(N)

// Algorithm to implement Stack using queue with steps in details:
// 1.) Create a queue q1.
// 2.) Pushing an element in the stack:
//     -> Push x in q1
// 3.) after pusing we will push back n-1 elememts so that it get reversed

