#include <iostream>
#include "recursion.h"

int main() {

//--------Task A: Print all numbers in range--------//
  std::cout << "--------Task A: Print all numbers in range--------" << std::endl;
  int first = 28;
  int second = 44;

  std::cout << "Range of " << first << " to " << second << ":\n " << std::endl;
  std::cout << printRange(first, second) << std::endl;


//--------Task B: Sum of numbers in range--------//
  std::cout << "\n--------Task B: Sum of numbers in range--------" << std::endl;
  first = 1;
  second = 3;
  std::cout << "Sum of the range of " << first << " and " << second << ": " << std::endl;
  std::cout << sumRange(first, second) << std::endl;

  first = -2;
  second = 10;
  std::cout << "\nSum of the range of " << first << " and " << second << ": " << std::endl;
  std::cout << sumRange(first, second) << std::endl;


//--------Task C: Sum of elements in array--------//
  std::cout << "\n--------Task C: Sum of elements in array--------" << std::endl;
  int *arr = new int[second]; // allocate array dynamically

  arr[0] = 12;
  arr[1] = 17;
  arr[2] = -5;
  arr[3] = 3;
  arr[4] = 7;
  arr[5] = -15;
  arr[6] = 27;
  arr[7] = 5;
  arr[8] = 13;
  arr[9] = -21;

  int sum1 = sumArray(arr, second); // Add all elements
  std::cout << "Sum of array w/ elements {";

  for(int i = 0; i < second; i++) {
    std::cout << arr[i] << " ";
  }

  std::cout << "} is:\n" << sum1 << std::endl;

  delete[] arr; // deallocate it
  arr = nullptr;


//--------Task D: Is string alphanumeric?--------//
  std::cout << "\n--------Task D: Is string alphanumeric?--------" << std::endl;
  std::string stringTrue = "Abcd1234xyz";
  std::string stringFalse = "KLMN 8-7-6";

  std::cout << "Alphanumeric???\n" << std::endl;
  std::cout << stringTrue << ": " << std::endl;
  std::cout << isAlphanumeric(stringTrue) << std::endl;
  std::cout << "\n" << stringFalse << ": " << std::endl;
  std::cout << isAlphanumeric(stringFalse) << std::endl;


//--------Task E(Bonus): Nested parenthesis--------//
  std::cout << "\n--------Task E(Bonus): Nested parenthesis--------" << std::endl;
  std::cout << "Nesting??\n" << std::endl;

  std::string correct_nest = "((()))";
  std::string not_debugged = "())";
  std::string empty = "";

  std::cout << correct_nest << ": " << std::endl;
  std::cout << nestedParens(correct_nest) << std::endl;

  std::cout << "\n" << not_debugged << ": " << std::endl;
  std::cout << nestedParens(not_debugged) << std::endl;

  std::cout << "\n" << empty << ": " << std::endl;
  std::cout << nestedParens(empty) << std::endl;
  
  return 0;
}