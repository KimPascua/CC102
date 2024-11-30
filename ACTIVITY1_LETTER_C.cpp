#include <iostream> 
using namespace std; 

int main() 
{ 
	int x = 8;
    
    for (int i = x; i >= 1; i--) {
        for (int k = 1; k <= x - i; k++) {
            cout << "  "; 
        }
        
        for (int j = 1; j <= i; j++) {
            cout << "# ";
        }
        cout << endl;
    }
    
	return 0;
}
