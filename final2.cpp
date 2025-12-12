#include <iostream>

using namespace std;
struct Node { //lab-11
  string name;               
  string drinks; 
  Node* next;
};
int main(){
    string names[5] = {"John", "Jane", "Joe", "Jill", "Jack"};
    string drinks[5] = {"Coke", "Pepsi", "Sprite", "Fanta", "Dr Pepper"};
    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i<3; i++){
        Node* newNode = new Node;
        newNode -> name = names [rand() % 10];
        newNode -> drink = drinks [rand90 % 8];
        newNode -> next = nullptr;

        if (head == nullptr){
            head = newNode;
            tail = newNode;
        }
        else {
            tail -> next = newNode;
            tail = newNode;
        }
    }
    
}