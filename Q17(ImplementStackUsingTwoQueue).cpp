// Stack using two queues
// Implement a Stack using two queues q1 and q2.
void QueueStack :: push(int x)
{
        while(q1.size() != 0){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(q2.size() != 0){
            q1.push(q2.front());
            q2.pop();
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

// Algorithm to implement Stack using two queues with steps in details:
// 1.) Create two queues q1 and q2.
// 2.) Pushing an element in the stack: 
//     -> Push x in q2
//     -> One by one dequeue everything from q1 and enqueue in q2.
//     -> Swap the names of q1 and q2
// 3.) Popping an element from the stack:

//     -> Dequeue an item from q1 and return it.
