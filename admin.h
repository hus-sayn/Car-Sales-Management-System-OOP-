#pragma once
#include"user.h"
#include <iostream>
class admin : public user {
    string company;
    int price_range;
    string model;
    int mileage;
    int make_year;
    string vehicle_name;
    string city_name;
    string seller_name;
    string description;
    int contact;
    string engine;
    string fuel_type;

    string color; // Already declared in the original code
    int rating;   // Already declared in the original code

    // Additional variable declarations for ManageInspection function
    string transmissionType;
    string inspectionDate;
    string chassisNo;
    string engineNo;
    string registrationNo;
    string vehicleColor;
    string location;
    string registeredCity;
    string currentCity;
    string carFeatures;
    int vehicleRating;

public:
    void login() override;
    void setVehicleDetails();
    void addVehicle();
    void removeVehicle();
    void viewVehicles();

    void ManageInspection(
        const string& vehicleName,
        const string& sellerName,
        const string& engineCapacity,
        const int& vehicleMileage,
        const string& transmissionType,
        const string& inspectionDate,
        const string& chassisNo,
        const string& engineNo,
        const string& registrationNo,
        const string& fuelType,
        const string& vehicleColor,
        const string& location,
        const string& registeredCity,
        const string& currentCity,
        const string& carFeatures,
        const int& vehicleRating
    );
    void inspectionDetails();
    void addNotification();
    void RemoveNotification();
    void Rating();
};
