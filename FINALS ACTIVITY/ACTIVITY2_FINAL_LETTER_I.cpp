#include <iostream>
#include <iomanip> // For formatting output
using namespace std;

int main() {
    int arrowSize = 5;    
    int middleLines = 2;  
    int width = 11;      

    for (int i = 1; i <= arrowSize; ++i) {
        cout << setw(width);
        for (int j = 1; j <= i; ++j) {
            cout << "^";
        }
        cout << "*" << endl;
    }

    for (int i = 1; i <= middleLines; ++i) {
        cout << setw(width - arrowSize + 2); 
        cout << "##########";
        for (int j = 1; j <= arrowSize; ++j) {
            cout << "^";
        }
        cout << "*" << endl;
    }
	
    for (int i = arrowSize; i >= 1; --i) {
        cout << setw(width);
        for (int j = 1; j <= i; ++j) {
            cout << "^";
        }
        cout << "*" << endl;
    }

    return 0;
}
