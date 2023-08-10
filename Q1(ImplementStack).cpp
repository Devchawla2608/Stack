
// Without Template 
// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class stack1{
    private:
    int *data;
    int nextIndex;
    int capacity;
    
    public:
    stack1(){
        data = new int[4];
        nextIndex = 0;
        capacity = 4;
    }
    
    void push(int element){
        if(nextIndex == capacity){
            int *newData = new int(capacity*2);
            for(int i = 0;i<capacity ; i++) {newData[i] = data[i];}
            capacity *= 2;
            delete [] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    
    int pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top(){
        return data[nextIndex-1];
    }
    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        return nextIndex == 0;
    }
};

int main() {
    stack1 s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;

    return 0;
}



// With Template 

// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
template <typename T>

class stack1{
    private:
    T *data;
    int nextIndex;
    int capacity;
    
    public:
    stack1(){
        data = new T[4];
        nextIndex = 0;
        capacity = 4;
    }
    
    void push(T element){
        if(nextIndex == capacity){
            T *newData = new T(capacity*2);
            for(int i = 0;i<capacity ; i++) {newData[i] = data[i];}
            capacity *= 2;
            delete [] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    
    T pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }
    T top(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        return data[nextIndex-1];
    }
    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        return nextIndex == 0;
    }
};

int main() {
    stack1<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;

    return 0;
}


// Stack Using Linked List

// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int d){
        data = d;
        next = NULL;

    }
};

class stackLL{
    private:
    
    Node* head ;
    Node* tail;
    int size ;
    
    public:
    stackLL(){
        Node* newNode = new Node(-1);
        head = newNode;
        tail = newNode;
        size = 0;
    }
    
    void push(int element){
        Node* newNode = new Node(element);
        tail->next = newNode;
        tail = tail->next;
        size++;
    }
    
    int pop(){
        if(size == 0){
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        Node* temp = head;
        while(temp->next != tail) temp = temp->next;
        int element = tail->data;
        tail = temp;
        tail->next = NULL;
        return element;
        
    }
    int top(){
        if(size == 0) {
            cout<<"Stack Empty"<<endl;
            return 0;
        }
        return tail->data;
    }
    int Size(){
        return size;
    }
    bool isEmpty(){
        return size == 0;
    }
};

int main() {
    stackLL s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.Size()<<endl;

    return 0;
}