#include "linked_list.h"
#include <iostream>

// TODO: LinkedList 클래스 구현 작성
LinkedList::LinkedList() {
    head_ = nullptr;
    size_ = 0;
}

LinkedList::~LinkedList() {
    Node* currentNode;
    while (head_ != nullptr) {
        currentNode = head_;
        head_ = head_->next_;

        delete currentNode;
    }
}

void LinkedList::print() {
    Node* currentNode = head_;

    while (currentNode != nullptr) {
        std::cout << currentNode->value_ << " ";

        currentNode = currentNode->next_;
    }

    std::cout << "\n";
}

// index 위치에 노드를 추가한다
void LinkedList::insert(int index, int value) {
    Node* newNode = new Node(value);
    
    // 빈 head에 새로운 node를 추가하는 경우
    if (head_ == nullptr) {
        head_ = newNode;
        size_++;
        return;
    }

    Node* currentNode = head_;

    // index 값 이전까지 반복문 시행
    for (int i = 0; i < index-1; i++) {
        currentNode = currentNode->next_;
    }

    // 각 index 위치에 해당하는(head, mid, tail) 로직 시행
    if (index == 0) {
        newNode->next_ = currentNode;
        head_ = newNode;
    } else if (index <= size_-1) {
        currentNode->next_ = newNode;
        newNode->next_ = currentNode->next_->next_;
    } else if (index >= size_-1) {
        currentNode->next_ = newNode;
    }

    size_++;
}

int LinkedList::get(int index) {
    Node* currentNode = head_;

    for (int i = 0; i < index-1; i++) {
        currentNode = currentNode->next_;
    }

    return currentNode->value_;
}

void LinkedList::remove(int index) {
    Node* delNode = head_;
    Node* currentNode;

    for (int i = 0; i < index-1; i++) {
        delNode = delNode->next_;
    }

    // 각 index 위치에 해당하는(head, mid, tail) 로직 시행
    if (index == 0) {
        head_ = delNode->next_;
    } else if (index <= size_-1) {
        currentNode = delNode;
        currentNode->next_ = currentNode->next_->next_;
        delNode = delNode->next_;
    } else if (index >= size_-1) {
        currentNode = delNode;
        delNode->next_ = nullptr;
        delNode = currentNode->next_;
        
    }

    delete delNode;

    size_--;
}
