#include <iostream>
using namespace std;
int main() {
    int a = 20, b = 10;
    char op = '+';
    int result;
switch(op) {
        case '+':
            result = a + b;
            cout << a << " + " << b << " = " << result << endl;
            break;
        case '-':
            result = a - b;
            cout << a << " - " << b << " = " << result << endl;
            break;
        case '*':
            result = a * b;
            cout << a << " * " << b << " = " << result << endl;
            break;
        case '/':
            if (b != 0)
                result = a / b;
            cout << a << " / " << b << " = " << result << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
