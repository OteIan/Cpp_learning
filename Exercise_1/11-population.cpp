#include <iostream>
using namespace std;

int main(){
    long long pop = 312032486;
    long long t = 365.0 * 24.0 * 3600.0;

    long long births = t / 7.0;
    long long deaths = t / 13.0;
    long long immigration = t / 45.0;

    for (int i = 1; i <= 5; i++) {
        pop = pop + births + immigration - deaths;
        cout << "Year " << i << ": "<< pop << endl;
    }

    return 0;
}