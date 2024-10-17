#include <iostream>

using namespace std;

int main()
{
 
   float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD; 
   float sugarQty, riceQty, sardinesQty, coffeeQty,  milkQty;
   float usdtophp,poundtophp;
   float total_cost, total_costtoPHP;
   
   cout << "SEVENPM Sari-Sari Store Point of Sale System" << endl;
   cout << "************************************************************************************" <<endl;
   cout << "Enter the Quantity of Sugar: ";
   cin >> sugarPriceUSD; 
   cout << "Enter the Quantity of Rice: ";
   cin >> ricePricePound;
   cout << "Enter the Quantity of Sardines: ";
   cin >> sardinesPricePound;
   cout << "Enter the Quantity of Coffee: ";
   cin >> coffeePriceUSD;
   cout << "Enter the Quantity of Milk: ";
   cin >> milkPriceUSD;
   cout << "************************************************************************************" <<endl;
   cout << "Enter Price of Sugar: ";
   cin>> sugarQty;
   cout << "Enter Price of Rice: ";
   cin >> riceQty;
   cout << "Enter Price of Sardines: ";
   cin >> sardinesQty;
   cout << "Enter Price of Coffee: ";
   cin >> coffeeQty;
   cout << "Enter Price of Milk: ";
   cin >> milkQty;
   cout << "************************************************************************************" <<endl;
   float total_cost = (sugarPriceUSD) *(sugarQty)+ (ricePricePound)*(riceQty)+(sardinesPricePound)*(sardinesQty)+(coffeePriceUSD)*(coffeeQty)+(milkPriceUSD)*(milkQty);
   
   cout<< "Total_cost in PHP: " <<Total_cost <<endl;
   return 0;
   
} 
