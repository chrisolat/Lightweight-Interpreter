#include <iostream>
#include <string>
#include "./lexer.h"
#include "./parser.h"
#include "./evaluator.h"
#include "./environment.h"

void eval() {
  const std::string PROMPT = ">> ";
  Interpreter::Lexer l;
  Interpreter::Parser p;
  Interpreter::Evaluator e;
  Interpreter::Environment* env = new Interpreter::Environment();
  while(true) {
    std::string line;
    std::cout << PROMPT;
    std::getline(std::cin, line);
    l.New(line);
    p.New(l);
    Interpreter::Program* program = p.ParseProgram();
    if (p.Errors().size()) {
      for (auto error : p.Errors()) {
        std::cout << error << std::endl;
      }
      continue;
    }
    Interpreter::Object* o = e.Eval(program, env);
    std::cout << "type: " << o->Type() << std::endl;
    std::cout << o->Inspect() << std::endl;
  }
}

int main() {
  eval();
  return 0;
}