#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string expression;

    while (getline(cin, expression)) {
        char c;
        stack<char> pilha;
        int correct = 1;

        for (char c : expression) {
            if (c == '(') pilha.push(c);
            else if (c == ')') {
                if (!pilha.empty() && pilha.top() == '(') pilha.pop();
                else {
                    correct = 0;
                    break;
                }
            }
        }

        if (pilha.empty() && correct) cout << "correct" << endl;
        else cout << "incorrect" << endl;
    }

    return 0;
}