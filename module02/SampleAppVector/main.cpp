/**
 * Author: Leonardo Vallejos
 * Date: 07/16/2017
 * FileName: main.cpp
 * Purpose: Use the vector template to store the address book
 * Input:
 * Output:
 * Exceptions:
 */

#include <cstdlib>
#include <iostream>
#include <vector>
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
    cout << "1) Add new contact" << endl;
    cout << "2) List contacts" << endl;
    cout << "0) Exit program" << endl;
    cout << "Select an option > ";
}

/**
 * Prints 
 * @param {vector} addressBook
 * @param {int} index
 */
void listContacts(vector<Record *> addressBook) {
    if (addressBook.empty()) {
        throw "There are no contacts to display";
    }
    
    cout << endl << "----------------------------------------------------------------" << endl;
    cout << "ID \tNAME \t\t\tAGE \tPHONE" << endl;
    cout << "----------------------------------------------------------------" << endl;
    for (int i=0; i<addressBook.size(); i++) {
        cout << addressBook[i]->getId() << "\t";
        cout << addressBook[i]->getLastName() << ", " << addressBook[i]->getFirstName() << "\t\t";
        cout << addressBook[i]->getAge() << "\t";
        cout << addressBook[i]->getPhone() << endl;
    }
    cout << "----------------------------------------------------------------" << endl;
    cout << "Total: " << addressBook.size()  << " contacts" << endl;
}

/**
 * Adds a new contact to the address book
 * @param {vector} addressBook
 * @param {int} index
 */
void addContact(vector<Record *> &addressBook) {
    string fName, lName;
    int age;
    long phone;

    if (addressBook.size() >= ADDRESSBOOK_SIZE) {
        throw "Cannot add more contacts: The Address Book is full";
    }
    
    cout << endl << "Enter the data for the new contact: " << endl;

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
        Record *newEntry = new Record(addressBook.size() + 1, fName, lName, age, phone);

        // add the record to the address book
        addressBook.push_back(newEntry);
    } catch (std::exception e) {
        throw "Could not add the new contact to the Address Book";
    }

    cout << endl << "New contact added!" << endl;
    
    return;
}


/**
 * Main program function
 */
int main(int argc, char** argv) {
    int choice;
    bool endProgram = false;
    
    // use template array for the address book
    vector<Record *> addressBook;

    while (!endProgram) {
        printMainMenu();
        
        cin >> choice;

        cin.ignore(); // clean buffer
        
        switch (choice) {
            case 1:
                try {
                    // add contact
                    addContact(addressBook);
                } catch (const char* errorMessage) {
                    cout << endl << "[error] " << errorMessage << endl;
                }

                break;

            case 2:
                try {
                    // list contacts
                    listContacts(addressBook);
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
