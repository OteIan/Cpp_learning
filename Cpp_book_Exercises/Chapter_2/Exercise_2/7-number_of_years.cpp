#include <iostream>
using namespace std;

int main()
{
    int minutes, years, days;

    cout << "Enter the number of minutes: ";
    cin >> minutes;

    // one day has 1440 minutes
    int minutes_in_a_day = 1440;

    // 1 year -> 365 days -> 525,600 minutes
    int minutes_in_a_year = 525600;

    years = minutes / minutes_in_a_year;
    days = (minutes % minutes_in_a_year) / minutes_in_a_day;
    // "minutes % minutes_in a year" gives the remaining minutes that dont add up to a year

    cout << minutes << " minutes is approximately " << years << " years and " << days << " days" << endl;

    return 0;
}