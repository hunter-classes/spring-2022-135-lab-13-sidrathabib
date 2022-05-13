#include "recursion.h"
#include <ctype.h>
#include <iostream>
#include <stdio.h>
#include <string>

//no loops, global, or static var

//--------Task A: Print all numbers in range--------//
    std::string printRange(int left, int right) { //prints all # left to right
    if (left <= right) {
        return std::to_string(left) + " " + printRange(left + 1, right);
    }
    return "";
    }

//--------Task B: Sum of numbers in range--------//
    int sumRange(int left, int right) { //computes the sum of all # in range
    int sum = 0;
    if (right < left) {
        return sum;
    } else {
        return sum + left + sumRange(left + 1, right);
    }
    }

//--------Task C: Sum of elements in array--------//
    int sumArray(int *arr, int size) { //recieves array + size -> return sum 
    int sum = 0;
    if (size > 0) {
        return sum + *arr + sumArray(arr + 1, size - 1);
    } else {
        return sum;
    }
    }

//--------Task D: Is string alphanumeric?--------//
    bool isAlphanumeric(std::string s) { //returns true if all char in string are letters/digits, otherwise false
    if (s.length() > 1) {
        if (std::isalnum(s[0])) {
        return isAlphanumeric(s.substr(1, s.length() - 1));
        } else {
        return false;
        }
    } else if (s.length() == 1) {

        if (std::isalnum(s[0])) {
        return true;
        } else {
        return false;
        }
    } else {
        return false;
    }
    }

//--------Task E(Bonus): Nested parenthesis--------//
    bool nestedParens(std::string s) { //returns true if string is seq of nested parenthesis
    if (s == "") {
        return true;
    } else if (s[0] == '(' && s[s.length() - 1] == ')') {
        return nestedParens(s.substr(1, s.length() - 2));
    } else {
        return false;
    }
    }