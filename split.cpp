/*
CSCI 104: Homework 1 Problem 1

Write a recursive function to split a sorted singly-linked
list into two sorted linked lists, where one has the even 
numbers and the other contains the odd numbers. Students 
will receive no credit for non-recursive solutions. 
To test your program write a separate .cpp file and #include
split.h.  **Do NOT add main() to this file**.  When you submit
the function below should be the only one in this file.
*/

#include "split.h"
#include <cstddef>

/* Add a prototype for a helper function here if you need */

void split(Node*& in, Node*& odds, Node*& evens)
{
  /* Add code here */
// WRITE YOUR CODE HERE
  // Base Case: Empty list
  if (in == NULL){
    return; // return NULL when empty list
  }
  
  // Pick a node from in to start and point to the next
  Node* head = in;
  in = in->next;
  head->next = NULL;

  // recursive call
  split(in, odds, evens);

  // If we still have stuff in the "in" list
  // If even
  if (head->value % 2 == 0){
    head->next = evens;
    evens = head;
  }
  // .. Or odd
  else {
    head->next = odds;
    odds = head;
  }
  
}

/* If you needed a helper function, write it here */
