/*
CSCI 104: Homework 1 Problem 1

Use this file to test your split.cpp file.

Create linked lists and split them with your split() function.

You can compile this file like this:
g++ split.cpp test_split.cpp -o test_split
*/

#include "split.h"
#include <cstddef>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
  Node* in = new Node(1,
              new Node(3,
              new Node(4,
              new Node (10,
              new Node( 23, NULL)))));
  // 1 -> 3 -> 4 -> 10 -> 23 -> NULL
  Node* odds = NULL;
  Node* evens = NULL;
  split(in, odds, evens);
  
  cout << in << endl;
  cout << odds << endl;
  cout << evens << endl;
}
