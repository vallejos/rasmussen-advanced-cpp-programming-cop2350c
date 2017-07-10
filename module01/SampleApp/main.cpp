/**
 * Author:
 * Date:
 * FileName:
 * Purpose:
 * Input:
 * Output:
 * Exceptions:
 */

#include <cstdlib>
#include <iostream>
#include "Record.h"

using namespace std;

/**
 * Prints the main menu
 * @return
 */
void printMainMenu() {
    cout << endl << "-----------------------------" << endl;
    cout << "Main Menu:" << endl;
    cout << "-----------------------------" << endl;
    cout << "1) Add record" << endl;
    cout << "2) List records" << endl;
    cout << "0) Exit program" << endl;
    cout << "Select an option > ";
}

/**
 * Prints 
 * @param {array} addressBook
 * @param {int} index
 */
void listContacts(Record *addressBook, int index) {
    if (index == 0) {
        cout << endl << "There are no records in the Address Book" << endl;
    } else {
        cout << endl << "----------------------------------------------------------------" << endl;
        cout << "ID \tNAME \t\t\tAGE \tPHONE" << endl;
        cout << "----------------------------------------------------------------" << endl;
        for (int i=0; i<index; i++) {
            cout << addressBook[i].getId() << "\t";
            cout << addressBook[i].getLastName() << ", " << addressBook[i].getFirstName() << "\t\t";
            cout << addressBook[i].getAge() << "\t";
            cout << addressBook[i].getPhone() << endl;
        }
        cout << "----------------------------------------------------------------" << endl;
        cout << "Total: " << index + 1 << " records" << endl;
    }
}

/**
 * Main
 */
int main(int argc, char** argv) {
    int choice;
    int total = 0;
    string fName, lName;
    int age;
    long phone;
    bool endProgram = false;
    Record addressBook[10];

    while (!endProgram) {
        printMainMenu();
        
        cin >> choice;

        cin.ignore(); // clean buffer
        
        switch (choice) {
            case 1:
                if (total <= 9) {
                    cout << endl << "Enter the data for the new record: " << endl;

                    // input the data for the record
                    cout << "Enter First Name: ";
                    getline(cin, fName);
                    cout << "Enter Last Name: ";
                    getline(cin, lName);
                    cout << "Enter Age: ";
                    cin >> age;
                    cout << "Enter Phone Number: ";
                    cin >> phone;
    
                    addressBook[total].setId(total + 1);
                    addressBook[total].setFirstName(fName);
                    addressBook[total].setLastName(lName);
                    addressBook[total].setAge(age);
                    addressBook[total].setPhone(phone);
    
                    cout << endl << "New record added" << endl;
    
                    total++;
                } else {
                    cout << endl << "Cannot add a new record: The Address Book is full." << endl;
                }

                break;

            case 2:
                listContacts(addressBook, total);

                break;
                
            case 0:
                endProgram = true;
                break;
                
            default:
                cout << endl << "Invalid Option. Try again." << endl;
        }
        
    }
    
    cout << endl << "Good bye!" << endl;
    
    return 0;
}
