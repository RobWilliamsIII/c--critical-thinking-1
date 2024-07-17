/*
 * MyFirstCppProgram.cpp
 *
 *  Created on: Jul 16, 2024
 *      Author: robwilliams
 */

#include <iostream>
using namespace std;

class MyPerson {
public:
    string firstName;
    string lastName;
    string address;
    string city;
    int zipCode;


    MyPerson(string fName, string lName, string addr, string cty, int zip) {
        firstName = fName;
        lastName = lName;
        address = addr;
        city = cty;
        zipCode = zip;
    }
};

int main() {

    MyPerson myObj("Rob", "Williams", "2024 Wow St.", "WowTown", 63122);


    cout << "First Name: " << myObj.firstName << endl;
    cout << "Last Name: " << myObj.lastName << endl;
    cout << "Address: " << myObj.address << endl;
    cout << "City: " << myObj.city << endl;
    cout << "Zip Code: " << myObj.zipCode << endl;

    return 0;
}
