#include "queue.h"

// TODO: Queue 클래스 구현 작성
void Queue::push(int data) {
    LinkedList::insert(size_, data);
}

int Queue::peek() {
    return LinkedList::get(0);
}

int Queue::pop() {
    int data = Queue::peek();
    LinkedList::remove(0);
    return data;
}

LinkedList& Queue::operator+=(int value) {
    push(value);
    return *this;
}