#include <iostream>
#include <stack>
using namespace std;
void insertInSortedOrder(stack<int>& s, int element) {
    if (s.empty() || s.top() <= element) {
        s.push(element);
        return;
    }
    int topElement = s.top();
    s.pop();
    insertInSortedOrder(s, element);
    s.push(topElement);
}
void sortStack(stack<int>& s) {
    if (s.empty()) {
        return;
    }
    int topElement = s.top();
    s.pop();
    sortStack(s);
    insertInSortedOrder(s, topElement);
}
void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(30);
    s.push(10);
    s.push(50);
    s.push(20);
    s.push(40);
    cout << "Original stack: ";
    printStack(s);
    sortStack(s);
    cout << "Sorted stack: ";
    printStack(s);

    return 0;
}

