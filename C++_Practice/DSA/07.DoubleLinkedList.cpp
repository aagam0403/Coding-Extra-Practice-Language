#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *prev;
    node *next;
};

node *start = NULL;
node *rear = NULL;

// Create a list
node* create_ll(node *start) {
    node *new_node;
    int num;
    cout << "\n Enter -1 to end";
    cout << "\n Enter the data: ";
    cin >> num;
    while (num != -1) {
        new_node = new node();
        new_node->data = num;
        if (start == NULL) {
            start = new_node;
            new_node->prev = NULL;
            new_node->next = NULL;
            rear = new_node;
        } else {
            rear->next = new_node;
            new_node->prev = rear;
            new_node->next = NULL;
            rear = new_node;
        }
        cout << "\n Enter the data: ";
        cin >> num;
    }
    return start;
}

// Display list
node* display(node *start) {
    node *ptr = start;
    cout << "\n";
    if (start == NULL) {
        cout << "List is empty";
    } else {
        while (ptr->next != NULL) {
            cout << ptr->data << "\t";
            ptr = ptr->next;
        }
        cout << ptr->data;
    }
    return start;
}

// Display reverse list
node* rev_display(node *start) {
    node *ptr = start;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    while (ptr->prev != NULL) {
        cout << ptr->data << "\t";
        ptr = ptr->prev;
    }
    cout << ptr->data << "\t";
    return start;
}

// Insert at beginning
node* insert_beg(node *start) {
    node *new_node;
    int num;
    cout << "\n Enter the data: ";
    cin >> num;
    new_node = new node;
    new_node->data = num;
    new_node->prev = NULL;
    new_node->next = start;
    start->prev = new_node;
    start = new_node;
    return start;
}

// Insert at end
node* insert_end(node *start) {
    node *new_node, *ptr;
    int num;
    cout << "\n Enter the data: ";
    cin >> num;
    new_node = new node;
    new_node->data = num;
    new_node->next = NULL;
    ptr = start;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = new_node;
    new_node->prev = ptr;
    return start;
}

// Insert after a node
node* insert_after(node *start) {
    node *new_node, *ptr;
    int num, val;
    cout << "\n Enter the data: ";
    cin >> num;
    cout << "Enter the value after which the data has to be inserted: ";
    cin >> val;
    new_node = new node;
    new_node->data = num;
    ptr = start;
    while (ptr->data != val) {
        ptr = ptr->next;
    }
    new_node->prev = ptr;
    new_node->next = ptr->next;
    if (ptr->next != NULL)
        ptr->next->prev = new_node;
    ptr->next = new_node;
    return start;
}

// Delete at beginning
node* delete_beg(node *start) {
    node *ptr;
    if (start == NULL) {
        cout << "Underflow\n";
    } else {
        if (start->next == NULL) {
            ptr = start;
            free(ptr);
            cout << "Node is deleted\n";
            start = NULL;
        } else {
            ptr = start;
            start = start->next;
            start->prev = NULL;
            free(ptr);
            cout << "Node is deleted\n";
        }
    }
    return start;
}

// Delete at end
node* delete_end(node *start) {
    node *ptr;
    if (start == NULL) {
        cout << "Underflow\n";
    } else {
        ptr = start;
        if (ptr->next == NULL) {
            free(ptr);
            cout << "Node is deleted\n";
            start = NULL;
        } else {
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->prev->next = NULL;
            free(ptr);
        }
    }
    return start;
}

// Delete a middle node
node* delete_middle(node *start) {
    node *ptr, *temp;
    int val;
    cout << "\n Enter the node value which you want to delete: ";
    cin >> val;
    ptr = start;
    if (start == NULL) {
        cout << "Underflow\n";
    } else {
        while (ptr->data != val) {
            ptr = ptr->next;
        }
        temp = ptr->prev;
        temp->next = ptr->next;
        if (ptr->next != NULL)
            ptr->next->prev = temp;
        free(ptr);
    }
    return start;
}

// Main Menu
int main() {
    int option;
    do {
        cout << "\n\n ***MAIN MENU***";
        cout << "\n 1: Create a list";
        cout << "\n 2: Display list";
        cout << "\n 3: Add a node in the beginning";
        cout << "\n 4: Add a node at the end";
        cout << "\n 5: Add a node after a given node";
        cout << "\n 6: Delete node from the beginning";
        cout << "\n 7: Delete node from the end";
        cout << "\n 8: Delete a middle node";
        cout << "\n 9: Reverse display";
        cout << "\n 10: Exit";
        cout << "\n*********************";
        cout << "\n\n Enter your choice: ";
        cin >> option;
        switch (option) {
            case 1:
                start = create_ll(start);
                cout << "\nLINKED LIST CREATED";
                break;
            case 2:
                start = display(start);
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
                start = delete_middle(start);
                break;
            case 9:
                start = rev_display(start);
                break;
        }
    } while (option != 10);
    return 0;
}
