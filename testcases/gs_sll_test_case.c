#include<gs_sll.h>
#include<stdio.h>
#include<string.h>
int main()
{
bool success;
int x1,x2,x3,x4,x5,x6,y;
int *x;
SinglyLinkedList *list1;
SinglyLinkedList *list2;
SinglyLinkedListIterator iter;
list1=createSinglyLinkedList(&success);
list1=createSinglyLinkedList(&success);

if(success==false)
{
printf("Unable to create list");
return 0;
}
x1=100;
x2=200;
x3=300;
x4=400;
x5=500;
x6=600;
addToSinglyLinkedList(list1,(void *)&x1,&success);
addToSinglyLinkedList(list1,(void *)&x2,&success);
addToSinglyLinkedList(list1,(void *)&x3,&success);
addToSinglyLinkedList(list2,(void *)&x4,&success);
addToSinglyLinkedList(list2,(void *)&x5,&success);
addToSinglyLinkedList(list2,(void *)&x6,&success);

x=(int *)getFromSinglyLinkedList(list1,0,&success);//TO get data from specific Index
printf("%d\n",*x);

appendToSinglyLinkedList(list1,list2,&success);
if(success)printf("Append\n");
else printf("Unable to append\n");

iter=getSinglyLinkedListIterator(list1,&success);
if(success)
{
while(hasNextInSinglyLinkedList(&iter))
{
x=(int *)getNextElementFromSinglyLinkedList(&iter,&success);
printf("%d\n",*x);
}
}

destroySinglyLinkedList(list1);
destroySinglyLinkedList(list2);
return 0;
}