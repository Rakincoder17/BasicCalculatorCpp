#include <bits/stdC++.h>
using namespace std;
int main()
{
    float a, b;
    char op;
    cout << "Enter the expression you want to evaluate: [Format: a(space)+(space)b(enter)]" << endl;
    cin >> a;
    cin >> op;
    cin >> b;

    switch (op)
    {
    case '+':
        cout << "= " << a + b << endl;
        break;
    case '-':
        cout << "= " << a - b << endl;
        break;
    case '*':
        cout << "= " << a * b << endl;
        break;
    case '/':
        cout << "= " << a / b << endl;
        break;
    default: cout<< "Please enter valid operation"<<endl;
        break;
    }
    return 0;
}