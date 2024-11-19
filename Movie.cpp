#include <iostream>
using namespace std;

int main() 
{
    int age, withParent;
    double money;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Are you with a parent? (1 for yes, 0 for no): ";
    cin >> withParent;
    cout << "Enter your money: ";
    cin >> money;

    if (age < 13)
        cout << (withParent ? "You can watch G and PG movies.\n" : "You can watch G movies.\n");
    else if (age < 16)
        cout << "You can watch G and PG movies.\n";
    else
        cout << "You can watch G, PG, and R movies.\n";

    cout << (money <= 7.50 ? "You can watch a matinee.\n" : "You can watch an evening show.\n");
    return 0;
}
