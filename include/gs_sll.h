#ifndef __GS_SLL__H
#define __GS_SLL__H123
#include<gs_common.h>
typedef struct __$_gs_sll_node
{
void *ptr;
struct __$_gs_sll_node *next;
}SinglyLinkedListNode;
typedef struct __$_gs_sll
{
struct __$_gs_sll_node *start;
struct __$_gs_sll_node *end;
int size;
}SinglyLinkedList;
typedef struct __$__gs_sll_iterator
{
SinglyLinkedListNode *node;
}SinglyLinkedListIterator;

SinglyLinkedList * createSinglyLinkedList(bool *success);
void destroySinglyLinkedList(SinglyLinkedList *singlyLinkedList);
int getSizeOfSinglyLinkedList(SinglyLinkedList *singlyLinkedList);
void addToSinglyLinkedList(SinglyLinkedList *singlyLinkedList,void *ptr,bool *success);
void insertIntoSinglyLinkedList(SinglyLinkedList *singlyLinkedList,int index,void *ptr,bool *success);
void * removeFromSinglyLinkedList(SinglyLinkedList *singlyLinkedList,int index,bool *success);
void clearSinglyLinkedList(SinglyLinkedList *singlyLinkedList);
void appendToSinglyLinkedList (SinglyLinkedList *targetSinglyLinkedList,SinglyLinkedList *sourceSinglyLinkedList,bool *success);
void * getFromSinglyLinkedList(SinglyLinkedList *singlyLinkedList,int index,bool *success);
SinglyLinkedListIterator getSinglyLinkedListIterator(SinglyLinkedList *singlyLinkedList,bool *success);
bool hasNextInSinglyLinkedList(SinglyLinkedListIterator *singlyLinkedListIterator);
void * getNextElementFromSinglyLinkedList(SinglyLinkedListIterator *singlyLinkedListIterator,bool *success);
#endif