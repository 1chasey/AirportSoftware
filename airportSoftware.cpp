#include <iostream>
#include <string>

using namespace std;

//beginning functions for the options

void optionPassenger();
void optionStaff();
void optionSecurity();
void optionMap();
void optionSupport();
void optionThreats();
void displayMenu();


int main() {
    int choice;

    while (true) {
        displayMenu();

        //user input validation for correct number input
        cout << "Enter a valid selection (1-6): ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, please enter a number 1 through 6.";

            continue;
        }

        switch (choice) {
            case 1:
                optionPassenger();
                break;
            case 2: 
                optionStaff();
                break;
            case 3:
                optionSecurity();
                break;
            case 4:
                optionMap();
                break;
            case 5:
                optionSupport();
                break;
            case 6:
                optionThreats();
                break;
            default: {
            cout << "Invalid input, please choose a valid option";
        }

    }
    void displayMenu(); {
        cout << "\n===============================" << endl;
        cout << "             Main Menu           " << endl;
        cout << "\n===============================" << endl;
        cout << "1. Passenger" << endl;
        cout << "2. Staff" << endl;
        cout << "3. Security" << endl;
        cout << "4. Map" << endl;
        cout << "5. Support" << endl;
        cout << "6. Threats" << endl;
        cout << "=================================" << endl;
        
    }
    void optionPassenger() {
        cout << "You selected Passenger" << endl;
    }
    void optionStaff() {
        cout << "You selected Staff" 
    }
}
}
