#include <iostream>

int main() { 
char operation;
double num1,num2;

std::cout<< "Enter First number:";
std::cin>> num1;
std::cout<< "Enter an operator (+,-,*,/):";
std::cin >>operation;
 std::cout <<"Enter Second number:";

 std::cin >>num2;

 switch(operation)   {
    case '+':
              std::cout<< "Result:"<< num1 + num2 <<std::endl;
               break;
              case'-':
              std::cout<< "Result:" 
              <<num1 - num2 << std::endl;
                 break;
              case'*':

              std::cout<<
               " Result:"<< num1 * num2 << std::endl;
               break;
               case '/':
               if (num2 !=0)
                 std::cout <<
                  "Result:  "<< num1 / num2 << std::endl;
                 else 
                 std :: cout<<" Error:  Division by zero!" << std::endl;
                 break;
                 default:
                 std::cout<<" Invalid operator!"<<std::endl;
                 }
                 return 0; 

              }