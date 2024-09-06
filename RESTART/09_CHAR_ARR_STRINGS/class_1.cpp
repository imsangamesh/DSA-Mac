//?
//* -------------------------------------------
#include <string.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
//* -------------------------------------------

int main() {
  //! FUNDAMENTALS of STRING
  // cout << endl;
  // char name[0];

  // cin.getline(name, 50);
  // cout << "\nYour name is: " << name;

  // cout << endl << endl;

  //! LENGTH
  // char name[0];
  // cout << "Enter your name: ";
  // cin.getline(name, 50);

  // int length = 0;
  // for (int i = 0; name[i] != '\0'; i++) {
  //   length++;
  // }

  // cout << name << " Length is: " << strlen(name);
  // cout << "\nSize of char array: " << sizeof(name);

  //! REVERSE
  // char name[20] = "Pinkkinlin";
  // int n = strlen(name);
  // int i = 0, j = n - 1;

  // while (i <= j) {
  //   swap(name[i], name[j]);
  //   i++, j--;
  // }

  // cout << name;

  //! PALINDROME
  // char name[8] = "raccar";
  // bool isPalindrome = true;

  // int n = strlen(name);
  // for (int i = 0; i < n / 2; i++) {
  //   if (name[i] != name[n - i - 1]) {
  //     isPalindrome = false;
  //     break;
  //   }
  // }

  // cout << name << " is Palindrome: " << isPalindrome;

  //! Convert to UPPER CASE
  //* LOWER_CASE - 32 = UPPER_CASE
  // char pink[100] = "Pinkkinlin";

  // for (int i = 0; pink[i] != '\0'; i++) {
  //   if (pink[i] > 'Z') {
  //     pink[i] = pink[i] - 32;
  //   }
  // }

  // cout << pink;

  //!
  //! STRINGS
  //!
  // string str;
  // cout << "Enter name: ";
  // getline(cin, str);
  // cout << str;

  // char str1[5];
  // string str2;

  // str1[0] = 'p', str2[0] = 'p';
  // str1[1] = 'i', str2[1] = 'i';
  // str1[2] = '\0', str2[2] = '\0';
  // str1[3] = 'n', str2[3] = 'n';
  // str1[4] = 'k', str2[4] = 'k';

  // cout << endl << "str1: " << str1 << '\n';
  // cout << "str2: " << str2;

  //! STRING Built-in FUNCTIONS
  string a = "hello";
  string b = "there";

  cout << a.substr(0, 2) << endl;  //*

  cout << a.compare(b) << endl;  //*

  cout << a.find("ll") << endl;  //*

  cout << a.find("lll") << endl;

  a = "this is a test string";
  cout << a.replace(10, 4, "awesome") << endl;  //*

  a.erase(10, 8);  //*
  cout << a;
  // cout << string::npos;
}