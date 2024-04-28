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
    Node *next, *age_next, *grade_next;
    Node *AM_1A_next, *AM_1B_next, *CS_next, *DSA_next;
    Node *ECT_next, *Phy_1A_next, *Phy_1B_next, *PM_1A_next;
    Node *PM_1B_next, *WT_1_next, *WT_2_next;

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
        age_next = NULL;
        grade_next = NULL;
        AM_1A_next = NULL;
        AM_1B_next = NULL;
        CS_next = NULL;
        DSA_next = NULL;
        ECT_next = NULL;
        Phy_1A_next = NULL;
        Phy_1B_next = NULL;
        PM_1A_next = NULL;
        PM_1B_next = NULL;
        WT_1_next = NULL;
        WT_2_next = NULL;
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
        age_next = NULL;
        grade_next = NULL;
        AM_1A_next = NULL;
        AM_1B_next = NULL;
        CS_next = NULL;
        DSA_next = NULL;
        ECT_next = NULL;
        Phy_1A_next = NULL;
        Phy_1B_next = NULL;
        PM_1A_next = NULL;
        PM_1B_next = NULL;
        WT_1_next = NULL;
        WT_2_next = NULL;
    }
};

string print_node(Node *temp) {
    return "[" + temp->RegNo + ", " + temp->name + ", " + to_string(temp->age) + ", " + temp->gender + ", " +  "Grade: " + temp->grade + ", " + to_string(temp->aggregate) + "/1100" + ", Grades => (" + to_string(temp->AppliedMaths1A) + ", " + to_string(temp->AppliedMaths1B) + ", " + to_string(temp->ComputerScience) + ", " + to_string(temp->DSA) + ", " + to_string(temp->ECT) + ", " + to_string(temp->Physics1A) + ", " + to_string(temp->Physics1B) + ", " + to_string(temp->PureMaths1A) + ", " + to_string(temp->PureMaths1B) + ", " + to_string(temp->WorkshopTechnology1) + ", " + to_string(temp->WorkshopTechnology2) + ")" + "]";
}

class Stack {
// TO-DO: Order BY: Age, Grade, Aggregate, Each Unit Grade
private:
    int nb_students = 0;
    Node *age_top = NULL;
    Node *grade_top = NULL;
    Node *AM_1A_top = NULL;
    Node *AM_1B_top = NULL;
    Node *CS_top = NULL;
    Node *DSA_top = NULL;
    Node *ECT_top = NULL;
    Node *Phy_1A_top = NULL;
    Node *Phy_1B_top = NULL;
    Node *PM_1A_top = NULL;
    Node *PM_1B_top = NULL;
    Node *WT_1_top = NULL;
    Node *WT_2_top = NULL;

    void display_student(Node *n) {
        cout << "Details of the student are:\n" << endl;
        cout << "RegNo: " << n->RegNo << endl;
        cout << "Name: " << n->name << endl;
        cout << "Age: " << n->age << endl;
        cout << "Gender: " << n->gender << endl << endl;

        cout << "Applied Maths 1A: " << grade_calculator(n->AppliedMaths1A) << endl;
        cout << "Applied Maths 1B: " << grade_calculator(n->AppliedMaths1B) << endl;
        cout << "Computer Science: " << grade_calculator(n->ComputerScience) << endl;
        cout << "Data Structures and Algorithms: " << grade_calculator(n->DSA) << endl;
        cout << "Electrical Circuit Theory: " << grade_calculator(n->ECT) << endl;
        cout << "Physics 1A: " << grade_calculator(n->Physics1A) << endl;
        cout << "Physics 1B: " << grade_calculator(n->Physics1B) << endl;
        cout << "Pure Maths 1A: " << grade_calculator(n->PureMaths1A) << endl;
        cout << "Pure Maths 1B: " << grade_calculator(n->PureMaths1B) << endl;
        cout << "Workshop Technology I: " << grade_calculator(n->WorkshopTechnology1) << endl;
        cout << "Workshop Technology II: " << grade_calculator(n->WorkshopTechnology2) << endl << endl;

        cout << "Aggregate: " << n->aggregate << endl;
        cout << "Mean Grade: " << n->grade << endl << endl;
    }

    void pushByAge(Node *n) {
        if (age_top == NULL) {
            age_top = n;
        }
        else if (n->age > age_top->age) {
            n->age_next = age_top;
            age_top = n;
        }
        else {
            Node *temp = age_top;
            while (temp->age_next != NULL && temp->age_next->age > n->age) {
                temp = temp->age_next;
            }
            n->age_next = temp->age_next;
            temp->age_next = n;
            if (temp->age_next == NULL) {
                age_top = n;
            }
        }
    }

    void pushByGrade(Node *n) {
        if (grade_top == NULL) {
            grade_top = n;
        }
        else if (n->aggregate > grade_top->aggregate) {
            n->grade_next = grade_top;
            grade_top = n;
        }
        else {
            Node *temp = grade_top;
            while (temp->grade_next != NULL && temp->grade_next->aggregate > n->aggregate) {
                temp = temp->grade_next;
            }
            n->grade_next = temp->grade_next;
            temp->grade_next = n;
            if (temp->grade_next == NULL) {
                grade_top = n;
            }
        }
    }

    void pushByAM_1A(Node *n) {
        if (AM_1A_top == NULL) {
            AM_1A_top = n;
        }
        else if (n->AppliedMaths1A > AM_1A_top->AppliedMaths1A) {
            n->AM_1A_next = AM_1A_top;
            AM_1A_top = n;
        }
        else {
            Node *temp = AM_1A_top;
            while (temp->AM_1A_next != NULL && temp->AM_1A_next->AppliedMaths1A > n->AppliedMaths1A) {
                temp = temp->AM_1A_next;
            }
            n->AM_1A_next = temp->AM_1A_next;
            temp->AM_1A_next = n;
            if (temp->AM_1A_next == NULL) {
                AM_1A_top = n;
            }
        }
    }

    void pushByAM_1B(Node *n) {
        if (AM_1B_top == NULL) {
            AM_1B_top = n;
        }
        else if (n->AppliedMaths1B > AM_1B_top->AppliedMaths1B) {
            n->AM_1B_next = AM_1B_top;
            AM_1B_top = n;
        }
        else {
            Node *temp = AM_1B_top;
            while (temp->AM_1B_next != NULL && temp->AM_1B_next->AppliedMaths1B > n->AppliedMaths1B) {
                temp = temp->AM_1B_next;
            }
            n->AM_1B_next = temp->AM_1B_next;
            temp->AM_1B_next = n;
            if (temp->AM_1B_next == NULL) {
                AM_1B_top = n;
            }
        }
    }

    void pushByCS(Node *n) {
        if (CS_top == NULL) {
            CS_top = n;
        }
        else if (n->ComputerScience > CS_top->ComputerScience) {
            n->CS_next = CS_top;
            CS_top = n;
        }
        else {
            Node *temp = CS_top;
            while (temp->CS_next != NULL && temp->CS_next->ComputerScience > n->ComputerScience) {
                temp = temp->CS_next;
            }
            n->CS_next = temp->CS_next;
            temp->CS_next = n;
            if (temp->CS_next == NULL) {
                CS_top = n;
            }
        }
    }

    void pushByDSA(Node *n) {
        if (DSA_top == NULL) {
            DSA_top = n;
        }
        else if (n->DSA > DSA_top->DSA) {
            n->DSA_next = DSA_top;
            DSA_top = n;
        }
        else {
            Node *temp = DSA_top;
            while (temp->DSA_next != NULL && temp->DSA_next->DSA > n->DSA) {
                temp = temp->DSA_next;
            }
            n->DSA_next = temp->DSA_next;
            temp->DSA_next = n;
            if (temp->DSA_next == NULL) {
                DSA_top = n;
            }
        }
    }

    void pushByECT(Node *n) {
        if (ECT_top == NULL) {
            ECT_top = n;
        }
        else if (n->ECT > ECT_top->ECT) {
            n->ECT_next = ECT_top;
            ECT_top = n;
        }
        else {
            Node *temp = ECT_top;
            while (temp->ECT_next != NULL && temp->ECT_next->ECT > n->ECT) {
                temp = temp->ECT_next;
            }
            n->ECT_next = temp->ECT_next;
            temp->ECT_next = n;
            if (temp->ECT_next == NULL) {
                ECT_top = n;
            }
        }
    }

    void pushByPhy_1A(Node *n) {
        if (Phy_1A_top == NULL) {
            Phy_1A_top = n;
        }
        else if (n->Physics1A > Phy_1A_top->Physics1A) {
            n->Phy_1A_next = Phy_1A_top;
            Phy_1A_top = n;
        }
        else {
            Node *temp = Phy_1A_top;
            while (temp->Phy_1A_next != NULL && temp->Phy_1A_next->Physics1A > n->Physics1A) {
                temp = temp->Phy_1A_next;
            }
            n->Phy_1A_next = temp->Phy_1A_next;
            temp->Phy_1A_next = n;
            if (temp->Phy_1A_next == NULL) {
                Phy_1A_top = n;
            }
        }
    }

    void pushByPhy_1B(Node *n) {
        if (Phy_1B_top == NULL) {
            Phy_1B_top = n;
        }
        else if (n->Physics1B > Phy_1B_top->Physics1B) {
            n->Phy_1B_next = Phy_1B_top;
            Phy_1B_top = n;
        }
        else {
            Node *temp = Phy_1B_top;
            while (temp->Phy_1B_next != NULL && temp->Phy_1B_next->Physics1B > n->Physics1B) {
                temp = temp->Phy_1B_next;
            }
            n->Phy_1B_next = temp->Phy_1B_next;
            temp->Phy_1B_next = n;
            if (temp->Phy_1B_next == NULL) {
                Phy_1B_top = n;
            }
        }
    }

    void pushByPM_1A(Node *n) {
        if (PM_1A_top == NULL) {
            PM_1A_top = n;
        }
        else if (n->PureMaths1A > PM_1A_top->PureMaths1A) {
            n->PM_1A_next = PM_1A_top;
            PM_1A_top = n;
        }
        else {
            Node *temp = PM_1A_top;
            while (temp->PM_1A_next != NULL && temp->PM_1A_next->PureMaths1A > n->PureMaths1A) {
                temp = temp->PM_1A_next;
            }
            n->PM_1A_next = temp->PM_1A_next;
            temp->PM_1A_next = n;
            if (temp->PM_1A_next == NULL) {
                PM_1A_top = n;
            }
        }
    }

    void pushByPM_1B(Node *n) {
        if (PM_1B_top == NULL) {
            PM_1B_top = n;
        }
        else if (n->PureMaths1B > PM_1B_top->PureMaths1B) {
            n->PM_1B_next = PM_1B_top;
            PM_1B_top = n;
        }
        else {
            Node *temp = PM_1B_top;
            while (temp->PM_1B_next != NULL && temp->PM_1B_next->PureMaths1B > n->PureMaths1B) {
                temp = temp->PM_1B_next;
            }
            n->PM_1B_next = temp->PM_1B_next;
            temp->PM_1B_next = n;
            if (temp->PM_1B_next == NULL) {
                PM_1B_top = n;
            }
        }
    }

    void pushByWT_1(Node *n) {
        if (WT_1_top == NULL) {
            WT_1_top = n;
        }
        else if (n->WorkshopTechnology1 > WT_1_top->WorkshopTechnology1) {
            n->WT_1_next = WT_1_top;
            WT_1_top = n;
        }
        else {
            Node *temp = WT_1_top;
            while (temp->WT_1_next != NULL && temp->WT_1_next->WorkshopTechnology1 > n->WorkshopTechnology1) {
                temp = temp->WT_1_next;
            }
            n->WT_1_next = temp->WT_1_next;
            temp->WT_1_next = n;
            if (temp->WT_1_next == NULL) {
                WT_1_top = n;
            }
        }
    }

    void pushByWT_2(Node *n) {
        if (WT_2_top == NULL) {
            WT_2_top = n;
        }
        else if (n->WorkshopTechnology2 > WT_2_top->WorkshopTechnology2) {
            n->WT_2_next = WT_2_top;
            WT_2_top = n;
        }
        else {
            Node *temp = WT_2_top;
            while (temp->WT_2_next != NULL && temp->WT_2_next->WorkshopTechnology2 > n->WorkshopTechnology2) {
                temp = temp->WT_2_next;
            }
            n->WT_2_next = temp->WT_2_next;
            temp->WT_2_next = n;
            if (temp->WT_2_next == NULL) {
                WT_2_top = n;
            }
        }
    }

    void pushAllAttributes(Node *n) {
        pushByAge(n);
        pushByGrade(n);
        pushByAM_1A(n);
        pushByAM_1B(n);
        pushByCS(n);
        pushByDSA(n);
        pushByECT(n);
        pushByPhy_1A(n);
        pushByPhy_1B(n);
        pushByPM_1A(n);
        pushByPM_1B(n);
        pushByWT_1(n);
        pushByWT_2(n);
    }

    void popAttributesFromAge(Node *n) {
        if (age_top == n) {
            age_top = age_top->age_next;
        }
        else {
            Node *current = age_top;
            while (current->age_next != NULL && current->age_next != n) {
                current = current->age_next;
            }
            if (current->age_next == n) {
                current->age_next = n->age_next;
            }
        }
    }

    void popAttributesFromGrade(Node *n) {
        if (grade_top == n) {
            grade_top = grade_top->grade_next;
        }
        else {
            Node *current = grade_top;
            while (current->grade_next != NULL && current->grade_next != n) {
                current = current->grade_next;
            }
            if (current->grade_next == n) {
                current->grade_next = n->grade_next;
            }
        }
    }

    void popAttributesFromAM_1A(Node *n) {
        if (AM_1A_top == n) {
            AM_1A_top = AM_1A_top->AM_1A_next;
        }
        else {
            Node *current = AM_1A_top;
            while (current->AM_1A_next != NULL && current->AM_1A_next != n) {
                current = current->AM_1A_next;
            }
            if (current->AM_1A_next == n) {
                current->AM_1A_next = n->AM_1A_next;
            }
        }
    }

    void popAttributesFromAM_1B(Node *n) {
        if (AM_1B_top == n) {
            AM_1B_top = AM_1B_top->AM_1B_next;
        }
        else {
            Node *current = AM_1B_top;
            while (current->AM_1B_next != NULL && current->AM_1B_next != n) {
                current = current->AM_1B_next;
            }
            if (current->AM_1B_next == n) {
                current->AM_1B_next = n->AM_1B_next;
            }
        }
    }

    void popAttributesFromCS(Node *n) {
        if (CS_top == n) {
            CS_top = CS_top->CS_next;
        }
        else {
            Node *current = CS_top;
            while (current->CS_next != NULL && current->CS_next != n) {
                current = current->CS_next;
            }
            if (current->CS_next == n) {
                current->CS_next = n->CS_next;
            }
        }
    }

    void popAttributesFromDSA(Node *n) {
        if (DSA_top == n) {
            DSA_top = DSA_top->DSA_next;
        }
        else {
            Node *current = DSA_top;
            while (current->DSA_next != NULL && current->DSA_next != n) {
                current = current->DSA_next;
            }
            if (current->DSA_next == n) {
                current->DSA_next = n->DSA_next;
            }
        }
    }

    void popAttributesFromECT(Node *n) {
        if (ECT_top == n) {
            ECT_top = ECT_top->ECT_next;
        }
        else {
            Node *current = ECT_top;
            while (current->ECT_next != NULL && current->ECT_next != n) {
                current = current->ECT_next;
            }
            if (current->ECT_next == n) {
                current->ECT_next = n->ECT_next;
            }
        }
    }

    void popAttributesFromPhy_1A(Node *n) {
        if (Phy_1A_top == n) {
            Phy_1A_top = Phy_1A_top->Phy_1A_next;
        }
        else {
            Node *current = Phy_1A_top;
            while (current->Phy_1A_next != NULL && current->Phy_1A_next != n) {
                current = current->Phy_1A_next;
            }
            if (current->Phy_1A_next == n) {
                current->Phy_1A_next = n->Phy_1A_next;
            }
        }
    }

    void popAttributesFromPhy_1B(Node *n) {
        if (Phy_1B_top == n) {
            Phy_1B_top = Phy_1B_top->Phy_1B_next;
        }
        else {
            Node *current = Phy_1B_top;
            while (current->Phy_1B_next != NULL && current->Phy_1B_next != n) {
                current = current->Phy_1B_next;
            }
            if (current->Phy_1B_next == n) {
                current->Phy_1B_next = n->Phy_1B_next;
            }
        }
    }

    void popAttributesFromPM_1A(Node *n) {
        if (PM_1A_top == n) {
            PM_1A_top = PM_1A_top->PM_1A_next;
        }
        else {
            Node *current = PM_1A_top;
            while (current->PM_1A_next != NULL && current->PM_1A_next != n) {
                current = current->PM_1A_next;
            }
            if (current->PM_1A_next == n) {
                current->PM_1A_next = n->PM_1A_next;
            }
        }
    }

    void popAttributesFromPM_1B(Node *n) {
        if (PM_1B_top == n) {
            PM_1B_top = PM_1B_top->PM_1B_next;
        }
        else {
            Node *current = PM_1B_top;
            while (current->PM_1B_next != NULL && current->PM_1B_next != n) {
                current = current->PM_1B_next;
            }
            if (current->PM_1B_next == n) {
                current->PM_1B_next = n->PM_1B_next;
            }
        }
    }

    void popAttributesFromWT_1(Node *n) {
        if (WT_1_top == n) {
            WT_1_top = WT_1_top->WT_1_next;
        }
        else {
            Node *current = WT_1_top;
            while (current->WT_1_next != NULL && current->WT_1_next != n) {
                current = current->WT_1_next;
            }
            if (current->WT_1_next == n) {
                current->WT_1_next = n->WT_1_next;
            }
        }
    }

    void popAttributesFromWT_2(Node *n) {
        if (WT_2_top == n) {
            WT_2_top = WT_2_top->WT_2_next;
        }
        else {
            Node *current = WT_2_top;
            while (current->WT_2_next != NULL && current->WT_2_next != n) {
                current = current->WT_2_next;
            }
            if (current->WT_2_next == n) {
                current->WT_2_next = n->WT_2_next;
            }
        }
    }

    void popAllAttributes(Node *n) {
        popAttributesFromAge(n);
        popAttributesFromGrade(n);
        popAttributesFromAM_1A(n);
        popAttributesFromAM_1B(n);
        popAttributesFromCS(n);
        popAttributesFromDSA(n);
        popAttributesFromECT(n);
        popAttributesFromPhy_1A(n);
        popAttributesFromPhy_1B(n);
        popAttributesFromPM_1A(n);
        popAttributesFromPM_1B(n);
        popAttributesFromWT_1(n);
        popAttributesFromWT_2(n);
    }

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
            pushAllAttributes(n);
            nb_students++;
        }
        else if (checkIfNodeExist(n)) {
            cout << "Node already exist with this RegNo value.\n" << "Enter different RegNo value" << endl << endl;
        }
        else if (n->RegNo < top->RegNo) {
            n->next = top;
            top = n;

            cout << "Node PUSHED successfully\n" << endl;
            pushAllAttributes(n);
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
            pushAllAttributes(n);
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
            popAllAttributes(temp);
            return temp;
        }
    }

    void peek(int pos = 0) {
        // Node *temp = NULL;
        if (isEmpty()) {
            cout << "stack underflow\n" << endl;
        }
        else if (pos == 0) {
            cout << "Top of the stack is:\n";
            display_student(top);
            cout << endl;
        }
        else {
            Node *temp = top;
            if (pos > nb_students) {
                cout << "Invalid position\n" << endl;
            }
            else {    
                for (int i = 1; i <= pos; i++) {
                    temp = temp->next;
                }
                display_student(temp);
            }
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

    void displayByAttribute(int option_unit) {
        Node *temp;
        switch (option_unit) {
        case 0:
            cout << "Display by Age Function Called - " << endl;
            temp = age_top;
            while (temp != NULL) {
                cout << "(Age : " << temp->age << ")" << print_node(temp);
                if (temp->age_next != NULL) {
                    cout << " -> ";
                }
                cout << endl;
                temp = temp->age_next;
            }
            break;
        case 1:
            cout << "Display by Grade Function Called - " << endl;
            temp = grade_top;
            while (temp != NULL) {
                cout << "(Grade : " << temp->grade << ")" << print_node(temp);
                if (temp->grade_next != NULL) {
                    cout << " -> ";
                }
                cout << endl;
                temp = temp->grade_next;
            }
            break;
        case 2:
            cout << "Display by Applied Maths 1A Function Called - " << endl;
            temp = AM_1A_top;
            while (temp != NULL) {
                cout << "(Score : " << temp->AppliedMaths1A << ")" << print_node(temp);
                if (temp->AM_1A_next != NULL) {
                    cout << " -> ";
                }
                cout << endl;
                temp = temp->AM_1A_next;
            }
            break;
        case 3:
            cout << "Display by Applied Maths 1B Function Called -" << endl;
            temp = AM_1B_top;
            while (temp != NULL) {
                cout << "(Score : " << temp->AppliedMaths1B << ")" << print_node(temp);
                if (temp->AM_1B_next != NULL) {
                    cout << " -> ";
                }
                cout << endl;
                temp = temp->AM_1B_next;
            }
            break;
        case 4:
            cout << "Display by Computer Science Function Called - " << endl;
            temp = CS_top;
            while (temp != NULL) {
                cout << "(Score : " << temp->ComputerScience << ")" << print_node(temp);
                if (temp->CS_next != NULL) {
                    cout << " -> ";
                }
                cout << endl;
                temp = temp->CS_next;
            }
            break;
        case 5:
            cout << "Display by DSA Function Called - " << endl;
            temp = DSA_top;
            while (temp != NULL) {
                cout << "(Score : " << temp->DSA << ")" << print_node(temp);
                if (temp->DSA_next != NULL) {
                    cout << " -> ";
                }
                cout << endl;
                temp = temp->DSA_next;
            }
            break;
        case 6:
            cout << "Display by ECT Function Called - " << endl;
            temp = ECT_top;
            while (temp != NULL) {
                cout << "(Score : " << temp->ECT << ")" << print_node(temp);
                if (temp->ECT_next != NULL) {
                    cout << " -> ";
                }
                cout << endl;
                temp = temp->ECT_next;
            }
            break;
        case 7:
            cout << "Display by Physics 1A Function Called - " << endl;
            temp = Phy_1A_top;
            while (temp != NULL) {
                cout << "(Score : " << temp->Physics1A << ")" << print_node(temp);
                if (temp->Phy_1A_next != NULL) {
                    cout << " -> ";
                }
                cout << endl;
                temp = temp->Phy_1A_next;
            }
            break;
        case 8:
            cout << "Display by Physics 1B Function Called - " << endl;
            temp = Phy_1B_top;
            while (temp != NULL) {
                cout << "(Score : " << temp->Physics1B << ")" << print_node(temp);
                if (temp->Phy_1B_next != NULL) {
                    cout << " -> ";
                }
                cout << endl;
                temp = temp->Phy_1B_next;
            }
            break;
        case 9:
            cout << "Display by Pure Maths 1A Function Called - " << endl;
            temp = PM_1A_top;
            while (temp != NULL) {
                cout << "(Score : " << temp->PureMaths1A << ")" << print_node(temp);
                if (temp->PM_1A_next != NULL) {
                    cout << " -> ";
                }
                cout << endl;
                temp = temp->PM_1A_next;
            }
            break;
        case 10:
            cout << "Display by Pure Maths 1B Function Called - " << endl;
            temp = PM_1B_top;
            while (temp != NULL) {
                cout << "(Score : " << temp->PureMaths1B << ")" << print_node(temp);
                if (temp->PM_1B_next != NULL) {
                    cout << " -> ";
                }
                cout << endl;
                temp = temp->PM_1B_next;
            }
            break;
        case 11:
            cout << "Display by Workshop Technology 1 Function Called - " << endl;
            temp = WT_1_top;
            while (temp != NULL) {
                cout << "(Score : " << temp->WorkshopTechnology1 << ")" << print_node(temp);
                if (temp->WT_1_next != NULL) {
                    cout << " -> ";
                }
                cout << endl;
                temp = temp->WT_1_next;
            }
            break;
        case 12:
            cout << "Display by Workshop Technology 2 Function Called - " << endl;
            temp = WT_2_top;
            while (temp != NULL) {
                cout << "(Score : " << temp->WorkshopTechnology2 << ")" << print_node(temp);
                if (temp->WT_2_next != NULL) {
                    cout << " -> ";
                }
                cout << endl;
                temp = temp->WT_2_next;
            }
            break;
        
        default:
            cout << "Enter Proper Attribute " << endl;
            break;
        }
        cout << endl;
    }

    void destroy_stack() {
        while (!isEmpty()) {
            delete pop();
        }
    }

};
