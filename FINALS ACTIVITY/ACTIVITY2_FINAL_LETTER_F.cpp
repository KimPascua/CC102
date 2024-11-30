#include <iostream>
using namespace std;

int main() {
    int rows = 10; 
    int cols = 10;  
    
    for (int i = 1; i <= rows; ++i) {
        
        for (int j = 1; j <= cols; ++j) {
            if (j == i) { 
                cout << " "; 
            } else {
                cout << "#";
            }
        }
        cout << endl; 
    }

    return 0;
}
