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
    return "[" + temp->RegNo + ", " + temp->name + ", " + to_string(temp->age) + ", " + temp->gender + ", " +  "Grade: " + temp->grade + ", " + to_string(temp->aggregate) + "/1100" + ", Grades => (" + to_string(temp->AppliedMaths1A) + ", " + to_string(temp->AppliedMaths1B) + ", " + to_string(temp->ComputerScience) + ", " + to_string(temp->DSA) + ", " + to_string(temp->ECT) + ", " + to_string(temp->Physics1A) + ", " + to_string(temp->Physics1B) + ", " + to_string(temp->PureMaths1A) + ", " + to_string(temp->PureMaths1B) + ", " + to_string(temp->WorkshopTechnology1) + ", " + to_string(temp->WorkshopTechnology2) + ")" + "]";
}

class Stack {
// TO-DO: Order BY: Age, Grade, Aggregate, Each Unit Grade
private:
    int nb_students = 0;
public:
    Node *top;

    Stack() {
        top = NULL;
    }

    bool isEmpty() {
        return top == NULL;
    }

    bool checkIfNodeExist(Node *n) {
        // Change to binary search
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
            nb_students++;
        }
        else if (checkIfNodeExist(n)) {
            cout << "Node already exist with this RegNo value.\n" << "Enter different RegNo value" << endl << endl;
        }
        else if (n->RegNo < top->RegNo) {
            n->next = top;
            top = n;

            cout << "Node PUSHED successfully\n" << endl;
            nb_students++;
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
            nb_students++;
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
            nb_students--;
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
        return nb_students;
    }

    void display() {
        cout << "----------\nFormat for grades ==> (Applied Math 1A, Appplied Math 1B, Computer Science, DSA, ECT, Physics 1A, Physics 1B, Pure Maths 1A, Pure Maths 1B, Workshop Technology I, Workshop Technology II)\n----------" << endl;
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
