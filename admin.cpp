#include "admin.h"
#include<fstream>



void admin::login() {
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

void admin::setVehicleDetails() {



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




void admin::addVehicle() {
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
    //    }
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
    //    }
    //    else {
    //        cout << "Error saving vehicle information to file." << endl;
    //        bike_inventory.close();
    //    }

    //    break;

    //}

    //}

}


void admin::removeVehicle() {
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
//
//void admin::inspectionDetails() {
//    cout << "Enter Vehicle Name: ";
//    cin >> vehicle_name;
//
//    cout << "Enter Seller Name: ";
//    cin >> seller_name;
//
//    cout << "Enter Engine Capacity: ";
//    cin >> engine;
//
//    cout << "Enter Vehicle Mileage: ";
//    cin >> mileage;
//
//    cout << "Enter Transmission Type: ";
//    cin >> transmissionType; // Assuming this variable is declared somewhere
//
//    cout << "Enter Inspection Date: ";
//    cin >> inspectionDate; // Assuming this variable is declared somewhere
//
//    cout << "Enter Chassis No: ";
//    cin >> chassisNo; // Assuming this variable is declared somewhere
//
//    cout << "Enter Engine No: ";
//    cin >> engineNo; // Assuming this variable is declared somewhere
//
//    cout << "Enter Registration No: ";
//    cin >> registrationNo; // Assuming this variable is declared somewhere
//
//    cout << "Enter Fuel Type: ";
//    cin >> fuel_type;
//
//    cout << "Enter Vehicle Color: ";
//    cin >> vehicleColor; // Assuming this variable is declared somewhere
//
//    cout << "Enter Location: ";
//    cin >> location; // Assuming this variable is declared somewhere
//
//    cout << "Enter Registered City: ";
//    cin >> registeredCity; // Assuming this variable is declared somewhere
//
//    cout << "Enter Current City: ";
//    cin >> currentCity; // Assuming this variable is declared somewhere
//
//    cout << "Enter Car Features: ";
//    cin >> carFeatures; // Assuming this variable is declared somewhere
//
//    cout << "Enter Vehicle Rating: ";
//    cin >> rating;
//    ManageInspection(vehicle_name, seller_name, engine, mileage, transmissionType, inspectionDate, chassisNo, engineNo, registrationNo, fuel_type, vehicleColor, location, registeredCity, currentCity, carFeatures, vehicleRating);
//
//}
//
//void ManageInspection(const string& vehicleName, const string& sellerName, const string& engineCapacity, const int& vehicleMileage, const string& transmissionType, const string& inspectionDate, const string& chassisNo, const string& engineNo, const string& registrationNo, const string& fuelType, const string& vehicleColor, const string& location, const string& registeredCity, const string& currentCity, const string& carFeatures, const int& vehicleRating) {
//    ofstream inspectionFile("inspection_report.txt");
//    
//    if (inspectionFile.is_open()) {
//        // Write the inspection details to the inspection report file
//        inspectionFile << "Car Detail: " << vehicleName << endl;
//        inspectionFile << "Customer/Dealer Name: " << sellerName << endl;
//        inspectionFile << "Engine Capacity: " << engineCapacity << endl;
//        inspectionFile << "Mileage: " << vehicleMileage << endl;
//        inspectionFile << "Transmission Type: " << transmissionType << endl;
//        inspectionFile << "Inspection Date: " << inspectionDate << endl;
//        inspectionFile << "Chassis No: " << chassisNo << endl;
//        inspectionFile << "Engine No: " << engineNo << endl;
//        inspectionFile << "Registration No: " << registrationNo << endl;
//        inspectionFile << "Fuel Type: " << fuelType << endl;
//        inspectionFile << "Color: " << vehicleColor << endl;
//        inspectionFile << "Location: " << location << endl;
//        inspectionFile << "Registered City: " << registeredCity << endl;
//        inspectionFile << "Current City: " << currentCity << endl;
//        inspectionFile << "Car Features: " << carFeatures << endl;
//        inspectionFile << "Rating of the Vehicle: " << vehicleRating << endl;
//
//        inspectionFile.close();
//        cout << "Inspection report generated successfully." << endl;
//    }
//    else {
//        cout << "Error generating inspection report." << endl;
//    }
//}




void admin:: Rating() {

    if (rating == 1) {
        cout << "*" << endl;
    }

    else if (rating == 2) {
        cout << "**" << endl;
    }

    else if (rating == 3) {
        cout << "***" << endl;
    }

    else if (rating == 1) {
        cout << "****" << endl;
    }

    else {
        cout << "*****" << endl;
    }

}

void admin::addNotification() {
    string notificationText;

    cout << "Enter Notification: ";
    cin.ignore(); // Ignore any newline characters in the buffer
    getline(cin, notificationText);

    ofstream notificationFile("notifications.txt", ios::app);
    if (notificationFile.is_open()) {
        // Write the notification to the file
        notificationFile << "Notification: " << notificationText << endl;
        notificationFile.close();

        cout << "Notification added successfully." << endl;
    }
    else {
        cout << "Error adding notification." << endl;
    }
}
void admin::RemoveNotification() {
    ifstream notificationFile("notifications.txt");
    ofstream temp("temp.txt");

    string line;
    cout << "Enter the notification you want to remove: ";
    string selectedNotification;
    cin.ignore(); // Ignore any newline characters in the buffer
    getline(cin, selectedNotification);

    bool notificationFound = false;

    while (getline(notificationFile, line)) {
        string::size_type position = line.find("Notification: " + selectedNotification);
        if (position == string::npos) {
            temp << line << endl;  // Copy lines excluding the one to be removed
        }
        else {
            notificationFound = true;
        }
    }

    notificationFile.close();
    temp.close();

    if (notificationFound) {
        remove("notifications.txt");      // Delete the original file
        rename("temp.txt", "notifications.txt");  // Rename the temporary file
        cout << "Notification removed successfully." << endl;
    }
    else {
        remove("temp.txt");  // Remove the temporary file
        cout << "Notification not found." << endl;
    }
}
