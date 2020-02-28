# include <iostream>

using namespace std;

int main()

{
    char op;
    float firstNum, secondNum;
    
    cout << "Enter operator either + or - or * or /: ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> firstNum >> secondNum;
    
    switch(op)
    { 
    //Calculates addition 
    case '+':
        cout << firstNum << "+" << secondNum << "=" << firstNum + secondNum;
        break;
    //Calculates subtraction
    case '-':
        cout << firstNum << "-" << secondNum << "=" << firstNum - secondNum;
        break;
    //Calculate multiplication
    case '*':
        cout << firstNum << "*" << secondNum << "=" << firstNum * secondNum;
        break;
    // Calculates division
    case '/':
        cout << firstNum << "/" << secondNum << "=" << firstNum / secondNum;
        break;
        
    }
    return 0;
}
