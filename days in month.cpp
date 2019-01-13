#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    int month_nr, year;

    cout << "Enter the number of the month:" << endl;

    if (!(cin >> month_nr))  {
        cerr << "It's not a number!";
        exit(0);
    }

    switch(month_nr) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:    cout << "This month has 31 days!";
        break;
    case 4:
    case 6:
    case 9:
    case 11:    cout << "This month has 30 days!";
        break;
    case 2: {

        cout << "Enter the year : ";
        cin >> year;

        if ((( year % 4==0 ) && ( year % 100!=0 )) || ( year % 400==0 )) {
            cout << "This month has 29 days!";
        }

        else {
            cout << "This month has 28 days!";
        }
            }
        break;
        default:    cout << "Incorrect month number";
                    }
    return 0;
}
