//Ques 2: Write a C++ code that take linked list from user input and a value integer . Delete the value from the linkedlist. Sample Input :- 10->20->30->40 value = 20 Sample Output :- 10->30->40

#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, int data) {
    Node* newNode = new Node{data, nullptr};
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deleteValue(Node*& head, int value) {
    if (!head) return;

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->next && current->next->data != value) {
        current = current->next;
    }

    if (current->next) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

void printList(Node* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << "->";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);

    cout << "Original list: ";
    printList(head);

    int valueToDelete = 20;
    deleteValue(head, valueToDelete);

    cout << "List after deleting " << valueToDelete << ": ";
    printList(head);

    return 0;
}

//Ques 1: Write a program that defines a Student class and uses the this pointer in a member function to display the student's details.

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    int age;

public:
    // Constructor
    Student(string name, int rollNumber, int age) {
        this->name = name;
        this->rollNumber = rollNumber;
        this->age = age;
    }

    void displayDetails() const {
        cout << "Name: " << this->name << endl;
        cout << "Roll Number: " << this->rollNumber << endl;
        cout << "Age: " << this->age << endl;
    }
};

int main() {
    Student student1("John Doe", 101, 20);

    student1.displayDetails();

    return 0;
}
