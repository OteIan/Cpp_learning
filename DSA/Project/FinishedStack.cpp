#include <iostream>
using namespace std;


string grade_calculator(int mean_grade) {
    string grade;
    if (mean_grade >= 70) {
        grade = "A - " + to_string(mean_grade);
    }
    else if (mean_grade >= 60) {
        grade = "B - " + to_string(mean_grade);
    }
    else if (mean_grade >= 50) {
        grade = "C - " + to_string(mean_grade);
    }
    else if (mean_grade >= 40) {
        grade = "D - " + to_string(mean_grade);
    }
    else {
        grade = "E - " + to_string(mean_grade);
    }
    return grade;
}


class Node {
public:
    string RegNo, name, gender, grade;
    int AppliedMaths1A, AppliedMaths1B, ComputerScience, DSA, ECT;
    int Physics1A, Physics1B, PureMaths1A, PureMaths1B;
    int WorkshopTechnology1, WorkshopTechnology2;
    int aggregate, age;
    Node *next;

    Node() {
        RegNo = "";
        name = "";
        age = 0;
        gender = "";

        AppliedMaths1A = 0;
        AppliedMaths1B = 0;
        ComputerScience = 0;
        DSA = 0;
        ECT = 0;
        Physics1A = 0;
        Physics1B = 0;
        PureMaths1A = 0;
        PureMaths1B = 0;
        WorkshopTechnology1 = 0;
        WorkshopTechnology2 = 0;

        aggregate = 0;
        grade = "";

        next = NULL;
    }
    Node(string k, string n, int a, string g,
    int AM1A, int AM1B, int CSc, int D,
    int E, int Phy1A, int Phy1B, int PM1A, int PM1B,
    int WT1, int WT2) {
        RegNo = k;
        name = n;
        age = a;
        gender = g;

        AppliedMaths1A = AM1A;
        AppliedMaths1B = AM1B;
        ComputerScience = CSc;
        DSA = D;
        ECT = E;
        Physics1A = Phy1A;
        Physics1B = Phy1B;
        PureMaths1A = PM1A;
        PureMaths1B = PM1B;
        WorkshopTechnology1 = WT1;
        WorkshopTechnology2 = WT2;

        aggregate = (AppliedMaths1A + AppliedMaths1B + ComputerScience + DSA + ECT + Physics1A + Physics1B + PureMaths1A + PureMaths1B + WorkshopTechnology1 + WorkshopTechnology2);
        grade = grade_calculator(aggregate / 11);

        next = NULL;
    }
};

string print_node(Node *temp) {
    return "[" + temp->RegNo + "," + temp->name + "," + to_string(temp->age) + "," + temp->gender + "," +  "Grade: " + temp->grade + "," + to_string(temp->aggregate) + "/1100" + ", Grades => (" + to_string(temp->AppliedMaths1A) + "," + to_string(temp->AppliedMaths1B) + "," + to_string(temp->ComputerScience) + "," + to_string(temp->DSA) + "," + to_string(temp->ECT) + "," + to_string(temp->Physics1A) + "," + to_string(temp->Physics1B) + "," + to_string(temp->PureMaths1A) + "," + to_string(temp->PureMaths1B) + "," + to_string(temp->WorkshopTechnology1) + "," + to_string(temp->WorkshopTechnology2) + ")" + "]";
}

class Stack {
public:
    Node *top;

    Stack() {
        top = NULL;
    }

    bool isEmpty() {
        return top == NULL;
    }

    bool checkIfNodeExist(Node *n) {
        Node *temp = top;
        bool exist = false;

        while (temp != NULL) {
            if (temp->RegNo == n->RegNo) {
                exist = true;
                break;
            }
            temp = temp->next;
        }
        return exist;
    }

    void push(Node *n) {
        // Make changes here => aggregate and total grade calculated here
        if (top == NULL) {
            top = n;
            cout << "Node PUSHED successfully\n" << endl;
        }
        else if (checkIfNodeExist(n)) {
            cout << "Node already exist with this RegNo value.\n" << "Enter different RegNo value" << endl << endl;
        }
        else if (n->RegNo < top->RegNo) {
            n->next = top;
            top = n;

            cout << "Node PUSHED successfully\n" << endl;
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

            cout << "Node PUSHED successfully\n" << endl;
        }
    }

    Node *pop() {
        Node *temp = NULL;
        if (isEmpty()) {
            cout << "stack underflow\n" << endl;
            return temp;
        }
        else {
            // Make changes here
            temp = top;
            top = top->next;
            return temp;
        }
    }

    Node *peek() {
        // Node *temp = NULL;
        if (isEmpty()) {
            cout << "stack underflow\n" << endl;
            return NULL;
        }
        else {
            // Make changes here
            return top;
        }
    }

    int count() {
        int count = 0;
        Node *temp = top;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void display() {
        cout << "----------\nFormat of each student ==> [Reg No., Name, Age, Gender, Mean Grade, Aggregate marks, Grades => (Applied Math 1A, Appplied Math 1B, Computer Science, DSA, ECT, Physics 1A, Physics 1B, Pure Maths 1A, Pure Maths 1B, Workshop Technology I, Workshop Technology II)]\n----------" << endl;
        cout << "All values in the Stack are :" << endl;
        Node *temp = top;
        while (temp != NULL) {
            cout << print_node(temp);
            if (temp->next != NULL) {
                cout << " -> ";
            }
            cout << endl;
            temp = temp->next;
        }
        // cout<< "Total no of Nodes in the stack :" <<count()
        //<<endl;
        cout << endl;
    }

};

int main() {
    Stack s1;
    int option, sum = 0;
    float mean_grade = 0;

    do {
        cout << "What operation do you want to perform?" << "Select Option number. \nEnter 0 to exit." << endl;
        cout << "1. Push()" << endl;
        cout << "2. Pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. peek()" << endl;
        cout << "5. count()" << endl;
        cout << "6. display()" << endl;
        cout << "7. Clear Screen" << endl << endl;
        cin >> option;
        // Node n1 = new Node();
        Node *new_node = new Node();

        switch (option) {
        case 0:
            break;
        case 1:
            cout << "Enter RegNo of student: ";
            cin >> new_node->RegNo;
            cout << "Enter Name of student: ";
            cin >> new_node->name;
            cout << "Enter age of student: ";
            cin >> new_node->age;
            cout << "Enter Gender of student: ";
            cin >> new_node->gender;

            cout << "------STUDENT'S GRADES------\nEnter AppliedMaths1A marks of student: ";
            cin >> new_node->AppliedMaths1A;
            cout << "Enter AppliedMaths1B marks of student: ";
            cin >> new_node->AppliedMaths1B;
            cout << "Enter ComputerScience marks of student: ";
            cin >> new_node->ComputerScience;
            cout << "Enter DSA marks of student: ";
            cin >> new_node->DSA;
            cout << "Enter ECT marks of student: ";
            cin >> new_node->ECT;
            cout << "Enter Physics1A marks of student: ";
            cin >> new_node->Physics1A;
            cout << "Enter Physics1B marks of student: ";
            cin >> new_node->Physics1B;
            cout << "Enter PureMaths1A marks of student: ";
            cin >> new_node->PureMaths1A;
            cout << "Enter PureMaths1B marks of student: ";
            cin >> new_node->PureMaths1B;
            cout << "Enter WorkshopTechnology1 marks of student: ";
            cin >> new_node->WorkshopTechnology1;
            cout << "Enter WorkshopTechnology2 marks of student: ";
            cin >> new_node->WorkshopTechnology2;

            new_node->aggregate = (new_node->AppliedMaths1A + new_node->AppliedMaths1B + new_node->ComputerScience + new_node->DSA + new_node->ECT + new_node->Physics1A + new_node->Physics1B + new_node->PureMaths1A + new_node->PureMaths1B + new_node->WorkshopTechnology1 + new_node->WorkshopTechnology2);
            mean_grade = new_node->aggregate / 11;
            new_node->grade = grade_calculator(mean_grade);
            
            s1.push(new_node);
            break;
        case 2:
            cout << "Pop Function Called - Poped Value: " << endl;
            new_node = s1.pop();
            if (new_node != NULL) {
                cout << "TOP of Stack is: " << print_node(new_node) << endl;
                delete new_node;
            }
            cout << endl;
            break;
        case 3:
            if (s1.isEmpty())
                cout << "Stack is Empty" << endl << endl;
            else
                cout << "Stack is not Empty" << endl << endl;
            break;
        case 4:
            if (s1.isEmpty()) {
                cout << "Stack is Empty" << endl;
            }
            else {
                cout << "PEEK Function Called : " << endl;
                new_node = s1.peek();
                cout << "TOP of Stack is: " << print_node(new_node) << endl << endl;
            }
            break;
        case 5:
            cout << "Count Function Called: " << endl;
            cout << "No of nodes in the Stack: " << s1.count() << endl << endl;
            break;
        case 6:
            cout << "Display Function Called - " << endl;
            s1.display();
            cout << endl;
            break;
        case 7:
            system("clear");
            break;
        default:
            cout << "Enter Proper Option number " << endl << endl;
        }
    } while (option != 0);

    while (!s1.isEmpty()) {
        delete s1.pop();
    }
    cout << "Deleted Entire Stack" << endl;

    return 0;
}