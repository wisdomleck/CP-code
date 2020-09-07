#include <iostream>

using namespace std;

void printLL(struct Node* head);
void reverseLL(struct Node** head);

struct Node{
    int value;
    struct Node* next;
};

int main(){
    int inputnum;

    cout << "Enter some numbers: \n";

    Node* head = nullptr;
    Node* tail = nullptr;


    while(cin >> inputnum){
        // IF first element, initialise the head
        if(head == nullptr){
            head = new Node;
            head->value = inputnum;
            head->next = nullptr;
            tail = head;
            continue;
        }
        // Otherwise, chain it into the ll at the tail
        Node* temp = new Node;
        temp->value = inputnum;
        temp->next = nullptr;

        tail->next = temp;
        tail = temp;

    }

    printLL(head);
    reverseLL(&head);
    printLL(head);

    return 0;
}

// Pass a pointer to a pointer if you want it updated
// If you want to change a value from main in a function,
// Need to take memory address of it, whether that be a
// variable value, or a pointer
void reverseLL(Node** head){
    Node* current = *head;
    Node* prev = nullptr;
    Node* next = nullptr;

    while(current != nullptr){
        next = current->next;

        current->next = prev;

        prev = current;
        current = next;

    }
    *head = prev;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp){
        if(temp->next){
            cout << temp->value << "--";
        }
        else{
            cout << temp->value << "\n";
        }
        temp = temp->next;
    }
}
