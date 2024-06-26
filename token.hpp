#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>



namespace Token {
    
    enum class TokenType {
        ILLEGAL,
        EOF_, 
        // Identifiers + literals
        IDENT,  // add, foobar, x, y, ...
        INT,  // 1343456
        // Operators
        ASSIGN, 
        PLUS, 
        // Delimiters
        COMMA, 
        SEMICOLON, 
        LPAREN, 
        RPAREN, 
        LBRACE,
        RBRACE,
        // Keywords
        FUNCTION,
        LET,

        MINUS,
        BANG,
        ASTERISK,
        SLASH,
        LT,
        GT,

        TRUE,
        FALSE,
        IF,
        ELSE,
        RETURN,

        EQ,
        NOT_EQ
    };
    struct token
    {
        std::string literal;
        TokenType type;

        token& operator=(const token& other){
            if(this != &other){
                literal = other.literal;
                type = other.type;
            }
            return *this;
        }
    };
    std::string TokenToString(TokenType token);
    TokenType LookupIdent(std::string ident);
    // token NexToken(Le)
}

#endif
