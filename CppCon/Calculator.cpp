#include <iostream>

class Calculator {

    public:
    int Calculate(int, int, char);

};

using namespace std;

int main() {
    int x, y, result;
    char oper;
    cout << "Hello, I'm an improved Calculator!" << endl;
    cout << "Please enter num1 oper num2: " << endl;
    cin >> x >> oper >> y;
    Calculator c;
    result = c.Calculate(x, y, oper);
    cout << "Result is " << result << endl;
    cout << "Press any key ...";

    cin.ignore();
    cin.get();
    return 0;

}

int Calculator::Calculate(int x, int y, char oper) {
    switch(oper) {
        case '+': return x + y;
        case '-': return x - y;
        case '*': return x * y;
        case '/': return x / y;
        default:
            return 0;
    }
}