#include <iostream>
using namespace std;

int calculate(int a, int b);

int main(){
    int a, b;

    cout << "first number: " << endl;
    cin >> a;
    cout << "second number: " << endl;
    cin >> b;

    int result = calculate(a, b);

    cout << "Result is: " << result;
}

int calculate(int a, int b){
    cout << "Select Operator" << endl;
    cout << "A) Addition (+)" << endl;
    cout << "B) Subtraction (-)" << endl;
    cout << "C) Multiplication (*)" << endl;
    cout << "D) Division (/)" << endl;

    char operatorSelection;
    int result = 0;

    cin >> operatorSelection;

    switch (operatorSelection)
    {
    case 'A':
    case 'a':
        result = a + b;
        break;
    case 'B':
    case 'b':
        if(a > b){
            result = a - b;
        } else {
            result = b -a;
        }
        break;
    case 'C':
    case 'c':
        result = a * b;
        break;
    case 'D':
    case 'd':
        if(a > b){
            result = a / b;
        } else {
            result = b / a;
        }
        break;

    default:
        cout << "Select again!!!" << endl;
        break;
    }

    return result;
}
