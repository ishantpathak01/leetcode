class MyLinkedList {
public:
    struct Node {
        int val;
        Node* next;
        Node(int x) {
            val = x;
            next = nullptr;
        }
    };
    Node* head;
    int size;
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }
    int get(int index) {
        if(index < 0 || index >= size) return -1;
        Node* temp = head;
        while(index--) {
            temp = temp->next;
        }
        return temp->val;
    }
    void addAtHead(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    void addAtTail(int val) {
        Node* temp = new Node(val);
        if(head == nullptr) {
            head = temp;
        }
        else {
            Node* curr = head;

            while(curr->next != nullptr) {
                curr = curr->next;
            }

            curr->next = temp;
        }
        size++;
    }
    void addAtIndex(int index, int val) {
        if(index < 0) index = 0;
        if(index > size) return;
        if(index == 0) {
            addAtHead(val);
            return;
        }

        Node* temp = head;
        for(int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }

        Node* curr = new Node(val);
        curr->next = temp->next;
        temp->next = curr;
        size++;
    }
    void deleteAtIndex(int index) {
        if(index < 0 || index >= size) return;
        if(index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        else {
            Node* temp = head;
            for(int i = 0; i < index - 1; i++) {
                temp = temp->next;
                }
            Node* del = temp->next;
            temp->next = del->next;
            delete del;
        }

        size--;
    }
};
