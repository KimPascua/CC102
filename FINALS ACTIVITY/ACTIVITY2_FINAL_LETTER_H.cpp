#include <iostream>
using namespace std;

int main() {
    int size = 7;

    cout << "^" << endl;

    for (int i = 2; i <= size; ++i) {
        cout << "#";
        for (int j = 1; j <= 2 * i - 3; ++j) {
            cout << "#";
        }
        cout << "^" << endl;
    }

    for (int i = size - 1; i >= 1; --i) {
        cout << "#";
        for (int j = 1; j <= 2 * i - 3; ++j) {
            cout << "#";
        }
        cout << "^" << endl;
    }

    cout << "^" << endl;  // Add flush to ensure this is shown immediately
    cout.flush();

    return 0;
}
