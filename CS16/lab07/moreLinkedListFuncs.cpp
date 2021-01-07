#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"



void addIntToEndOfList(LinkedList *list, int value) {
  assert(list!=NULL); // if list is NULL, we can do nothing.

  Node *p; // temporary pointer
  Node *newNode;
  p = newNode;
  p->data = value;
  p->next = NULL;

  if (list->head == NULL) {
    list->head = p;
    list->tail = p;
  } else {
    list->tail->next = p;
    list->tail = p;
    *(list->tail) = *p;
  }
}

void addIntToStartOfList(LinkedList *list, int value) {
  assert(list!=NULL); // if list is NULL, we can do nothing.

  Node *p; // temporary pointer
  Node *newNode;
  p = newNode;
  p->data = value;
  p->next = list->head;

  if (list->head == NULL) {
    list->head = p;
    list->tail = p;
  } else {
    list->head = p;
    *(list->head) = *p;
  }
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the largest value.
// You may assume list has at least one element  
// If more than one element has largest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node * pointerToMax(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.
  assert(list!=NULL);
  assert(list->head != NULL);

  Node * maxLocation = list->head;
  int max = list->head->data;
  
  for(Node *  p=list->head; p!=NULL; p=p->next) {
    if(max < p->data) {
      max = p->data;
      maxLocation = p;
    }
  }
  
  return maxLocation;
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the smallest value.  
// You may assume list has at least one element
// If more than one element has smallest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head


Node * pointerToMin(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);
  
  Node * minLocation = list->head;
  int min = list->head->data;
  
  for(Node *  p=list->head; p!=NULL; p=p->next) {
    if(min > p->data) {
      min = p->data;
      minLocation = p;
    }
  }
  
  return minLocation;

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int largestValue(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);
  
  return pointerToMax(list)->data;

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the smallest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int smallestValue(LinkedList *list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);
  
  return pointerToMin(list)->data;

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the sum of all values in the list.
// You may assume that list is not NULL
// However, the list may be empty (i.e. list->head may be NULL)
//  in which case your code should return 0.

int sum(LinkedList * list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  
  int result = 0;
  for (const Node *  p=list->head; p!=NULL; p=p->next) {
    result += p->data;
  }

  return result; // STUB!  Replace this line with correct code

}

