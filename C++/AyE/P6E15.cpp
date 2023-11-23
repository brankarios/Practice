#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList{
private:

    Node* head;

public:

    LinkedList(){
        head = NULL;
    }

    void insertInMiddle(int value){

        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL){

            head = newNode;

        }else{

            int count = 0;
            Node* current = head;
            Node* previous = NULL;

            while (current != NULL){

                count++;
                current = current->next;
            }

            int middle = count / 2;

            current = head;

            for (int i = 0; i < middle; i++) {
                previous = current;
                current = current->next;
            }

            if (previous == NULL) {
                head = newNode;
            } else {
                previous->next = newNode;
            }

            newNode->next = current;
        }
}

    void print() {
        Node* current = head;

        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
    }
};

int main(){


    int a,b,c,d,e,f;

    cin >> a >> b >> c >> d >> e >> f;

    LinkedList list;

    list.insertInMiddle(a);
    list.insertInMiddle(b);
    list.insertInMiddle(c);
    list.insertInMiddle(d);
    list.insertInMiddle(e);
    list.insertInMiddle(f);



    cout << "Original List: ";
    list.print();
    cout << endl;

    list.insertInMiddle(3);

    cout << "List after inserting 3: ";
    list.print();
    cout << endl;

    return 0;
}