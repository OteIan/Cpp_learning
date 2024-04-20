#include <iostream>
#include "FinishedStack.cpp"
using namespace std;

// When running this comment out the main function of SortedStack.cpp

int main() {
    Stack s1;
    
    s1.push(new Node("FEE3/2144/2023", "Ian Ote", 19, "Male", 91, 89, 90, 88, 90, 90, 89, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2158/2023", "Brian Onsombi", 20, "Male", 90, 21, 89, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2237/2023", "Eston Mboya", 23, "Male", 89, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2133/2023", "David Opembe", 18, "Male", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2126/2023", "Allan Githui", 20, "Male", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2058/2023", "Raynold Wanjala", 21, "Male", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2141/2023", "Kenny Rui", 20, "Male", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));

    s1.display();

    return 0;
}
