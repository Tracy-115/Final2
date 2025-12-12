#include <iostream>
#include <cstdlib>
#include <ctime>
#include <deque>

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
        newNode -> name = names [rand() % 5];
        newNode -> drink = drinks [rand() % 5];
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

    cout << "Queue: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->name << ", " << temp-> drinks;
        temp = temp-> next;
    }
    cout << endl;

    deque<string> Muffin;
    for (int m= 0; m<3; m++){
        string name = names [rand() % 5];
        muffQ.push_back(name);
    }

    vextor<string> friendB;
    for(int b = 0; b<3; b++){
        friendB.push_back(names[rand()%5]):
    }


    for (int r= 1; 1<= 10; r++){
        cout << "Round Number: " << r << endl;
        if (rand() %2 == 0){
            Node* newNode = new Node;
            newNode -> name = names [rand()%5];
            newNode -> drinks = drinks [rand()%5];
            nreNode ->next = nullptr;
            if (head == nullptr){
                head = tail = newNode;

            }
            else {
                tail-> next = newNode;
                tail = newNode;
            }
            cout << "New Joined" << endl;
        }
        if (head != nullptr){
            cout << "Just served " << head->name << endl;
            Node* temp = head;
            head = head -> next;
            if (head == nullptr){
                tail = nullptr;
            }
            else {
                cout << "No one to serve" << endl;
            }
        
        }

        if (rand()%2 ==0) {
            string name = names [rand() % 5];
            muffQ.push_back(name);
        }
        if (!MuffQ.empty()){
            cout << "Muffin Served: " << muffQ.front().first << ", " << nuffQ.front().second << endl;
            muffQ.pop_front();
        }
        else{
            cout << "No one to serve" << endl;
        }

        if(friendB.empty()){
            cout << "Bracelet Given: " << friendB.front() << endl;
            friendB.erase(friendB.begin());
        }
        else{
            cout << "No one to serve" << endl;
        }
        if (rand() % 2 == 0){
            friendB.push_back(names[rand() % 5]);
        }
    }

}