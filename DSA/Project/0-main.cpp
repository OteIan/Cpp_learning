#include <iostream>
#include "FinishedStack.cpp"
using namespace std;

// When running this comment out the main function of SortedStack.cpp

int main() {
    Stack s1;
    
    // [RegNo., Name, Age, Gender, Units(Applied Maths 1A, Applied Maths 1B, Computer Science, DSA, ECT, Physics 1A, Physics 1B, Pure Maths 1A, Pure Maths 1B, Workshop Technology 1, Workshop Technology 2)]
    s1.push(new Node("FEE3/2144/2023", "Ian Ote", 19, "Male", 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100));
    s1.push(new Node("FEE3/2124/2023", "Waititu John", 19, "M", 78, 92, 85, 88, 90, 76, 89, 82, 91, 87, 88));
    s1.push(new Node("FEE3/2137/2023", "Lyn Njeri", 20, "Female", 85, 90, 88, 92, 90, 87, 90, 88, 90, 89, 90));
    s1.push(new Node("FEE3/2149/2023", "Daniel Bitengo", 20, "Male", 85, 95, 90, 88, 92, 90, 87, 90, 88, 90, 89));
    s1.push(new Node("FEE3/2161/2023", "Mitchelle Wanja", 20, "F", 85, 95, 88, 92, 90, 87, 90, 88, 90, 89, 90));
    s1.push(new Node("FEE3/2240/2023", "Chege Gathuru", 20, "M", 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90));
    s1.push(new Node("FEE3/2254/2023", "Douglas Ouma", 20, "M", 85, 90, 95, 88, 92, 87, 96, 89, 93, 90, 91));
    s1.push(new Node("FEE3/6985/2023", "Geoffrey John", 20, "M", 85, 90, 40, 88, 92, 87, 60, 89, 70, 90, 80));
    s1.push(new Node("FEE3/2160/2023", "Nicole Gitonga", 20, "F", 85, 95, 90, 88, 92, 87, 96, 89, 93, 90, 91));
    s1.push(new Node("FEE3/2239/2023", "Franky Machani", 20, "M", 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 90));
    s1.push(new Node("FEE3/2253/2023", "Lewis Majur", 20, "M", 85, 75, 80, 90, 70, 60, 50, 40, 55, 65, 90));
    s1.push(new Node("FEE3/4468/2023", "Joseph Junior", 20, "M", 75, 88, 92, 67, 90, 82, 90, 78, 85, 95, 80));
    s1.push(new Node("FEE3/2126/2023", "Allan Githui", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2134/2023", "Albert Kipkorir", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2139/2023", "Hamida Aziz", 20, "F", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2148/2023", "Benedict Bange", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2162/2023", "Francis Marwa", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2140/2023", "Dennis Kabuga", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2150/2023", "Tshikutsu Shijenje", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2242/2023", "Brian Kipngetich", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2255/2023", "Joy Anyango", 20, "F", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2127/2023", "Samson Njoroge", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2151/2023", "Bill Joash", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2163/2023", "Werner Kiplimo", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2245/2023", "Jackson Asiligwa", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2256/2023", "Felexs Omondi", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2128/2023", "Ryan Ndungu", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2141/2023", "Kenny Rui", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2154/2023", "Linus Kai", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2164/2023", "Mark Collins", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2246/2023", "Emmanuel Kibet", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2258/2023", "Sholo Musa", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2155/2023", "Timothy Karani", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2165/2023", "Emmanuel Seth", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2247/2023", "Richard Moriasi", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2259/2023", "Jemuel Odayo", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2130/2023", "Allan Thuku", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2143/2023", "Andrew Ndoo", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2129/2023", "John Elvis", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2248/2023", "Hilary Audi", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2260/2023", "Javan Xavier", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2131/2023", "Gregory Atuke", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2142/2023", "Allan Masibo", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2559/2023", "Dotty Sweetie", 20, "F", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2132/2023", "Luigi Wilkins", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2146/2023", "Jordana Owilla", 20, "F", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2156/2023", "Emmanuel Kipruto", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2230/2023", "Francis Muthoka", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2157/2023", "Victor Jatieno", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2231/2023", "Charles Ngesa", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2249/2023", "Marion Nafula", 20, "F", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2158/2023", "Brian Ombati", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2237/2023", "Emmanuel Mboya", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2250/2023", "Melanie Aswani", 20, "F", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2805/2023", "Roy Kiptoo", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2133/2023", "David Opembe", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2147/2023", "Vivian Karani", 20, "F", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2159/2023", "Brian Alfred", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2238/2023", "Mercy Murimi", 20, "F", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2252/2023", "Philip Otieno", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/2989/2023", "Mark Bunyali", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));


    s1.push(new Node("F17/2250/2021", "Danson Mwakio", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("F17/144557/2022", "Wilfred Maina", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("F17/2058/2020", "Raynold Wanjala", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/146266/2023", "Angelou Mafabi", 20, "Male", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/146225/2023", "Ayuong Ayuel", 20, "Male", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/147364/2023", "Rodney Nsereko", 20, "Male", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/146408/2023", "Melissa Kinda", 20, "F", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/145862/2023", "Marvin Bahuya", 20, "Male", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/145849/2023", "Emmanuel Gisairo", 20, "Male", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/145838/2023", "Ian Gitonga", 20, "Male", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/147067/2023", "Gregory Koech", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/146850/2023", "Joshua Luchiri", 20, "Male", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/147181/2023", "Mitch Tindivale", 20, "Male", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/146124/2023", "Ismael Namatsi", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/145919/2023", "Brian Mutai", 20, "Male", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/147166/2023", "Issak Yassir", 20, "Male", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/145981/2023", "Laviticus Magu", 20, "Male", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/146715/2023", "Egan Mureithi", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));
    s1.push(new Node("FEE3/147243/2023", "Alvin Muita", 20, "M", 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90));


    s1.display();

    while (s1.top != NULL) {
        s1.pop();
    }
    cout << "DONE" << endl;

    return 0;
}
