#include "node.h"

#ifndef SEARCHING_ALGO_H
#define SEARCHING_ALGO_H


template <typename T>
void linearSearchArr(T data[], int arrSize, T dataFind){
    //Step 1: I := 0
    int i = 0;

    //Repeat while I <= n
    while( i < arrSize){
        if(dataFind == data[i]){
            std::cout<<"the search is success\n";
            return;
        }
        //increment i to move to the next element
        i++;
    }
    std::cout<< "the element is not found \n";

    return;
}

template <typename T>
void linearSearchLL(Node<T>* head, T dataFind){
   //repeat the loop until the current node is not null
   while(head != nullptr){

    // if item = current node's data then display searching is successful
    if(dataFind == head->data){
        std::cout<<"the search was a success\n";
        return;
    }

    // if not, move to the next node 
    head = head->next;
}

    // the searching reached nullptr, -> search is unseccessful
    std::cout<< "the search was unsuccessful\n";

}

/*
1. Start node is set to head of the list and the last node is set to NULL.
2. Middle element is calculated using the two pointers approach discussed above.
3. If the middle element is same as the key to be searched, we return it.
4. Else if middle element is greater than the key to be searched, we have to search is the
right side of the singly linked list. So, we set start pointer to the next of middle
element.
5. Else if middle element is less than the key to be searched, we have to search is the left
side of the singly linked list. So, we set last pointer to the middle element.
6. If the key is found or the entire linked list gets traversed, we break the loop.

*/

template <typename T>
Node<T>* getMiddle(Node<T>* start, Node<T> last){
    //use two pointers: 1 slow moves one node at a time, fast moves two nodes at a time
    Node<T>* slow = start;
    Node<T>* fast = start;

    //get middle:
    while(fast != last && fast->next != last){
        //move slow (one step)
        slow = slow->next;
        //moove fast (two steps)
        fast = fast->next->next;
    }
    
    // when fast reaches the end 
    // slow poitns to the middle node

    return slow;
}
 


#endif
