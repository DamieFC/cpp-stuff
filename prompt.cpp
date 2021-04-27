#include <string>
#include <iostream>

int main(){
  std::string input;
  std::cout << ">";
  std::cin >> input;
  if (input == "hello"){
    std::cout << "Hello!";
  }
  else{
    std::cout << "What?";
  }
}
