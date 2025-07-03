// Double Circular Linked List
#include<iostream>
using namespace std;

class node {
public:
    int data;
    node *next;
    node *prev;
};

node *start = NULL;
node *rear = NULL;

node* create_ll(node* start) {
    node *new_node;
    int num;
    cout << "Enter -1 to end\n";
    cout << "Enter the data: ";
    cin >> num;
    while (num != -1) {
        new_node = new node();
        new_node->data = num;
        if (start == NULL) {
            start = new_node;
            new_node->next = start;
            new_node->prev = start;
            rear = new_node;
        } else {
            rear->next = new_node;
            new_node->prev = rear;
            new_node->next = start;
            start->prev = new_node;
            rear = new_node;
        }
        cout << "Enter the data: ";
        cin >> num;
    }
    return start;
}

node* display(node* start) {
    if (start == NULL) {
        cout << "\nList is empty\n";
        return start;
    }
    node* ptr = start;
    cout << "\nList elements: ";
    do {
        cout << " " << ptr->data;
        ptr = ptr->next;
    } while (ptr != start);
    cout << endl;
    return start;
}

node* insert_beg(node* start) {
    int num;
    cout << "Enter the data: ";
    cin >> num;
    node* new_node = new node();
    new_node->data = num;
    if (start == NULL) {
        start = new_node;
        new_node->next = start;
        new_node->prev = start;
        rear = new_node;
    } else {
        new_node->next = start;
        new_node->prev = rear;
        rear->next = new_node;
        start->prev = new_node;
        start = new_node;
    }
    return start;
}

node* insert_end(node* start) {
    int num;
    cout << "Enter the data: ";
    cin >> num;
    node* new_node = new node();
    new_node->data = num;
    if (start == NULL) {
        start = new_node;
        new_node->next = start;
        new_node->prev = start;
        rear = new_node;
    } else {
        rear->next = new_node;
        new_node->prev = rear;
        new_node->next = start;
        start->prev = new_node;
        rear = new_node;
    }
    return start;
}

node* insert_after(node* start) {
    int num, val;
    cout << "Enter the data: ";
    cin >> num;
    cout << "Enter the value after which to insert: ";
    cin >> val;
    node* new_node = new node();
    new_node->data = num;
    node* ptr = start;
    while (ptr != NULL && ptr->data != val) {
        ptr = ptr->next;
        if (ptr == start) break;
    }
    if (ptr == NULL || ptr->data != val) {
        cout << "Value not found\n";
        return start;
    }
    new_node->next = ptr->next;
    new_node->prev = ptr;
    ptr->next->prev = new_node;
    ptr->next = new_node;
    if (ptr == rear) {
        rear = new_node;
    }
    return start;
}

node* delete_beg(node* start) {
    if (start == NULL) {
        cout << "List is empty\n";
        return start;
    }
    node* ptr = start;
    if (start->next == start) {
        delete start;
        start = NULL;
        rear = NULL;
    } else {
        start = start->next;
        rear->next = start;
        start->prev = rear;
        delete ptr;
    }
    return start;
}

node* delete_end(node* start) {
    if (start == NULL) {
        cout << "List is empty\n";
        return start;
    }
    node* ptr = rear;
    if (start->next == start) {
        delete start;
        start = NULL;
        rear = NULL;
    } else {
        rear = rear->prev;
        rear->next = start;
        start->prev = rear;
        delete ptr;
    }
    return start;
}

node* delete_node(node* start) {
    int val;
    cout << "Enter the value to delete: ";
    cin >> val;

    if (start == NULL) {
        cout << "List is empty\n";
        return start;
    }

    node* ptr = start;
    if (ptr->data == val) {
        return delete_beg(start);
    }

    do {
        if (ptr->data == val) break;
        ptr = ptr->next;
    } while (ptr != start);

    if (ptr == start) {
        cout << "Node with value " << val << " not found\n";
        return start;
    }

    ptr->prev->next = ptr->next;
    ptr->next->prev = ptr->prev;
    if (ptr == rear) {
        rear = ptr->prev;
    }
    delete ptr;
    return start;
}

int main() {
    int option;
    do {
        cout << "\n\n *** MAIN MENU ***";
        cout << "\n 1: Create a list";
        cout << "\n 2: Display list";
        cout << "\n 3: Add a node at the beginning";
        cout << "\n 4: Add a node at the end";
        cout << "\n 5: Add a node after a given node";
        cout << "\n 6: Delete node from the beginning";
        cout << "\n 7: Delete node from the end";
        cout << "\n 8: Delete a given node";
        cout << "\n 9: Exit";
        cout << "\n\nEnter your choice: ";
        cin >> option;

        switch (option) {
            case 1: start = create_ll(start); break;
            case 2: start = display(start); break;
            case 3: start = insert_beg(start); break;
            case 4: start = insert_end(start); break;
            case 5: start = insert_after(start); break;
            case 6: start = delete_beg(start); break;
            case 7: start = delete_end(start); break;
            case 8: start = delete_node(start); break;
        }
    } while (option != 9);
    return 0;
}
