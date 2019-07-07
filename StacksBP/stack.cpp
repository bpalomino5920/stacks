#include "stack.h"
#include <iostream>

// s t a c k . c p p

/*************************************************************************************
 Name: stack
 Precondition: head is not yet initialized yet.
 Postcondition: head is initialized.
 Description: The function is a default contructor that has head assign to NULL
 *************************************************************************************/
stack::stack() {
    head = NULL;
}
/*************************************************************************************
 Name: push
 Precondition: pointer of pt is not yet initialized as data, head, and are the same
 Postcondition: new node is created to have data and the next pointer will be known as head. 
 Description: This push function adds a new node (element) with value and will be assign to head
 *************************************************************************************/
void stack::push(string item)
{
   struct node *pt = new node();
   pt->data = item;
   pt->next = (head != NULL) ? head : NULL;
   head = pt;
}
/*************************************************************************************
 Name: pop
 Precondition: if statment is idle, and rest of the initializes will be not yet invoked
 Postcondition: if statment is active, pt is initialized along with res, head, and return res.
 Description: This pop function removes the node or the top element and making sure that head will be assigned to the next element
 *************************************************************************************/
string stack::pop()
{
   struct node *pt;
   if (head == NULL) 
   
   return "\0";
   
   pt = head;
   head = head->next;
   string res = pt->data; 
   delete pt;
   return res;
}