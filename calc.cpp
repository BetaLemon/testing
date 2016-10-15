#include <iostream>
using namespace std;

int main(){

  floor number1 = 0;
  floor number2 = 0;
  char operation = "";
  floor result = 0;
  int askNumber = 1;

  cout << "Hi! This is a calculator.";

  while(askNumber){
    cout << "Please enter a number,";
    cout << "an operator and a second number, separated with enters:\n";
    cin >> number1;
    cin >> operation;
    cin >> number2;

    if(number1 == 0 && number2 == 0){
      askNumber = 1;
    }
    else{
      askNumber = 0;
    }
  }

  switch(operation){
    case '+':
      result = number1 + number2;
      break;
    case '-':
      result = number1 - number2;
      break;
    case '*':
      result = number1 * number2;
      break;
    case '/':
      result = number1 / number2;
      break;
    default:
      cout << "Non valid operator."
      break;
  }

  cout << "The result of " << number1 << " " << operation << " " << number2 << " is: ";
  cout << result;

  return 0;
}
