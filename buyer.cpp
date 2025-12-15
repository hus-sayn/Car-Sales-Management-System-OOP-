#include "buyer.h"
#include<fstream>




bool buyer::isUserExists(const string& username, const string& password) {
    ifstream file("buyer.txt");
    string storedName, storedPassword;

    while (file >> storedName >> storedPassword) {
        if (storedName == username && storedPassword == password) {
            file.close();
            return true;  // User already exists with the given username and password
        }
    }

    file.close();
    return false;  // User not found
}


void buyer::Register() {
    cout << "Enter username: ";
    cin >> name;
    cout << "Enter password: ";
    cin >> password;

    if (isUserExists(name, password)) {
        cout << "User already exists. Skipping registration." << endl;
    }
    else {

        cout << "\n you werent a user , but now we've saved your credentials now youve became a user\n";
        ofstream file("buyer.txt", ios::out);  // Use ios::app to append to the file if it already exists
        if (file.is_open()) {
            file << name << " " << password << endl;
            file.close();  // Close the file after writing
            cout << "User registered successfully!" << endl;
        }
        else {
            cout << "Unable to open file for registration." << endl;
        }
    }
}
void buyer::login() {
    ifstream file("buyer.txt", ios::in);  // Open the file for reading
    string storedUsername, storedPassword;
    while (file >> storedUsername >> storedPassword) {
        if (storedUsername == name && storedPassword == password) {          //comparing password that i ve  entered
            cout << "Login successful!" << endl;
            file.close();  // Closing the file

        }

        else
        {

            cout << "Invalid username or password." << endl;
            file.close();  // Closing the file
        }



    }


}
void buyer::viewVehicles()
{


    int num;
    cout << "press \n1 to view new vehicles\n2 to view used vehicles\n3 to view bikes" << endl;
    cin >> num;
    switch (num)
    {
    case 1:
    {
        string car;
    ifstream reading;
    reading.open("car_inventory.txt");
    if (!reading.is_open()) {
        cout << "Unable to open the file." << endl;

    }

    while (!reading.eof())
    {
        reading >> car;
        if (!reading.eof())
        {                                //its purpose is to not write last word twice 
            cout << car << "  ";
        }

    }


    reading.close();
    viewVehicleDetails("car");
    //contactSeller("car");
    break;
    }

    case 2:
    {string used_car;
    ifstream reading1;
    reading1.open("used_car_inventory.txt");
    if (!reading1.is_open()) {
        cout << "Unable to open the file." << endl;

    }

    while (!reading1.eof())
    {
        reading1 >> used_car;
        if (!reading1.eof())
        {                                //its purpose is to not write last word twice 
            cout << used_car << "  ";
        }

    }


    reading1.close();

    viewVehicleDetails("used_car");
    //  contactSeller("used_car");
    break;
    }


    case 3:

    {
        string bike;
        ifstream reading2;
        reading2.open("bike_inventory.txt");
        if (!reading2.is_open()) {
            cout << "Unable to open the file." << endl;

        }

        while (!reading2.eof())
        {
            reading2 >> bike;
            if (!reading2.eof())
            {                                //its purpose is to not write last word twice 
                cout << bike << "  ";
            }

        }


        reading2.close();
        viewVehicleDetails("bike");
        //contactSeller("bike");
        break;
    }



    }






}

void buyer::viewVehicleDetails(const string& category) {
    ifstream file(category + "_inventory.txt");
    string line;

    cout << "\n\nEnter the name of the vehicle you want to view: \t" << endl;
    string selectedVehicle;
    cin.ignore(); // Clear the input buffer
    getline(cin, selectedVehicle);

    bool vehicleFound = false;

    while (getline(file, line)) {
        size_t position = line.find("Name: " + selectedVehicle);
        if (position != string::npos) {
            cout << line << endl;  // Display the entire details of the selected vehicle
            vehicleFound = true;
            break;
        }
    }

    file.close();

    if (!vehicleFound) {
        cout << "Vehicle not found." << endl;
    }
}
void buyer::viewAuction() {
    int num;
    cout << "Press \n1 to view auctions for new cars\n2 to view auctions for used cars\n3 to view auctions for bikes" << endl;
    cin >> num;

    string category;
    switch (num) {
    case 1: {
        category = "car";
        break;
    }
    case 2: {
        category = "used_car";
        break;
    }
    case 3: {
        category = "bike";
        break;
    }
    default: {
        cout << "Invalid option." << endl;
        return;
    }
    }

    ifstream auctionFile(category + "auction_inventory.txt");
    if (auctionFile.is_open()) {
        cout << "Auction Details for " << category << "s:" << endl;
        string line;
        while (getline(auctionFile, line)) {
            cout << line << endl; // Display each line from the auction file
        }

        auctionFile.close();
    }
    else {
        cout << "Error opening auction file." << endl;
    }
}
void buyer::viewNotifications() {
    ifstream notificationFile("notifications.txt");

    if (notificationFile.is_open()) {
        cout << "Notifications:\n";
        string notification;

        while (getline(notificationFile, notification)) {
            cout << notification << endl;
        }

        notificationFile.close();
    }
    else {
        cout << "Error opening notification file." << endl;
    }
}