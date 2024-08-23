#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <time.h>
#include <string.h>
using namespace std;

using namespace std;

double convert_dollar_to_rubles(double dollar) {
    double rubles = dollar * 91.6;
    return rubles;
}

double convert_rubles_to_dollar(double rubles) {
    double dollar = rubles * 0.01;
    return dollar;
}

double convert_pound_to_rubles(double pound) {
    double rubles = pound * 120.03;
    return rubles;
}

double convert_rubles_to_pound(double rubles) {
    double pound = rubles * 0.008;
    return pound;
}

double convert_euro_to_rubles(double euro) {
    double rubles = euro * 101.61;
    return rubles;
}

double convert_rubles_to_euro(double rubles) {
    double euro = rubles * 0.009;
    return euro;
}

double convert_dollar_to_pound(double dollar) {
    double pound = dollar * 0.75;
    return pound;
}

double convert_pound_to_dollar(double pound) {
    double dollar = pound * 1.32;
    return dollar;
}

double convert_dollar_to_euro(double dollar) {
    double euro = dollar * 0.89;
    return euro;
}

double convert_euro_to_dollar(double euro) {
    double dollar = euro * 1.12;
    return dollar;
}

double convert_euro_to_pound(double euro) {
    double pound = euro * 0.84;
    return pound;
}

double convert_pound_to_euro(double pound) {
    double euro = pound * 1.18;
    return euro;
}

void waiting(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main() {
    system("color 0");
    string currency;
    int choice;
    while (true) {
        system("cls");
        cout << "\t\t\t<================================================================================>" << endl;
        cout << "\t\t\t|                        WELCOME TO CURRENCY CONVERTER                           |" << endl;
        cout << "\t\t\t|                                                                                |" << endl;
        cout << "\t\t\t|                                                                                |" << endl;
        cout << "\t\t\t<================================================================================>" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "\t\t\tchoose from below options to convert" << endl;
        cout << "\t\t\t [1] Dollar (USD) to Rubles(RUB) " << endl;
        cout << "\t\t\t [2] Rubles (RUB) to Dollar(USD) " << endl;
        cout << "\t\t\t [3] Pound (GBP) to Rubles (RUB) " << endl;
        cout << "\t\t\t [4] Rubles (RUB) to Pound (GBP) " << endl;
        cout << "\t\t\t [5] Euro (EUR) to Rubles (RUB) " << endl;
        cout << "\t\t\t [6] Rubles (RUB) to Euro (EUR) " << endl;
        cout << "\t\t\t [7] Dollar (USD) to Pound (GBP) " << endl;
        cout << "\t\t\t [8] Pound (GBP) to Dollar (USD) " << endl;
        cout << "\t\t\t [9] Dollar (USD) to Euro (EUR) " << endl;
        cout << "\t\t\t [10] Euro (EUR) to Dollar (USD) " << endl;
        cout << "\t\t\t [11] Euro (EUR) to Pound (GBP) " << endl;
        cout << "\t\t\t [12] Pound (GBP) to Euro (EUR) " << endl;
        cout << endl << endl;
        cout << "Enter your choice to convert from one currency to other:\n";
        cin >> choice;

        if (choice == 1) {
            double dollar;
            double rubles;
            cout << "Enter dollars to convert to rubles " << endl;
            cin >> dollar;
            rubles = convert_dollar_to_rubles(dollar);
            cout << dollar << " Dollars In Rubles = " << rubles;
            waiting(4000); 
        }
        else if (choice == 2) {
            double dollar;
            double rubles;
            cout << "Enter Rubles to convert to Dollar " << endl;
            cin >> rubles;
            dollar = convert_rubles_to_dollar(rubles);
            cout << rubles << " Rubles In Dollar = " << dollar;
            waiting(4000);
        }
        else if (choice == 3) {
            double pound;
            double rubles;
            cout << "Enter Pound to convert to Rubles " << endl;
            cin >> pound;
            rubles = convert_pound_to_rubles(pound);
            cout << pound << " Pounds In Rubles = " << rubles;
            waiting(4000);
        }
        else if (choice == 4) {
            double rubles;
            double pound;
            cout << "Enter Rubles to convert to Pound " << endl;
            cin >> rubles;
            pound = convert_rubles_to_pound(rubles);
            cout << rubles << " Rubles In Pound = " << pound;
            waiting(4000);
        }
        else if (choice == 5) {
            double euro;
            double rubles;
            cout << "Enter Euro to convert to Rubles " << endl;
            cin >> euro;
            rubles = convert_euro_to_rubles(euro);
            cout << euro << " Euro In Rubles = " << rubles;
            waiting(4000);
        }
        else if (choice == 6) {
            double rubles;
            double euro;
            cout << "Enter Rubles to convert to Euro " << endl;
            cin >> rubles;
            euro = convert_rubles_to_euro(rubles);
            cout << rubles << " Rubles In Euro = " << euro;
            waiting(4000);
        }
        else if (choice == 7) {
            double dollar;
            double pound;
            cout << "Enter Dollar to convert to Pound " << endl;
            cin >> dollar;
            pound = convert_dollar_to_pound(dollar);
            cout << dollar << " Dollars In Pound = " << pound;
            waiting(4000);
        }
        else if (choice == 8) {
            double pound;
            double dollar;
            cout << "Enter Pound to convert to Dollar " << endl;
            cin >> pound;
            dollar = convert_pound_to_dollar(pound);
            cout << pound << " Pounds In Dollar = " << dollar;
            waiting(4000);
        }
        else if (choice == 9) {
            double dollar;
            double euro;
            cout << "Enter Dollar to convert to Euro " << endl;
            cin >> dollar;
            euro = convert_dollar_to_euro(dollar);
            cout << dollar << " Dollars In Euro = " << euro;
            waiting(4000);
        }
        else if (choice == 10) {
            double euro;
            double dollar;
            cout << "Enter Euro to convert to Dollar " << endl;
            cin >> euro;
            dollar = convert_euro_to_dollar(euro);
            cout << euro << " Euro In Dollar = " << dollar;
            waiting(4000);
        }
        else if (choice == 11) {
            double euro;
            double pound;
            cout << "Enter Euro to convert to Pound " << endl;
            cin >> euro;
            pound = convert_euro_to_pound(euro);
            cout << euro << " Euro In Pound = " << pound;
            waiting(4000);
        }
        else if (choice == 12) {
            double pound;
            double euro;
            cout << "Enter Pound to convert to Euro " << endl;
            cin >> pound;
            euro = convert_pound_to_euro(pound);
            cout << pound << " Pounds In Euro = " << euro;
            waiting(4000);
        }
        else {
            cout << "Invalid choice, please select between 1 - 12" << endl;
        }
    }
}