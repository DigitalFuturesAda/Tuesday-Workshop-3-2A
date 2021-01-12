// https://repl.it/@B3GHU8/3-2A-E1-1#main.cpp

#include <iostream>
#include <algorithm>

// reversed a word by creating a for loop and then starting from the length
// of the string and moving backwards
std::string reverseString(std::string str) { 
  std::string reversedString;
  for (int i = str.length()-1; i >= 0; i--) {
    reversedString += str[i];
  }
  return reversedString;
}

void convertToLowerCase(std::string &str) {
    // converts string to lowercase by iterating through each char and calling tolower on it
    std::transform(str.begin(), str.end(), str.begin(),
                   [](unsigned char c){ return std::tolower(c); });
}

int main() {
  std::string input;
  std::cout << "Enter a word: ";

  getline(std::cin, input);

  convertToLowerCase(input);
  std::string reversed = reverseString(input);

  std::cout << (reversed == input 
    ? "Yes, '" + input + "' is a palindrome"
    : "No, '" + input + "' is not a palindrome")
    << std::endl;

  main();
}
