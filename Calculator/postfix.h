#ifndef POSTFIX_H
#define POSTFIX_H
#include <string>

struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};

struct Stack* createStack( unsigned capacity );
int isEmpty(struct Stack* stack);
char peek(struct Stack* stack);
char pop(struct Stack* stack);
void push(struct Stack* , char);
int evaluatePostfix(std::string);
int prec(char );
std::string infixToPostfix(std::string );
int Operation(std::string);
#endif // POSTFIX_H
