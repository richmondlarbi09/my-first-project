#include <iostream> 
using namespace std;

int main() {
    double number1, number2;
    char op;

    cout << "Enter: number op number (e.g 5 + 6): ";
cin >> number1 >> op >> number2 ;

if (op == '+') cout << "Result: " << number1 + number2;
else if (op == '-') cout << "Result: " << number1 - number2;
else if (op == '*') cout << "Result: " << number1 * number2;
else if (op == '/' && number2 != 0) cout << "Result: " << number1 / number2;
else cout << "invalid input!";

cout << endl;
return 0;
}
