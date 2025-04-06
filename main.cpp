#include <iostream>

extern int yyparse();

int main() {
    std::cout << "VISHNU X = 5; and get the factorial of the number:\n";
    yyparse();
    return 0;
}
