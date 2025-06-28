#include<iostream>
using namespace std;

class node {
public:
    int data;
    node *next;
};

node *start = NULL;
node *rear = NULL;

// Create a list
node* create_ll(node *start) {
    node *new_node;
    int num;
    cout << "Enter -1 to end";
    cout << "Enter the data:";
    cin >> num;
    while (num != -1) {
        new_node = new node();
        new_node->data = num;
        if (start == NULL) {
            new_node->next = NULL;
            start = new_node;
            rear = new_node;
        } else {
            rear->next = new_node;
            new_node->next = NULL;
            rear = new_node;
        }
        cout << "Enter the data:";
        cin >> num;
    }
    return start;
}

// Display a list
void display(node *start) {
    node *ptr;
    ptr = start;
    if (start == NULL) {
        cout << "List is empty\n";
    } else {
        while (ptr->next != NULL) {
            cout << ptr->data << "\t";
            ptr = ptr->next;
        }
        cout << ptr->data;
    }
}

// Insert at Beginning
node* insert_beg(node *start) {
    node *new_node;
    int num;
    cout << "Enter the data:";
    cin >> num;
    new_node = new node();
    new_node->data = num;
    new_node->next = start;
    start = new_node;
    return start;
}

// Insert at End
node* insert_end(node *start) {
    node *ptr, *new_node;
    int num;
    cout << "Enter the data:";
    cin >> num;
    new_node = new node();
    new_node->data = num;
    ptr = start;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = new_node;
    new_node->next = NULL;
    return start;
}

// Insert after a node
node* insert_after(node *start) {
    node *ptr, *new_node, *preptr;
    int num, val;
    cout << "Enter the data:";
    cin >> num;
    cout << "Enter the value after which the data hase to be inserted:";
    cin >> val;
    new_node = new node();
    new_node->data = num;
    ptr = start;
    preptr = start;
    while (preptr->data != val) {
        preptr = ptr;
        ptr = ptr->next;
    }
    new_node->next = ptr;
    preptr->next = new_node;
    return start;
}

// Delete at Beginning
node* delete_beg(node *start) {
    node *ptr;
    if (start == NULL) {
        cout << "underflow";
    } else {
        ptr = start;
        start = start->next;
        free(ptr);
    }
    return start;
}

// Delete at End
node* delete_end(node *start) {
    node *ptr, *preptr;
    ptr = start;
    if (start == NULL) {
        cout << "underflow";
    } else {
        while (ptr->next != NULL) {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = NULL;
        free(ptr);
    }
    return start;
}

// Delete after a node
node* delete_after(node *start) {
    node *ptr, *preptr;
    int val;
    cout << "Enter the value of the node after that node which you want delete:";
    cin >> val;
    ptr = start;
    preptr = ptr;
    if (start == NULL) {
        cout << "underflow";
    } else {
        while (ptr->data != val) {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr->next;
        free(ptr);
    }
    return start;
}

// Main Menu
int main() {
    int option;
    do {
        cout << "1:create a list" << endl;
        cout << "2: Display list" << endl;
        cout << "3:Add a node in the beginning" << endl;
        cout << "4:Add a node at the end" << endl;
        cout << "5:Add a node after a given node" << endl;
        cout << "6:Delete node from the beginning" << endl;
        cout << "7:Delete node from the end" << endl;
        cout << "8:Delete a node after a given node" << endl;
        cout << "9:Exit" << endl;
        cout << "Enter your choice:" << endl;
        cin >> option;
        switch (option) {
            case 1:
                start = create_ll(start);
                cout << "LINKED LIST CREATED";
                break;
            case 2:
                display(start);
                break;
            case 3:
                start = insert_beg(start);
                break;
            case 4:
                start = insert_end(start);
                break;
            case 5:
                start = insert_after(start);
                break;
            case 6:
                start = delete_beg(start);
                break;
            case 7:
                start = delete_end(start);
                break;
            case 8:
                start = delete_after(start);
                break;
        }
    } while (option != 9);
    return 0;
}
