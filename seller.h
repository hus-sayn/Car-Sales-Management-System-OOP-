#pragma once
#include "user.h"
class seller :
    public user
{
    string company;
    int price_range;
    string model;
    int mileage;
    int make_year;
    string vehicle_name;
    string   city_name;
    string seller_name;
    string   description;
    int contact;
    string fuel_type;
    string engine;  
    string color;
    int rating;
public:
    void Register();
    bool isUserExists(const string& username, const string& password);
    void login() override;
    void setVehicleDetails();
    void viewVehicles();

    void rgister_in_Auction();
    ////
   void viewNotifications();
    void addVehicle();
    void removeVehicle();
};

