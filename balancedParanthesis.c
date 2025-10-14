#include <stdio.h>
#include <string.h>
#define MAX 100

int top = -1;
char stack[MAX];

void push(char data) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = data;
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    top--;
}

char peek() {
    if (top == -1) {
        return '\0';
    }
    return stack[top];
}

int isEmpty() {
    return top == -1;
}

int isBalanced(char expression[]) {
    
    for(int i = 0; i < strlen(expression); i++) {
        char ch = expression[i];

        // If opening bracket → push to stack
        if(ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        } 
        // If closing bracket → check stack
        else if(ch == ')' || ch == '}' || ch == ']') {
            if(isEmpty()) {
                return 0; // Unmatched closing bracket
            }
            char topChar = peek();  // last opened bracket

            // Check matching pair
            if((ch == ')' && topChar == '(') || 
               (ch == '}' && topChar == '{') || 
               (ch == ']' && topChar == '[')) {
                pop();  // valid pair → remove it
            } else {
                return 0; // Wrong match (e.g., '{]')
            }
        }
    }
    return isEmpty(); // If stack empty → fully balanced
}


int main(){

    char expression[MAX];

    printf("Enter an expression: ");
    scanf("%s", expression);

    if(isBalanced(expression)){
        printf("The expression is balanced.\n");
    } else {
        printf("The expression is not balanced.\n");
    }

    return 0;
}