//Author: Noah Huff

#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
  int number1;

  int number2;
   
  cout<<"Please enter a whole number:\n";
  
  std::cin >> number1;

  cout<<"Please enter another whole number:\n";

  std::cin >> number2;

  cout<<"Of those two numbers, the biggest is: ";
  
  if ( number1 > number2 ) {

    std::cout << number1 << std::endl;

  } else {

    std::cout << number2;

  }

  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
