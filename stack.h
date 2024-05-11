#ifndef STACK_H
#define STACK_H

// TODO: Stack 클래스 정의 작성
#include "linked_list.h"

class Stack : public LinkedList
{
private:
    int len;
    LinkedList stack;
public:
    Stack() {};
    ~Stack() {};

    void push(int data);
    int peek();
    int pop();

    LinkedList& operator+=(int value);
};

#endif