#ifndef Interpreter_LEXER_H_
#define Interpreter_LEXER_H_

#include "token.h"
#include <string>

namespace Interpreter {

class Lexer {
 public:
  void New(std::string& input);
  Token NextToken();
 private:
  void readChar();
  char peekChar();
  std::string readIdentifier();
  std::string readNumber();
  std::string readString();
  void skipWhitespace();

  std::string input;
  int position;
  int readPosition;
  char ch;
};

}  // namespace Interpreter


#endif //Interpreter_LEXER_H_
