#include <iostream>
#include <string>

using namespace std;

// s t a c k . h

#ifndef STACK_H
#define STACK_H

struct node
{
    public: 
        string data; 
        struct node *next;
};

class stack
{
   struct node *head; //top of stack
   
    public:

        stack(); //default contructor
        void push(string item); //Add an element at the top of the stack
        string pop(); //Remove the top element of the stack
};

#endif