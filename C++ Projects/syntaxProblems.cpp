#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   //Ask for two integers and print their sum

   int x, y;
   
   cout << "Enter two positive integers:\n";
   cin >> x;
   cin >> y;
   cout << "Now display their sum:\n";
   
   int sum = x + y;

   cout << sum;

   
   
   return 0;
}