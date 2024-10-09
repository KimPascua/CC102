#include <iostream>

using namespace std;

int main()
{
	int a,b;
	
	cout << "Enter First Number: ";
	cin >> a;
	cout << "Enter the Second Number: ";
	cin >> b;
	
	cout << "Sum: " <<a << 'a' << b << '=' << a+b << endl;
	cout << "Difference: " << a << '-' << b << '=' << a-b << endl;
	cout << "Quotient: " << a <<'/' << b << '=' << a/b << endl;
	cout << "Product: " << a << '*' << b << '=' << a*b << endl;
	cout << "Reminder: " << a << '%' << b << '=' << a % b << endl;
	return 0;
}
