#include <bits/stdc++.h> 
using namespace std;  
struct Queue
 { 
    stack<int> Stack1, Stack2; 
    void enqueue(int x) 
    { 
        Stack1.push(x); 
    } 
    int dequeue() 
    { 
        if (Stack1.empty() && Stack2.empty()) { 
            return INT_MIN;
            exit(0); 
        }   
        if (Stack2.empty()) { 
            while (!Stack1.empty()) { 
                Stack2.push(Stack1.top()); 
                Stack1.pop(); 
            } 
        } 
        int x = Stack2.top(); 
        Stack2.pop(); 
        return x; 
    } 
}; 
  
int main() 
{ 
    Queue q; 
    q.enqueue(12); 
    q.enqueue(2); 
    q.enqueue(30);  
    return 0; 
} 