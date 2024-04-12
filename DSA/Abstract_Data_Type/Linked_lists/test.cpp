    void push(Node *n) {
        if (top == NULL) {
            top = n;
            cout << "Node PUSHED successfully" << endl;
        }
        else if (checkIfNodeExist(n)) {
            cout << "Node already exist with this RegNo value.\n" << "Enter different RegNo value" << endl;
        }
        else {
            if (n->RegNo < top->RegNo) {
                n->next = top;
                top = n;
            }
            else {
                Node *temp = top;
                while (temp->next != NULL && temp->next->RegNo < n->RegNo) {
                    temp = temp->next;
                }
                n->next = temp->next;
                temp->next = n;
                if (temp->next == NULL) {
                    top = n;
                }
            }
            cout << "Node PUSHED successfully" << endl;
        }
    }
