#include "SortedStack_with_BinarySearch.cpp"
using namespace std;

// When running this comment out the main function of SortedStack.cpp

int main() {
    Stack s1;
    
    s1.push(new Node("FEE3/2144/2023", "Ian Ote"));
    s1.push(new Node("FEE3/2158/2023", "Brian Onsombi"));
    s1.push(new Node("FEE3/2237/2023", "Eston Mboya"));
    s1.push(new Node("FEE3/2133/2023", "David Opembe"));
    s1.push(new Node("FEE3/2126/2023", "Allan Githui"));
    s1.push(new Node("FEE3/2058/2023", "Raynold Wanjala"));
    s1.push(new Node("FEE3/2141/2023", "Kenny Rui"));

    s1.display();

    return 0;
}
