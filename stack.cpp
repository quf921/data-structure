#include "stack.h"

// TODO: Stack 클래스 구현 작성

void Stack::push(int data) {
    LinkedList::insert(0, data);
}

int Stack::peek() {
    return LinkedList::get(0);
}

int Stack::pop() {
    int value = Stack::peek();
    LinkedList::remove(0);
    return value;
}

LinkedList& Stack::operator+=(int value) {
    push(value);
    return *this;
}