#include <stdio.h>
#include "LinkList.h"

int main() {
    int elem;
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    LinkNode *List = Init();
    createListBack(List,array,10);
    printf("Linked list elements:"); DispList(List);
    printf("Insert element 100 at 0\n"); ListInsert(List,0,100);
    printf("Linked list elements:"); DispList(List);
    printf("Delete the element at position 1\n"); ListDelete(List,1,&elem);
    printf("Linked list elements:"); DispList(List);
    printf("Delete element 7\n"); ListDelete(List, localElem(List,7),&elem);
    printf("Linked list elements:"); DispList(List);
    getElem(List,5,&elem);
    printf("The element with rank 5 is: %d\n",elem);
    return 0;
}
