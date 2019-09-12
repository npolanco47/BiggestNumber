//Nixon Polanco
#include<iostream>

int main()
{
 int first = 0;
 int second = 0;
//declare variables here

  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  std:: cin >> first;
  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
  std::cin >> second;
  //determine if first or second is bigger and store that in a third variable

  if (first > second)
  {
    std::cout<<"Of those two numbers, the biggest is: "<<first;
  //print out the variable representing the biggest number
   }
      else
    {
      std:: cout <<"Of those two numbers, the biggest is: "<<second;
    }
 
    std::cout<<std::endl<<"Thank you for playing.\n";
 
  return 0;
}
