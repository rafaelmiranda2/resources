#include "Queue.h"

// empty constructor
Queue::Queue() {

}

// empty destructor
Queue::~Queue() {

}

// do not change
void Queue::enqueue(int x) {
    stack1.push(x);
}

// you implement this!!!
void Queue::dequeue() {
    if (!stack2.empty()) {
        stack2.pop();
    }
    else if (!stack1.empty()){
        while (!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        }
        stack2.pop();
    }
}

// you implement this!!!
int Queue::front() {
    return stack1.top();
}

// do not change
bool Queue::empty() {
    return stack1.empty() && stack2.empty();
}