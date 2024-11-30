#include <iostream>
using namespace std;

int main()
{
    int rows = 8; 

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= 8; ++j) {
            if (j % 2 == 1) { 
                cout <<"#";
            } else { 
                cout << "*";
            }
        }
        cout << endl; 
    }

    return 0;
}
