/**
 * Author: Leonardo Vallejos
 * Date: 07/16/2017
 * FileName: main.cpp
 * Purpose:
 * Input:
 * Output:
 * Exceptions:
 */

#include <cstdlib>
#include <iostream>
#include <array>
#include "Record.h"

using namespace std;

// constants
const int ADDRESSBOOK_SIZE = 10; // size of the array

/**
 * Prints the main menu
 * @return
 */
void printMainMenu() {
    cout << endl << "-----------------------------" << endl;
    cout << "Main Menu:" << endl;
    cout << "-----------------------------" << endl;
    cout << "1) Add new record" << endl;
    cout << "2) List records" << endl;
    cout << "0) Exit program" << endl;
    cout << "Select an option > ";
}

/**
 * Prints 
 * @param {array} addressBook
 * @param {int} index
 */
void listContacts(array<Record*, ADDRESSBOOK_SIZE> addressBook, int index) {
    if (index == 0) {
        throw "There are no records to display";
    }
    
    cout << endl << "----------------------------------------------------------------" << endl;
    cout << "ID \tNAME \t\t\tAGE \tPHONE" << endl;
    cout << "----------------------------------------------------------------" << endl;
    for (int i=0; i<index; i++) {
        cout << addressBook[i]->getId() << "\t";
        cout << addressBook[i]->getLastName() << ", " << addressBook[i]->getFirstName() << "\t\t";
        cout << addressBook[i]->getAge() << "\t";
        cout << addressBook[i]->getPhone() << endl;
    }
    cout << "----------------------------------------------------------------" << endl;
    cout << "Total: " << index  << " records" << endl;
}

/**
 * Adds a new contact to the address book
 * @param {array} addressBook
 * @param {int} index
 */
void addContact(array<Record*, ADDRESSBOOK_SIZE> &addressBook, int &index) {
    string fName, lName;
    int age;
    long phone;

    if (index >= ADDRESSBOOK_SIZE) {
        throw "Cannot add more records: The Address Book is full";
    }
    
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

    try {
        Record *newEntry = new Record(index + 1, fName, lName, age, phone);

        // add the record to the address book
        addressBook[index] = newEntry;
    } catch (std::exception e) {
        throw "Could not add the new Record to the Address Book";
    }

    index++;
    
    return;
}


/**
 * Main program function
 */
int main(int argc, char** argv) {
    int choice;
    int total = 0;
    bool endProgram = false;
    
    // use template array for the address book
    array<Record*, ADDRESSBOOK_SIZE> addressBook;

    while (!endProgram) {
        printMainMenu();
        
        cin >> choice;

        cin.ignore(); // clean buffer
        
        switch (choice) {
            case 1:
                try {
                    // add contact
                    addContact(addressBook, total);
                } catch (const char* errorMessage) {
                    cout << endl << "[error] " << errorMessage << endl;
                }

                break;

            case 2:
                try {
                    // list contacts
                    listContacts(addressBook, total);
                } catch (const char* errorMessage) {
                    cout << endl << "[error] " << errorMessage << endl;
                }

                break;
                
            case 0:
                endProgram = true;
                break;
                
            default:
                cout << endl << "[error] Invalid option selected. Try again." << endl;
        }
        
    }
    
    cout << endl << "Good bye!" << endl;
    
    return 0;
}
