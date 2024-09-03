# A Lightweight Interpreter written in C++
## Usage
```bash
> g++ -std=c++11 main.cpp ast.cpp evaluator.cpp lexer.cpp object.cpp parser.cpp token.cpp -o out --debug
> ./out test.mk
hello world!
minimal prime factor for 1321231 is 487 

return: 
type:  NULL
value: NULL
```
The `test.mk` is function to get minimal prime factor.

And `repl.cpp` is the REPL(Read-Eval-Print Loop) main function. You can as well use `rppl.cpp` or `rlpl.cpp`.

```bash
> g++ -std=c++11 repl.cpp ast.cpp evaluator.cpp lexer.cpp object.cpp parser.cpp token.cpp -o out --debug
> ./out
>> print("hello")
hello 
type: NULL
NULL
```
