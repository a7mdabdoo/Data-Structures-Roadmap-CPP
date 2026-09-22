/**
 * ============================================================================
 * 📌 التاسك الأول: بناء الـ Stack باستخدام Array (Stack Array-Based)
 * ============================================================================
 * 
 * 🎯 المطلوب منك:
 * قم ببناء Class للـ Stack من الصفر يعتمد على مصفوفة (Array) ويتبع مبدأ (LIFO).
 * 
 * ⚙️ العمليات (Methods) المطلوب برمجتها:
 * 1. push(val): إضافة عنصر لأعلى الـ Stack (مع فحص الـ Overflow لو ممتلئ).
 * 2. pop(): حذف العنصر الموجود في القمة (مع فحص الـ Underflow لو فارغ).
 * 3. top() / peek(): إرجاع قيمة العنصر في القمة بدون حذفه.
 * 4. isEmpty(): دالة تُرجع true لو الـ Stack فارغ.
 * 5. isFull(): دالة تُرجع true لو الـ Stack ممتلئ تماماً.
 * 6. print() / display(): طباعة جميع عناصر الـ Stack من القمة للقاع.

 * 💡 ملاحظة:
 * يفضل عمل الـ Class باستخدام الـ Templates حتى يقبل أي نوع بيانات (int, char, string, ...).
 * ============================================================================
 */

#include <iostream>

using namespace std;
const int MAX = 10;
template <class item>
class Stack {

    item items[MAX];
    int top;
public:
    Stack() : top(-1) {};

    void push(item element) {
        if (top == MAX - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        items[++top] = element;
    }
    void pop() {
        if (top==-1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    void pop(item &element) {
        if (top==-1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        element = items[top];
        top--;

    }
    void peek() {
        if (top==-1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        cout << items[top] << endl;
    }
    bool isEmpty() {
        if (top==-1) {
            return true;
        }
        return false;
    }
    bool isFull() {
        if (top == MAX - 1) {
            return true;
        }
        return false;
    }
    void print() {
        if (top==-1) {
            cout << "Stack Underflow" << endl;
        }
        for (int i=top; i>=0; i--) {
            cout << items[i] << endl;
        }

    }
} ;

int main() {
    Stack<int> s;
    s.push(10); s.push(20); s.push(30); s.push(40); s.push(50); s.push(60);
    s.print();
    s.pop();
    s.pop();
    cout << "After popping two elements:" << endl;
    s.print();
    s.peek();
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is stack full? " << (s.isFull() ? "Yes" : "No") << endl;
    cout << "Final state of the stack:" << endl;
    s.print();
    cout << "Popping all elements:" << endl;
    while (!s.isEmpty()) {
        s.pop();
    }
    cout << "Final state of the stack:" << endl;
    s.print();

    return 0;
}
