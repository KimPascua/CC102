#include <iostream>

using namespace std;

int main()
{
	
	int i = 8;
	
	for (int i=1; i<=8; ++i) {
		for (int j=i; j>=1; --j) {
			cout << j << " " ;
		}
		cout << endl;
	}
	return 0;
}