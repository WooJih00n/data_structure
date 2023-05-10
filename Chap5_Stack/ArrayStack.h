#pragma once
#include <cstdio>
const int MAX_STACK_SIZE = 20; // 스택의 최대 크기 설정
// = #define MAX_STACK_SIZE 20
class ArrayStack
{
    int top; // 요소의 개수
    int data[MAX_STACK_SIZE]; // 요소의 배열//자료형이 int (정수형)
public:
    ArrayStack() { top = -1; } // 스택 생성자
    ~ArrayStack() {} // 스택 소멸자

    bool isEmpty() { return top == -1; } //top과 -1이 같으면 true,다르면 false 반환

    bool isFull() { return top == MAX_STACK_SIZE - 1; }

    void push(int e) { // 맨 위에 항목 삽입
        if (isFull())
            printf("스택 포화 에러");
        else
            data[++top] = e;
    }

    int pop() {
        if (isEmpty())
            printf("스택 공백에러");
        return data[top--];
    }

    int peek() {
        if (isEmpty())
            printf("스택공백 에러");
        return data[top];
    }

    void display() {
        printf("[스택 항목의 수= %2d ==>", top + 1);
        for (int i = 0; i <= top; i++)
            printf("<%2d>", data[i]);
        printf("\n");
    }
};