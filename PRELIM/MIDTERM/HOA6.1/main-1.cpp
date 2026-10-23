#include <iostream>
#include <cstdlib>
#include <time.h>
#include "node.h"
#include "searchingAlgo.h"

const int max_size = 50;

int main() {
    //generate random varable
    int dataset[max_size];
    srand(time(0));
    for(int i=0; i<max_size; i++){
        dataset[i]=rand();
    
    }
    for(int i=0; i < max_size; i++) {
        std::cout<<dataset[i]<< "";
    }

     std::cout<< std::endl;
     //create a user imput to ask what value to find:
     int toFind;
     std::cout<< "what value you want to search";
     std::cin>> toFind;

     linearSearchArr(dataset, max_size, toFind);

     //linear search:

     //linked list:
     Node<char>* name1 = new_node('J');
     Node<char>* name2 = new_node('I');
     Node<char>* name3 = new_node('M');
     Node<char>* name4 = new_node('L');
     Node<char>* name5 = new_node('O');
     Node<char>* name6 = new_node('R');
     Node<char>* name7 = new_node('D');

     name1->next = name2;
     name2->next = name3;
     name3->next = name4;
     name4->next = name5;
     name5->next = name6;
     name6->next = name7;
     
     std::cout<<"Linear search for Linked List result: ";
     linearSearchLL(name1, 'D');
     std::cout<<"Linear search for Linked List result: ";
     linearSearchLL(name1, 'x');

     //implement here:  
}