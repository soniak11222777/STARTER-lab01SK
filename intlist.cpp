// intlist.cpp
// Implements class IntList
// Sonia Kumar, 10.12.2026

#include "intlist.h"

#include <iostream>
using std::cout;

// copy constructor
IntList::IntList(const IntList& source) {
   // this.info = source.info;
}

// destructor deletes all nodes
IntList::~IntList() {
/*   Node* curr = head;
   while(curr!=nullptr){
   Node* newNode = curr->next;
   delete curr;
   curr = newNode;
   }*/
}


// return sum of values in list
int IntList::sum() const {
   int s = 0;
    Node* curr = head;
    if (curr==nullptr){
return 0;
    }
    while(curr != nullptr){
    Node* nNode = curr;
    s += nNode->info;
    curr = nNode->next;      
    }
//    cout << "sum: " << s;
    return s;
    }

// returns true if value is in the list; false if not
bool IntList::contains(int value) const { 
   /* Node* here = head;
    while(here != nullptr){
    if (here->info == value){
    return true;
    }
Node* nNode = here->next;
here = nNode
}
return false;*/
return false;
}
// returns maximum value in list, or 0 if empty list
int IntList::max() const {
   return 0;
}

// returns average (arithmetic mean) of all values, or
// 0 if list is empty
double IntList::average() const {
    if (head == nullptr){
        return 0.0;
    }
   // int t = sum();
   // int b = count();
    double val = (sum()/count());
    return val;
}

// inserts value as new node at beginning of list
void IntList::push_front(int value) {
  Node* curr = new Node;
  curr->info = value;
  if (head == nullptr){
      head = curr;
      tail = curr;
  } else{
   curr->next = head;
   head = curr;
  // cout << "head: " << head->info;
  }
}

// append value at end of list
void IntList::push_back(int value) {
    Node* curr= new Node;
    curr->info = value;
    if (head==nullptr){
        head = curr;
        tail = curr;
    } else{
    tail->next = curr;
    tail = curr;
//    cout << "tail: " << tail->info;
    }
}

// return count of values
int IntList::count() const {
   int num = 0;
   Node* curr = head;
   if (curr==nullptr){
       return 0;
   }
while (curr!=nullptr){
Node* n =  curr;    
num++;
curr = n->next;
}
   return num;
}

//Assignment operator should copy the list from the source
//to this list, deleting/replacing any existing nodes
IntList& IntList::operator=(const IntList& source){
    //IMPLEMENT
    return *this;
}

// constructor sets up empty list
IntList::IntList(){ 
 head = nullptr;
 tail = nullptr;
}


// DO NOT CHANGE ANYTHING BELOW (READ IT THOUGH)

// print values enclose in [], separated by spaces
void IntList::print() const {
    Node *n = head;
    cout << '[';
    while (n) {
        cout << n->info;
        if (n->next)
            cout << " ";
        n = n->next;
    }
    cout << ']';
}
