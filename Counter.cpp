#include <iostream>
using namespace std;

int main()
{
    // Counts how many digits are in a number
    int number;
    cout << "Number: ";
    cin >> number;

    if (number == 0)
        cout << "You have entered 0.\n";
        else {
        if (number < 0)
            number = -1 * number;

        int counter = 0;
        while (number > 0)
        {
            // number = number / 10;  * This takes away 1 digit
            number /= 10; // * This also takes away 1 digit, just easier
            counter++;
        }
        cout << "Number containts " << counter << " digits\n";
    }

    system("pause>0");
}

