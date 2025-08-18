struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = prev = nullptr;
    }
};

class MyLinkedList {
private:
    Node* head;
    Node* tail;
public:
    MyLinkedList() {
        head = tail = nullptr;
    }

    int get(int index) {
        Node* temp = head;
        int i = 0;
        while (temp) {
            if (i == index) return temp->data;
            temp = temp->next;
            i++;
        }
        return -1;
    }

    void addAtHead(int val) {
        Node* newnode = new Node(val);
        if (!head) {
            head = tail = newnode;
        } else {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }

    void addAtTail(int val) {
        Node* newnode = new Node(val);
        if (!head) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    void addAtIndex(int index, int val) {
        if (index < 0) return;

        Node* newnode = new Node(val);
        Node* temp = head;
        int len = 0;
        while (temp) {
            temp = temp->next;
            len++;
        }

        if (index > len) return;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        if (index == len) {
            addAtTail(val);
            return;
        }

        temp = head;
        int i = 0;
        while (i < index - 1) {
            temp = temp->next;
            i++;
        }

        Node* right = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
        newnode->next = right;
        if (right) {
            right->prev = newnode;
        }
    }

    void deleteAtIndex(int index) {
        if (head == nullptr) return;

        Node* temp = head;
        int i = 0;
        while (temp && i < index) {
            temp = temp->next;
            i++;
        }

        if (!temp) return;

        if (temp == head) {
            head = head->next;
            if (head) head->prev = nullptr;
            else tail = nullptr;
        }
        else if (temp == tail) {
            tail = tail->prev;
            if (tail) tail->next = nullptr;
        }
        else {
            temp->prev->next = temp->next;
            if (temp->next) temp->next->prev = temp->prev;
        }

        delete temp;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */