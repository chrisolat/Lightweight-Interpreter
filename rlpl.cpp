#include <iostream>
#include <string>
#include "./lexer.h"

void sh() {
  const std::string PROMPT = ">> ";
  Interpreter::Lexer l;
  while(true) {
    std::string line;
    std::cout << PROMPT;
    std::getline(std::cin, line);
    l.New(line);
    Interpreter::Token t = l.NextToken();
    while(t.type != Interpreter::END) {
      std::cout << "Type: " << t.type << ", Literal: " << t.literal << std::endl;
      t = l.NextToken();
    }
  }
}

int main() {
  sh();
  return 0;
}