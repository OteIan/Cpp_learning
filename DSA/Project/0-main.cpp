#include <iostream>
#include "FinishedStack.cpp"
using namespace std;

// When running this comment out the main function of SortedStack.cpp

int main() {
    Stack s1;
    
    // [RegNo., Name, Age, Gender, Units(Applied Maths 1A, Applied Maths 1B, Computer Science, DSA, ECT, Physics 1A, Physics 1B, Pure Maths 1A, Pure Maths 1B, Workshop Technology 1, Workshop Technology 2)]
    s1.push(new Node("FEE3/2144/2023", "Ian Ote", 19, "M", 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100));
    s1.push(new Node("FEE3/2124/2023", "Waititu John", 19, "M", 78, 92, 85, 88, 90, 76, 89, 82, 91, 87, 80));
    s1.push(new Node("FEE3/2137/2023", "Lyn Njeri", 21, "F", 85, 90, 88, 92, 90, 87, 90, 88, 90, 89, 90));
    s1.push(new Node("FEE3/2149/2023", "Daniel Bitengo", 18, "M", 85, 95, 90, 88, 92, 90, 87, 90, 88, 90, 89));
    s1.push(new Node("FEE3/2161/2023", "Mitchelle Wanja", 22, "F", 85, 95, 88, 92, 90, 87, 90, 88, 90, 89, 90));
    s1.push(new Node("FEE3/2240/2023", "Chege Gathuru", 20, "M", 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90));
    s1.push(new Node("FEE3/2254/2023", "Douglas Ouma", 21, "M", 85, 90, 95, 88, 92, 87, 96, 89, 93, 90, 91));
    s1.push(new Node("FEE3/6985/2023", "Geoffrey John", 23, "M", 85, 90, 40, 88, 92, 87, 60, 89, 70, 90, 80));
    s1.push(new Node("FEE3/2160/2023", "Nicole Gitonga", 19, "F", 85, 95, 90, 88, 92, 87, 96, 89, 93, 90, 91));
    s1.push(new Node("FEE3/2239/2023", "Franky Machani", 20, "M", 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 90));
    s1.push(new Node("FEE3/2253/2023", "Lewis Majur", 20, "M", 85, 75, 80, 90, 70, 60, 50, 40, 55, 65, 90));
    s1.push(new Node("FEE3/4468/2023", "Joseph Junior", 24, "M", 75, 88, 92, 67, 90, 82, 90, 78, 85, 95, 80));
    s1.push(new Node("FEE3/2126/2023", "Allan Githui", 19, "M", 45, 75, 85, 95, 80, 70, 100, 60, 88, 92, 40));
    s1.push(new Node("FEE3/2134/2023", "Albert Kipkorir", 22, "M", 90, 80, 70, 60, 50, 40, 50, 60, 70, 80, 90));
    s1.push(new Node("FEE3/2139/2023", "Hamida Aziz", 20, "F", 90, 85, 78, 92, 88, 95, 76, 89, 82, 91, 87));
    s1.push(new Node("FEE3/2148/2023", "Benedict Bange", 19, "M", 45, 85, 90, 70, 80, 95, 60, 75, 100, 55, 90));
    s1.push(new Node("FEE3/2162/2023", "Francis Marwa", 19, "M", 75, 88, 92, 67, 90, 82, 90, 78, 85, 95, 80));
    s1.push(new Node("FEE3/2140/2023", "Dennis Kabuga", 20, "M", 45, 67, 89, 78, 92, 56, 70, 88, 90, 100, 80));
    s1.push(new Node("FEE3/2150/2023", "Tshikutsu Shijenje", 21, "M", 75, 85, 90, 95, 80, 70, 100, 60, 88, 92, 40));
    s1.push(new Node("FEE3/2242/2023", "Brian Kipngetich", 21, "M", 45, 85, 90, 70, 80, 95, 60, 75, 90, 55, 90));
    s1.push(new Node("FEE3/2255/2023", "Joy Anyango", 19, "F", 45, 67, 89, 78, 92, 56, 70, 88, 90, 100, 80));
    s1.push(new Node("FEE3/2127/2023", "Samson Njoroge", 21, "M", 85, 90, 75, 88, 92, 87, 60, 89, 70, 90, 80));
    s1.push(new Node("FEE3/2151/2023", "Bill Joash", 20, "M", 75, 87, 92, 67, 90, 82, 90, 78, 85, 95, 80));
    s1.push(new Node("FEE3/2163/2023", "Werner Kiplimo", 21, "M", 78, 92, 85, 88, 90, 76, 89, 82, 91, 87, 88));
    s1.push(new Node("FEE3/2245/2023", "Jackson Asiligwa", 22, "M", 90, 78, 85, 92, 88, 76, 98, 82, 91, 87, 41));
    s1.push(new Node("FEE3/2256/2023", "Felexs Omondi", 18, "M", 45, 67, 89, 78, 92, 56, 70, 88, 90, 98, 80));
    s1.push(new Node("FEE3/2128/2023", "Ryan Ndungu", 22, "M", 90, 41, 98, 90, 90, 90, 90, 90, 90, 90, 90));;
    s1.push(new Node("FEE3/2141/2023", "Kenny Rui", 19, "M", 45, 67, 89, 78, 92, 56, 70, 86, 90, 98, 80));
    s1.push(new Node("FEE3/2154/2023", "Linus Kai", 21, "M", 56, 76, 89, 65, 89, 90, 70, 78, 100, 97, 90));
    s1.push(new Node("FEE3/2164/2023", "Mark Collins", 20, "M", 54, 89, 34, 87, 56, 90, 78, 98, 99, 87, 78));
    s1.push(new Node("FEE3/2246/2023", "Emmanuel Kibet", 22, "M", 65, 76, 45, 76, 90, 78, 67, 87, 61, 71, 91));
    s1.push(new Node("FEE3/2258/2023", "Sholo Musa", 19, "M", 90, 91, 71, 61, 89, 79, 90, 71, 40, 90, 80));
    s1.push(new Node("FEE3/2155/2023", "Timothy Karani", 18, "M", 89, 79, 91, 90, 78, 87, 54, 63, 90, 98, 100));
    s1.push(new Node("FEE3/2165/2023", "Emmanuel Seth", 21, "M", 98, 71, 70, 90, 67, 86, 90, 54, 87, 98, 87));
    s1.push(new Node("FEE3/2247/2023", "Richard Moriasi", 22, "M", 90, 98, 81, 87, 92, 84, 90, 40, 89, 50, 70));
    s1.push(new Node("FEE3/2259/2023", "Jemuel Odayo", 23, "M", 80, 90, 78, 89, 78, 90, 91, 75, 65, 50, 90));
    s1.push(new Node("FEE3/2130/2023", "Allan Thuku", 22, "M", 88, 59, 69, 87, 92, 90, 91, 71, 90, 73, 75));
    s1.push(new Node("FEE3/2143/2023", "Andrew Ndoo", 23, "M", 90, 50, 93, 71, 85, 75, 90, 81, 90, 100, 83));
    s1.push(new Node("FEE3/2129/2023", "John Elvis", 19, "M", 50, 91, 51, 90, 98, 81, 69, 90, 91, 71, 50));
    s1.push(new Node("FEE3/2248/2023", "Hilary Audi", 20, "M", 90, 100, 51, 90, 81, 70, 71, 50, 40, 100, 80));
    s1.push(new Node("FEE3/2260/2023", "Javan Xavier", 21, "M", 91, 70, 51, 50, 90, 100, 80, 69, 58, 71, 89));
    s1.push(new Node("FEE3/2131/2023", "Gregory Atuke", 20, "M", 90, 80, 71, 60, 90, 71, 90, 100, 91, 60, 78));
    s1.push(new Node("FEE3/2142/2023", "Allan Masibo", 20, "M", 100, 90, 86, 89, 90, 81, 71, 40, 90, 91, 81));
    s1.push(new Node("FEE3/2559/2023", "Dotty Sweetie", 21, "F", 91, 89, 81, 76, 90, 92, 90, 86, 90, 82, 76));
    s1.push(new Node("FEE3/2132/2023", "Luigi Wilkins", 19, "M", 90, 85, 40, 40, 90, 75, 89, 90, 81, 76, 67));
    s1.push(new Node("FEE3/2146/2023", "Jordana Owilla", 21, "F", 65, 70, 60, 90, 78, 90, 100, 91, 86, 89, 90));
    s1.push(new Node("FEE3/2156/2023", "Emmanuel Kipruto", 19, "M", 91, 65, 90, 54, 90, 100, 65, 96, 78, 87, 89));
    s1.push(new Node("FEE3/2230/2023", "Francis Muthoka", 22, "M", 90, 81, 76, 67, 69, 90, 89, 75, 68, 70, 86));
    s1.push(new Node("FEE3/2157/2023", "Victor Jatieno", 22, "M", 76, 89, 65, 98, 100, 65, 91, 86, 89, 90, 87));
    s1.push(new Node("FEE3/2231/2023", "Charles Ngesa", 21, "M", 90, 98, 54, 78, 89, 90, 100, 87, 59, 86, 90));
    s1.push(new Node("FEE3/2249/2023", "Marion Nafula", 20, "F", 93, 48, 75, 67, 65, 89, 90, 82, 89, 90, 81));
    s1.push(new Node("FEE3/2158/2023", "Brian Ombati", 21, "M", 89, 89, 76, 56, 78, 90, 54, 60, 58, 71, 90));
    s1.push(new Node("FEE3/2237/2023", "Emmanuel Mboya", 18, "M", 90, 64, 57, 86, 90, 73, 75, 89, 91, 75, 89));
    s1.push(new Node("FEE3/2250/2023", "Melanie Aswani", 19, "F", 76, 58, 76, 89, 81, 76, 89, 95, 76, 89, 85));
    s1.push(new Node("FEE3/2805/2023", "Roy Kiptoo", 21, "M", 90, 89, 65, 74, 86, 89, 90, 81, 57, 68, 90));
    s1.push(new Node("FEE3/2133/2023", "David Opembe", 22, "M", 76, 57, 89, 90, 81, 76, 89, 94, 76, 89, 85));
    s1.push(new Node("FEE3/2147/2023", "Vivian Karani", 20, "F", 89, 67, 76, 58, 89, 90, 74, 90, 100, 85, 51));
    s1.push(new Node("FEE3/2159/2023", "Brian Alfred", 21, "M", 76, 67, 89, 87, 90, 75, 64, 75, 68, 89, 91));
    s1.push(new Node("FEE3/2238/2023", "Mercy Murimi", 19, "F", 90, 76, 89, 76, 54, 67, 75, 89, 81, 65, 81));
    s1.push(new Node("FEE3/2252/2023", "Philip Otieno", 19, "M", 87, 89, 89, 75, 60, 91, 90, 100, 98, 76, 89));
    s1.push(new Node("FEE3/2989/2023", "Mark Bunyali", 20, "M", 90, 100, 78, 73, 75, 78, 90, 71, 38, 92, 83));


    s1.push(new Node("F17/2250/2021", "Danson Mwakio", 22, "M", 67, 89, 65, 78, 63, 57, 68, 76, 89, 90, 52));
    s1.push(new Node("F17/144557/2022", "Wilfred Maina", 21, "M", 89, 68, 89, 89, 42, 89, 78, 90, 81, 76, 89));
    s1.push(new Node("F17/2058/2020", "Raynold Wanjala", 20, "M", 90, 78, 68, 96, 78, 98, 70, 86, 89, 83, 89));
    s1.push(new Node("FEE3/146266/2023", "Angelou Mafabi", 19, "M", 89, 67, 89, 75, 84, 86, 78, 51, 89, 89, 82));
    s1.push(new Node("FEE3/146225/2023", "Ayuong Ayuel", 19, "M", 90, 75, 78, 89, 73, 58, 72, 90, 74, 100, 98));
    s1.push(new Node("FEE3/147364/2023", "Rodney Nsereko", 19, "M", 83, 47, 58, 85, 90, 83, 49, 90, 100, 83, 92));
    s1.push(new Node("FEE3/146408/2023", "Melissa Kinda", 21, "F", 84, 58, 78, 62, 78, 89, 42, 90, 100, 83, 91));
    s1.push(new Node("FEE3/145862/2023", "Marvin Bahuya", 20, "M", 90, 41, 90, 90, 74, 59, 90, 48, 90, 89, 83));
    s1.push(new Node("FEE3/145849/2023", "Emmanuel Gisairo", 22, "M", 75, 78, 96, 57, 86, 90, 84, 57, 65, 89, 74));
    s1.push(new Node("FEE3/145838/2023", "Ian Gitonga", 22, "M", 85, 67, 89, 86, 75, 68, 74, 59, 90, 84, 65));
    s1.push(new Node("FEE3/147067/2023", "Gregory Koech", 21, "M", 65, 67, 89, 89, 84, 58, 73, 90, 92, 85, 85));
    s1.push(new Node("FEE3/146850/2023", "Joshua Luchiri", 20, "M", 76, 89, 53, 89, 89, 94, 90, 85, 89, 90, 90));
    s1.push(new Node("FEE3/147181/2023", "Mitch Tindivale", 19, "M", 76, 78, 85, 90, 84, 89, 89, 48, 90, 89, 83));
    s1.push(new Node("FEE3/146124/2023", "Ismael Namatsi", 23, "M", 75, 85, 89, 76, 85, 90, 89, 57, 89, 51, 89));
    s1.push(new Node("FEE3/145919/2023", "Brian Mutai", 19, "M", 58, 68, 89, 86, 78, 45, 89, 78, 90, 86, 90));
    s1.push(new Node("FEE3/147166/2023", "Issak Yassir", 19, "M", 86, 78, 86, 89, 46, 86, 78, 90, 43, 76, 68));
    s1.push(new Node("FEE3/145981/2023", "Laviticus Magu", 22, "M", 90, 67, 89, 58, 89, 83, 90, 75, 68, 85, 89));
    s1.push(new Node("FEE3/146715/2023", "Egan Mureithi", 21, "M", 85, 68, 86, 57, 90, 69, 83, 75, 68, 45, 75));
    s1.push(new Node("FEE3/147243/2023", "Alvin Muita", 20, "M", 96, 78, 46, 89, 90, 58, 45, 90, 84, 90, 98));

    // cout << s1.count() << endl;
    s1.display();
    s1.peek();
    s1.peek(43);
    // s1.displayByAttribute(0);
    // s1.displayByAttribute(1);
    // s1.displayByAttribute(2);
    // s1.displayByAttribute(3);
    // s1.displayByAttribute(4);
    // s1.displayByAttribute(5);
    // s1.displayByAttribute(6);
    // s1.displayByAttribute(7);
    // s1.displayByAttribute(8);
    // s1.displayByAttribute(9);
    // s1.displayByAttribute(10);
    // s1.displayByAttribute(11);
    // s1.displayByAttribute(12);
    // s1.displayByAttribute(13);


    s1.destroy_stack();
    cout << "DONE" << endl;

    return 0;
}
