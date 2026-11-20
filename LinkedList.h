// LinkedList.h
#pragma once //tells the compiler to include this file only once
#include <cstddef>   // size_t

template <typename T> //makes T a placeholder
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
    //Constructor : start as and empty list
    LinkedList() : head(nullptr), tail(nullptr), count(0) {}
    
    //Destructor: 
    ~LinkedList()  {
        Node* current = head; //start at the first box

            while (current != nullptr) { //keep going while there is a box
                Node* nextBox = current->next; //read what's next before deleting
                delete current; //delete current box
                current = nextBox; //move to the box that was read from the previous box
            }
    }
    
    LinkedList(const LinkedList& other) = delete;         // copy constructor
    LinkedList& operator=(const LinkedList& other) = delete; // copy assignment

    void push_back(const T& value) {
        Node* newNode = new Node(value); //Create a new node

        if (head == nullptr) { //If list is empty new node is both first and last so head and tail both point to it
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode; // Otherwise current last node's next is pointed at the new node and tail moves ot the new node
            tail = newNode;
        }
        count++; // Add one to count
    }
    size_t size() const { return count; }
    bool empty() const { return count == 0; }
    void clear();
};
