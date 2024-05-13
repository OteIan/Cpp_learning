#include "FinishedStack.cpp"
using namespace std;

int main() {
    Stack s1;
    int option, unit, sum = 0;
    float mean_grade = 0;
    string first_name, last_name;

    do {
        cout << "What operation do you want to perform?" << "Select Option number. \nEnter 0 to exit." << endl;
        cout << "1. Push()" << endl;
        cout << "2. Pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. peek()" << endl;
        cout << "5. count()" << endl;
        cout << "6. display()" << endl;
        cout << "7. Display by Student's attribute" << endl;
        cout << "8. Clear Screen" << endl << endl;
        cin >> option;
        Node *new_node = new Node();

        switch (option) {
        case 0:
            break;
        case 1:
            cout << "Enter RegNo of student: ";
            cin >> new_node->RegNo;
            cout << "Enter First and Last name of student: ";
            cin >> first_name;
            cin >> last_name;
            new_node->name = first_name + " " + last_name;
            cout << "Enter age of student: ";
            cin >> new_node->age;
            cout << "Enter Gender of student: ";
            cin >> new_node->gender;

            cout << "------STUDENT'S GRADES------\nEnter AppliedMaths1A marks of student: ";
            cin >> new_node->AppliedMaths1A;
            cout << "Enter Applied Maths 1B marks of student: ";
            cin >> new_node->AppliedMaths1B;
            cout << "Enter Computer Science marks of student: ";
            cin >> new_node->ComputerScience;
            cout << "Enter Data Structures & Algorithms marks of student: ";
            cin >> new_node->DSA;
            cout << "Enter Electrical Circuit Theory marks of student: ";
            cin >> new_node->ECT;
            cout << "Enter Physics 1A marks of student: ";
            cin >> new_node->Physics1A;
            cout << "Enter Physics 1B marks of student: ";
            cin >> new_node->Physics1B;
            cout << "Enter PureMaths1A marks of student: ";
            cin >> new_node->PureMaths1A;
            cout << "Enter Pure Maths 1B marks of student: ";
            cin >> new_node->PureMaths1B;
            cout << "Enter Workshop Technology 1 marks of student: ";
            cin >> new_node->WorkshopTechnology1;
            cout << "Enter Workshop Technology 2 marks of student: ";
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
                cout << "--------------------\nStack is Empty\n--------------------" << endl << endl;
            else
                cout << "--------------------\nStack is not Empty\n--------------------" << endl << endl;
            break;
        case 4:
            if (s1.isEmpty()) {
                cout << "--------------------\nStack is Empty\n--------------------" << endl;
            }
            else {
                cout << "PEEK Function Called : " << endl;
                s1.peek();
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
            cout << "Display by Attribute Function Called - " << endl;
            cout << "Choose the attribute to sort the students by: " << endl;
            cout << "0. Age" << endl;
            cout << "1. Mean Grade" << endl;
            cout << "2. Applied Maths 1A" << endl;
            cout << "3. Applied Maths 1B" << endl;
            cout << "4. Computer Science" << endl;
            cout << "5. Data Structures & Algorithms" << endl;
            cout << "6. Electrical Circuit Theory" << endl;
            cout << "7. Physics 1A" << endl;
            cout << "8. Physics 1B" << endl;
            cout << "9. Pure Maths 1A" << endl;
            cout << "10. Pure Maths 1B" << endl;
            cout << "11. Workshop Technology 1" << endl;
            cout << "12. Workshop Technology 2" << endl;

            cin >> unit;
            s1.displayByAttribute(unit);
            cout << endl;
            break;
        case 8:
            system("clear");
            break;
        default:
            cout << "Enter Proper Option number " << endl << endl;
        }
    } while (option != 0);

    s1.destroy_stack();

    return 0;
}
