#include <iostream>
using namespace std;

int main() {
    char symbol = '^'; 
    int repeat = 11;   
    int loops = 5;     

    for (int i = 1; i <= loops; ++i) { 
        if (i % 2 == 0) { 
            cout << " ";
        }

        for (int j = 1; j <= repeat; ++j) { 
            cout << symbol << " ";
        }
        cout << endl;
    }

    return 0;
}
