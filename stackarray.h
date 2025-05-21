#include <iostream>
using namespace std;

const int MAX_ITEMS = 100;

template <class T>
class stackArray {
private:
    int top;
    T items[MAX_ITEMS];

public:
    stackArray();
    void MakeEmpty();
    bool IsFull() const;
    bool IsEmpty() const;
    void push(T newItem);
    void pop(T& item);
};

template <class T>
stackArray<T>::stackArray() {
    top = -1;
}

template <class T>
void stackArray<T>::MakeEmpty() {
    top = -1;
}

template <class T>
bool stackArray<T>::IsFull() const {
    return (top == MAX_ITEMS - 1);
}

template <class T>
bool stackArray<T>::IsEmpty() const {
    return (top == -1);
}

template <class T>
void stackArray<T>::push(T newItem) {
    if (IsFull()) {
        cout << "Stack Is Full!" << endl;
        return;
    }
    top++;
    items[top] = newItem;
}

template <class T>
void stackArray<T>::pop(T& item) {
    if (IsEmpty()) {
        cout << "Stack Is Empty!" << endl;
        return;
    }
    item = items[top];
    top--;
}