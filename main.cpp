#include <iostream>

using namespace std;
const int MAX_SIZE = 100;
template <class t>
class Stack {
    int top;
    t item[MAX_SIZE];

public:
    Stack() : top(-1) {} // constructor
    void push(t element) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        item[top] = element;
    }

    bool isEmpty() {
        if (top == -1) {
            return true;
        }
        return false;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    void pop(t &element) {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return;
        }
        element = item[top];
        top--;
    }
    void print() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        for (int i=top; i>=0; i--) {
            cout << item[i] << endl;
        }
    }
    void getTop(t &element) {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        element = item[top];
    }
};


int main() {
    Stack<int>s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    int topElement;
    s.getTop(topElement);
    cout << "Top element: " << topElement << endl;
    s.pop(topElement);
    cout << "Popped element: " << topElement << endl;
    s.print();
    return 0;
}
