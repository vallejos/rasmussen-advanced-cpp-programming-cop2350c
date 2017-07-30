/**
 * Author: Leonardo Vallejos
 * Date: 07/23/2017
 * FileName: main.cpp
 * Purpose: Use the vector template to store the address book. Use classes.
 * Input:
 * Output:
 * Exceptions:
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "Record.h"
#include "Person.h"

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
void listContacts(vector<Person *> addressBook) {
    if (addressBook.empty()) {
        throw "There are no contacts to display";
    }
    
    cout << endl << "-------------------------------------------------------------------------------------" << endl;
    cout << "ID \tNAME \t\t\tAGE \tPHONE\t\tEMPLOYER" << endl;
    cout << "-------------------------------------------------------------------------------------" << endl;
    for (int i=0; i<addressBook.size(); i++) {
        Person* contact = addressBook[i];
        cout << contact->getId() << "\t";
        cout << contact->getLastName() << ", " << contact->getFirstName() << "\t\t";
        cout << contact->getAge() << "\t";
        cout << contact->getPhone() << "\t";
        cout << contact->getEmployerName() << " (" << contact->getEmployerPhone() << ")" << endl;
    }
    cout << "-------------------------------------------------------------------------------------" << endl;
    cout << "Total: " << addressBook.size()  << " contacts" << endl;
}

/**
 * Adds a new contact to the address book
 * @param {vector} addressBook
 * @param {int} index
 */
void addContact(vector<Person *> &addressBook) {
    string fName, lName, employerName;
    int age;
    long phone, employerPhone;
    int employerChoice;
    bool employerOk = false;

    if (addressBook.size() >= ADDRESSBOOK_SIZE) {
        throw "Cannot add more contacts: The Address Book is full";
    }
    
    cout << endl << "Enter the data for the new contact: " << endl;

    // input the data for the contact
    cout << "Enter First Name: ";
    getline(cin, fName);
    cout << "Enter Last Name: ";
    getline(cin, lName);
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Phone Number: ";
    cin >> phone;

    cin.ignore(); // clean buffer

    do {
        cout << endl << "Available Employers: " << endl;
        cout << "1 - Sales" << endl;
        cout << "2 - Service" << endl;
        cout << "3 - Manufacturing" << endl;
        cout << "Select Employer: ";

        cin >> employerChoice;
        
        if (employerChoice >= 1 && employerChoice <= 3) {
            employerOk = true;
        } else {
            cout << endl << "Please select a valid Employer." << endl;
        }
    } while (!employerOk);
    
    cin.ignore(); // clean buffer

    cout << "Enter Employer Name: ";
    getline(cin, employerName);
    cout << "Enter Employer Phone: ";
    cin >> employerPhone;

    
    try {
        Person *newEntry = new Person(addressBook.size() + 1, fName, lName, age, phone, employerChoice, employerName, employerPhone);

        // add the contact to the address book
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
    vector<Person *> addressBook;

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
