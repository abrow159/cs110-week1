#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int num1, num2, choice;
  float result;

  cout << "Choose 1 for addition." << endl;
  cout << "Choose 2 for subtraction." << endl;
  cout << "Choose 3 for multiplication." << endl;
  cout << "Choose 4 for division." << endl;
  cout << "Choose 5 for square root." << endl;
  cout << "Choose 6 for square." << endl;
  cout << "Choose 7 for cube root." << endl;
  cout << "Choose 8 for cube." << endl;
  cout << "Choose 9 for power." << endl;

  cin >> choice;

  if (choice == 1 || choice == 2 || choice == 3 || choice == 4 ||choice == 9) {
    cout << "Enter first number " << endl;
    cin >> num1;
    cout << "Enter second number " << endl;
    cin >> num2;
  } else {
    cout << "Enter number" << endl;
    cin >> num1;
  }
  
  switch (choice) {
    case(1):
      result = num1 + num2;
      break;
    case(2):
      result = num1 - num2;
      break;
    case(3):
      result = num1 * num2;
      break;
    case(4):
      if (num1 == 0 || num2 == 0) {
        cout << "Invalid input.";
        exit;
      } else {
        result = num1/num2;
      }
      break;
    case(5):
      result = sqrt(num1);
      break;
    case(6):
      result = pow(num1, 2);
      break;
    case(7):
      result = cbrt(num1);
      break;
    case(8):
      result = pow(num1, 3);
      break;
    case(9):
      result = pow(num1, num2);
      break;
    default: 
      cout << "Invalid choice";
  }

  cout << result;
}
