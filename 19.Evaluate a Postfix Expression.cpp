#include <bits/stdc++.h>
using namespace std;
int evaluatePostfix(const string& expression) {
    stringstream ss(expression);
    string token;
    while (ss >> token) {
        if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-')) {
            s.push(stoi(token));
        } else {
            int operand2 = s.top(); s.pop();
            int operand1 = s.top(); s.pop();
            int result = 0;

            if (token == "+") {
                result = operand1 + operand2;
            } else if (token == "-") {
                result = operand1 - operand2;
            } else if (token == "*") {
                result = operand1 * operand2;
            } else if (token == "/") {
                result = operand1 / operand2;  
            }
            s.push(result);
        }
    }
    return s.top();
}
int main() {
    string expression1 = "2 1 + 3 *";    
    string expression2 = "4 13 5 / +";   
    string expression3 = "10 6 9 3 + -11 * / * 17 + 5 +";  
    cout << "Result 1: " << evaluatePostfix(expression1) << endl; 
    cout << "Result 2: " << evaluatePostfix(expression2) << endl; 
    cout << "Result 3: " << evaluatePostfix(expression3) << endl; 
    return 0;
}

