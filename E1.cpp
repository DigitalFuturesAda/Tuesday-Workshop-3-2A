// https://repl.it/@B3GHU8/3-2A-E1#main.cpp

#include <iostream>

int main() {
  std::cout << "Please enter a word: ";
  std::string input;

  getline(std::cin, input);

  std::cout << input << " spelt backwards is: ";
  for(int i = input.length()-1; i >= 0; i--){
      // Gets the length of the input and then iterates backwards
      std::cout << input.at(i);
  }

  std::cout << std::endl;
}
