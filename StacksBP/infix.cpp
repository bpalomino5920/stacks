#include "stack.h"
#include <iostream>
#include <string>


using namespace std;

// i n f i x . c p p

//PROGRAM HEADER
/********************************************************************************************
 Name: Brandon Palomino          Z#: Z23254937
 Course: Date Structures and Algorithm Analysis (COP3530)
 Professor: Dr. Lofton Bullard
 Due Date: 06/26/2019     Due Time: 11:59PM
 Total Points: 25
 Assignment 7: Stack program
 Description: This program is to demonstrate how to pop and push in which it leads to converting from postfix to infix expressions.
 User will input the postfix, program will read the operand and operators, and will decide if this is an error or will give you a completed conversion 
 of infix expression. 
 *********************************************************************************************/

int main() 
{
   int err;
   stack stac;
   string expre, postfix, infix, opd1, opd2, yn;
   do
   {
      cout << "Enter postfix expression: " << endl;
      getline(cin, postfix);
      err = 0;
      for(int i = 0; i < postfix.length(); i++)
      {
         string c = postfix.substr(i, 1);
         if (c == "+" || c == "-" || c == "*" || c == "/")
         {
            opd2 = stac.pop();
            if (opd2 == "\0")
            {
               cout << "Error: Too many operators and not enough operands" << endl;
               err = 1;
               break;
            } 
            opd1 = stac.pop();
            if (opd1 == "\0")
            {
               cout << "Error: Too many operators and not enough operands" << endl;
               err = 1;
               break;
            } 
            expre = "(" + opd1 + " " + c + " " + opd2 + ")";
            stac.push(expre);
         } 
         else if (c == " ")
         {
            continue;
         }
         else  
         {
            stac.push(c);
         }
      }

      if (!err) {
         infix = stac.pop();
         if (stac.pop() == "\0")
         {
            cout << "The infix expression is: " << endl << infix << endl;
         }
         else
         {
            cout << "Error: Too many operands and not enough operators" << endl;
            while(stac.pop() != "\0");
         }
      } 
      cout << "Convert another one, yes (y) or no (n): ";
      cin >> yn;
      getchar(); 
      cout<< endl;
    }
    while(yn == "y" || yn == "Y");
 
    return 0;
}
