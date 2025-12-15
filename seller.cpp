#include "seller.h"
#include<fstream>
#include<ctime>

bool seller::isUserExists(const string& username, const string& password) {
    ifstream file("seller.txt");
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

void seller::Register() {
    cout << "Enter username: ";
    cin >> name;
    cout << "Enter password: ";
    cin >> password;

    if (isUserExists(name, password)) {
        cout << "User already exists. Skipping registration." << endl;
    }
    else {


        cout << "\n you werent a user , but now we've saved your credentials now youve became a user\n";
        ofstream file2("seller.txt", ios::out);  // Use ios::app to append to the file if it already exists
        if (file2.is_open()) {
            file2 << name << " " << password << endl;
            file2.close();  // Close the file after writing
            cout << "User registered successfully!" << endl;
        }
        else {
            cout << "Unable to open file for registration." << endl;
        }
    }
}

void seller::login() {
    ifstream file2("seller.txt", ios::in);  // Open the file for reading
    string storedUsername, storedPassword;
    while (file2 >> storedUsername >> storedPassword) {
        if (storedUsername == name && storedPassword == password) {          //comparing password that i ve  entered
            cout << "Login successful!" << endl;
            file2.close();  // Closing the file

        }

        else
        {

            cout << "Invalid username or password." << endl;
            file2.close();  // Closing the file
        }

    }

}



void seller::setVehicleDetails() {



    cout << "Enter vehicle name: ";
    cin >> vehicle_name;

    cout << "Enter city name: ";
    cin >> city_name;

    cout << "Enter seller name: ";
    cin >> seller_name;

    cout << "Enter fuel type: ";
    cin >> fuel_type;
    cout << "enter milage (how many kms in 1 litre )";
    cin >> mileage;
    cout << "Enter engine: ";
    cin >> engine;

    cout << "Enter rating: ";
    cin >> rating;

    cout << "Enter color: ";
    cin >> color;
    cout << "Enter company: ";
    cin >> company;

    cout << "Enter price range: ";
    cin >> price_range;

    cout << "Enter model: ";
    cin >> model;

    cout << "Enter make year: ";
    cin >> make_year;



    cout << "Enter description: ";
    cin.ignore(); // to clear the input buffer
    getline(cin, description);

    cout << "Enter contact: ";
    cin >> contact;
}

void seller::addVehicle() {
    int num;
    cout << "press \n1 for New cars\n2 for used cars\n3 for bikes" << endl;
    cin >> num;
    //switch (num)
    //{

    //case 1: {
    //    // Call the new method to set vehicle details
    //    setVehicleDetails();

    //    ofstream car_inventory;
    //    car_inventory.open("car_inventory.txt", ios::app);
    //    if (car_inventory.is_open()) {
    //        // Write the vehicle information to the file
    //        car_inventory << "Name: " << vehicle_name << ",Owner Name :" << seller_name << ", Company : " << company << ", Model : " << model << ", Mileage : " << mileage << ", Price : " << price_range << ", Description : " << description << ", Contact : " << contact << ", Fuel type : " << fuel_type << ", Engine : " << engine << ", Rating : " << rating << ", Make year : " << make_year << ", Available in city : " << city_name << ", Color : " << color << endl;

    //        // Close the file within the scope of the function
    //        car_inventory.close();

    //        cout << "Vehicle information written to file successfully." << endl;
    //    }
    //    else {
    //        cout << "Error saving vehicle information to file." << endl;
    //        car_inventory.close();
    //    }

    //    
    //    break;
    //}


    //case 2:
    //{

    //    // Call the new method to set vehicle details
    //    setVehicleDetails();

    //    ofstream used_car_inventory;
    //    used_car_inventory.open("used_car_inventory.txt", ios::app);
    //    if (used_car_inventory.is_open()) {
    //        // Write the vehicle information to the file
    //        used_car_inventory << "Name: " << vehicle_name << ",Owner Name :" << seller_name << ", Company : " << company << ", Model : " << model << ", Mileage : " << mileage << ", Price : " << price_range << ", Description : " << description << ", Contact : " << contact << ", Fuel type : " << fuel_type << ", Engine : " << engine << ", Rating : " << rating << ", Make year : " << make_year << ", Available in city : " << city_name << ", Color : " << color << endl;

    //        // Close the file within the scope of the function
    //        used_car_inventory.close();

    //        cout << "Vehicle information written to file successfully." << endl;

    //          }
    //    else {
    //        cout << "Error saving vehicle information to file." << endl;
    //        used_car_inventory.close();
    //    }



    //    break;
    //}


    //case 3:
    //{
    //    // Call the new method to set vehicle details
    //    setVehicleDetails();

    //    ofstream bike_inventory;
    //    bike_inventory.open("bike_inventory.txt", ios::app);
    //    if (bike_inventory.is_open()) {
    //        // Write the vehicle information to the file
    //        bike_inventory << "Name: " << vehicle_name << ",Owner Name :" << seller_name << ", Company : " << company << ", Model : " << model << ", Mileage : " << mileage << ", Price : " << price_range << ", Description : " << description << ", Contact : " << contact << ", Fuel type : " << fuel_type << ", Engine : " << engine << ", Rating : " << rating << ", Make year : " << make_year << ", Available in city : " << city_name << ", Color : " << color << endl;

    //        // Close the file within the scope of the function
    //        bike_inventory.close();

    //        cout << "Vehicle information written to file successfully." << endl;

    //       }
    //    else {
    //        cout << "Error saving vehicle information to file." << endl;
    //        bike_inventory.close();
    //    }

    //    break;

    //}

    //}

}


void seller::viewVehicles()
{
    int num;
    cout << "press \n1 to view new vehicles\n2 to view used vehicles\n3 to view bikes" << endl;
    cin >> num;
    //switch (num)
    //{
    //case 1:
    //{
    //    string car;
    //ifstream reading;
    //reading.open("car_inventory.txt");
    //if (!reading.is_open()) {
    //    cout << "Unable to open the file." << endl;

    //}

    //while (!reading.eof())
    //{
    //    reading >> car;
    //    if (!reading.eof())
    //    {                                //its purpose is to not write last word twice 
    //        cout << car << "  ";
    //    }

    //}


    //reading.close();
    //break;
    //}

    //case 2:
    //{string used_car;
    //ifstream reading1;
    //reading1.open("used_car_inventory.txt");
    //if (!reading1.is_open()) {
    //    cout << "Unable to open the file." << endl;

    //}

    //while (!reading1.eof())
    //{
    //    reading1 >> used_car;
    //    if (!reading1.eof())
    //    {                                //its purpose is to not write last word twice 
    //        cout << used_car << "  ";
    //    }

    //}


    //reading1.close();


    //break;
    //}


    //case 3:

    //{
    //    string bike;
    //    ifstream reading2;
    //    reading2.open("bike_inventory.txt");
    //    if (!reading2.is_open()) {
    //        cout << "Unable to open the file." << endl;

    //    }

    //    while (!reading2.eof())
    //    {
    //        reading2 >> bike;
    //        if (!reading2.eof())
    //        {                                //its purpose is to not write last word twice 
    //            cout << bike << "  ";
    //        }

    //    }


    //    reading2.close();

    //    break;
    //}



    //}



}



void seller::removeVehicle() {
    int num;
    cout << "Press \n1 to remove a new car\n2 to remove a used car\n3 to remove a bike" << endl;
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

    //ifstream file(category + "_inventory.txt");
    //ofstream temp("temp.txt");

    //string line;
    //cout << "Enter the name of the vehicle you want to remove: ";
    //string selectedVehicle;
    //cin >> selectedVehicle;

    //bool vehicleFound = false;

    //while (getline(file, line)) {
    //    size_t position = line.find("Name: " + selectedVehicle);
    //    if (position == string::npos) {
    //        temp << line << endl;  // Copy lines excluding the one to be removed
    //    }
    //    else {
    //        vehicleFound = true;
    //    }
    //}

    //file.close();
    //temp.close();

    //if (vehicleFound) {
    //    remove((category + "_inventory.txt").c_str());      // Delete the original file
    //    rename("temp.txt",(category + "_inventory.txt").c_str());  // Rename the temporary file
    //    cout << "Vehicle removed successfully." << endl;
    //}

    //else {
    //    remove("temp.txt");  // Remove the temporary file
    //    cout << "Vehicle not found." << endl;
    //}
}

void seller::rgister_in_Auction() {


    int num;
    cout << "Press \n1 to auction a new car\n2 to auction a used car\n3 to auction a bike" << endl;
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

    // Call the new method to set vehicle details
    setVehicleDetails();

    ofstream auctionFile;
    auctionFile.open(category + "auction_inventory.txt", ios::app);
    if (auctionFile.is_open()) {
        // Write the vehicle information to the auction file
        auctionFile << "Name: " << vehicle_name << ",Owner Name :" << seller_name << ", Company : " << company
            << ", Model : " << model << ", Mileage : " << mileage << ", Price : " << price_range
            << ", Description : " << description << ", Contact : " << contact << ", Fuel type : " << fuel_type
            << ", Engine : " << engine << ", Rating : " << rating << ", Make year : " << make_year
            << ", Available in city : " << city_name << ", Color : " << color << endl;

        auctionFile.close();

        cout << "Vehicle added to auction successfully." << endl;
    }
    else {
        cout << "Error adding vehicle to auction file." << endl;
    }
}




void seller::viewNotifications() {
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





