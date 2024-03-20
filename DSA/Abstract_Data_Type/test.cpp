#include "Priority_Circular_Queue.cpp"

int main() {
    PriorityCircularQueue q1;
    q1.enqueue(34);
    q1.enqueue(2);
    q1.enqueue(567);
    q1.enqueue(3);
    q1.enqueue(28);

    q1.display();
    return 0;
}