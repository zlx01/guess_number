#include <iostream>
#include <random>

using namespace std;

int main()
{
    default_random_engine e;
    int secretNumber = e() % 100 + 1;
    int number = -1;
    while (1)
    {
        cout << "Guess a number: ";
        cin >> number;
        if (number == secretNumber)
        {
            cout << "Congratulations!" << endl;
            break;
        }
        else if (number < secretNumber)
        {
            cout << "Too small!" << endl;
        }
        else
        {
            cout << "Too big!" << endl;
        }
    }
    return 0;
}