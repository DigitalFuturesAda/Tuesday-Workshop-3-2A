// https://repl.it/@B3GHU8/lwoercasesiht#main.cpp

#include <iostream>
#include <algorithm>

void convertToLowerCase(std::string &str) {
    // converts string to lowercase by iterating through each char and calling tolower on it
    std::transform(str.begin(), str.end(), str.begin(),
                   [](unsigned char c){ return std::tolower(c); });
}

int main() {
  std::string input;
  std::cout << "Enter a word: ";

  getline(std::cin, input);

  std::cout << input << " converted to lowercase is: ";
  convertToLowerCase(input);

  std::cout << input << std::endl;
}
