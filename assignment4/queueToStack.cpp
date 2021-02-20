#include<bits/stdc++.h>

using namespace std; 
  
class Stack { 
    queue<int> Queue1, Queue2; 
    int size; 
  
public: 
    Stack() 
    { 
        size = 0; 
    } 
    void push(int x) 
    { 
        size++; 
        Queue2.push(x); 
        while (!Queue1.empty()) { 
            Queue2.push(Queue1.front()); 
            Queue1.pop(); 
        } 
        queue<int> Queue = Queue1; 
        Queue1 = Queue2; 
        Queue2 = Queue; 
    } 
    void pop() 
    { 
          if (Queue1.empty()) 
          {
            return; }
        Queue1.pop(); 
        size--; 
    } 
    int top() 
    { 
        if (Queue1.empty()) 
        {
            return -1; 
            }
        return Queue1.front(); 
    } 
    int length() 
    { 
        return size; 
    } 
}; 
  
int main() 
{ 
    Stack s; 
    s.push(1); 
    s.push(2); 
    s.push(3); 
    cout << s.top() << endl; 
    s.pop(); 
    cout << s.top() << endl; 
    s.pop(); 
    cout << s.top() << endl; 
    return 0; 
} 