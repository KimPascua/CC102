#include <iostream>
using namespace std;

int main()
{
    int i = 8;

    for (int i = 1; i <= 8; ++i) {
        for (int k = 1; k <= 8 - i; ++k) {
            cout << "  "; 
        }
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
