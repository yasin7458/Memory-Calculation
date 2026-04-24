#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> model;

    double memory = 0;
    double result = 0;

    while (true)
    {
        cout << endl;
        cout << "===== MEMORY CALCULATION =====" << endl;
        cout << "1. Calculation" << endl;
        cout << "2. MS (Store in Memory)" << endl;
        cout << "3. M+ (Add to Memory)" << endl;
        cout << "4. M- (Subtract from Memory)" << endl;
        cout << "5. Display Memory" << endl;
        cout << "6. Clear Memory" << endl;
        cout << "7. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            double n1, n2;
            char op;

            cout << "Enter first number: ";
            cin >> n1;

            cout << "Enter operator (+ - * /): ";
            cin >> op;

            cout << "Enter second number: ";
            cin >> n2;

            switch (op)
            {
            case '+':
            {
                result = n1 + n2;
                break;
            }

            case '-':
            {
                result = n1 - n2;
                break;
            }

            case '*':
            {
                result = n1 * n2;
                break;
            }

            case '/':
            {
                result = n1 / n2;
                break;
            }

            default:
            {
                cout << "Invalid Operator!" << endl;
                continue;
            }
            }

            cout << "Result = " << result << endl;

            model.push_back(result);
            break;
        }

        case 2:
        {
            memory = result;
            cout << "Stored in Memory." << endl;
            break;
        }

        case 3:
        {
            memory += result;
            cout << "Added to Memory." << endl;
            break;
        }

        case 4:
        {
            memory -= result;
            cout << "Subtracted from Memory." << endl;
            break;
        }

        case 5:
        {
            cout << "Memory Value = " << memory << endl;
            break;
        }

        case 6:
        {
            memory = 0;
            cout << "Memory Cleared." << endl;
            break;
        }

        case 7:
        {
            cout << "Exiting Program..." << endl;
            break;
        }

        default:
        {
            cout << "Invalid Choice!" << endl;
        }
        }
    }

    return 0;
}