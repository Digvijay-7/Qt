#include <iostream>
#include <string.h>
#include "postfix.h"
#include <stack>

using namespace std;

// Stack type
// Stack Operations
struct Stack* createStack( unsigned capacity )
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));

    if (!stack) return NULL;

    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*) malloc(stack->capacity * sizeof(int));

    if (!stack->array) return NULL;

    return stack;
}

int isEmpty(struct Stack* stack)
{
    return stack->top == -1 ;
}

char peek(struct Stack* stack)
{
    return stack->array[stack->top];
}

char pop(struct Stack* stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--] ;
    return '$';
}

void push(struct Stack* stack, char op)
{
    stack->array[++stack->top] = op;
}


// The main function that returns value of a given postfix expression
int evaluatePostfix(std::string exp)
{
    // Create a stack of capacity equal to expression size
    struct Stack* stack = createStack(exp.length());
    int i;

    // See if stack was created successfully
    if (!stack) return -1;

    // Scan all characters one by one
    for (i = 0; exp[i]; ++i)
    {
        // If the scanned character is an operand (number here),
        // push it to the stack.
        if (isdigit(exp[i]))
            push(stack, exp[i] - '0');

        // If the scanned character is an operator, pop two
        // elements from stack apply the operator
        else
        {
            int val1 = pop(stack);
            int val2 = pop(stack);
            switch (exp[i])
            {
            case '+': push(stack, val2 + val1); break;
            case '-': push(stack, val2 - val1); break;
            case '*': push(stack, val2 * val1); break;
            case '/': push(stack, val2/val1); break;
            }
        }
    }
    return pop(stack);
}

int infixToPostfix(string s)
{
    stack<char> st;
    string result;
    int length = s.length();
    for(int i = 0; i < length; ++i)
    {
        char c = s[i];
        // If the character is an operand, add it to output string.
        if(c >= '0' && c <= '9')
        {
            result += c;
        }
        //If an operator is scanned
        else
        {
            while(!st.empty() && prec(s[i]) <= prec(st.top()))
            {
                if (c == '^' && st.top() != '^')
                                    break;
                                else {
                                    result += st.top();
                                    st.pop();
                                }
            }
            st.push(c);
        }
    }
    // Pop all the remaining elements from the stack
    while(!st.empty()) {
        result += st.top();
        st.pop();
    }
    int value  = evaluatePostfix(result);
   return value;
}

int prec(char c)
{
    if (c == '^')
            return 3;
        else if (c == '/' || c == '*')
            return 2;
        else if (c == '+' || c == '-')
            return 1;
        else
            return -1;
}



