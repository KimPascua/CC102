#include <iostream>

using namespace std;

int main()
{
    int choice;
    cout << "What is the temperature?";
    cin >> choice;
	
	if (choice <= 32 ) {
		cout << "Bring the heavy jacket.";
		}

      else if (choice >= 32 & choice >= 50) {
		  cout << "Bring light jacket.";	  
	  }  
     
        else {
		 cout << "No jacket needed.";
	}

return 0;
}
