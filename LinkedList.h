// LinkedList.h
#pragma once
#include <cstddef>   // size_t

template <typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& value) : data(value), next(nullptr) {}
    };

    Node* head;
    Node* tail;
    size_t count;

public:
    LinkedList();                                   // start empty
    ~LinkedList();                                  // free every node
    LinkedList(const LinkedList& other);            // copy constructor
    LinkedList& operator=(const LinkedList& other); // copy assignment

    void push_back(const T& value);
    size_t size() const;
    bool empty() const;
    void clear();
};
