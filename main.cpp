#include"user.h"
#include"buyer.h"
#include"seller.h"
#include"admin.h"
#include<iostream>
using namespace std;
char choice;
int main()
{
    int choice;
    cout << "press 1 to enter as a buyer  \npress 2 to enter as a seller  \n press 3 to enter as a admin " << endl;
    cin >> choice;
    buyer buyerObj;                                         // Create an instance of the Buyer class
    seller seller;
    admin adminobj;
    switch (choice) {
    case 1: {

        int x1;
        cout << "Press 1 for view vehicles" << endl << "Press 2 for view Auction" << endl << "Press 3 for INspection Report" <<
            "Press 4 for view Notification" << endl << "Press 5 for Logout" << endl;
        cin >> x1;
        switch (x1)
        {
        case 1:
        {
            buyerObj.viewVehicles();
            break;
        }
        case 2:
        {
            buyerObj.viewAuction();
            break;
        }


        case 3:
        {
            //  buyerObj.inspectionReport();
            break;
        }

        case 4:
        {

            buyerObj.viewNotifications();
            break;
        }

        case 5:
        {

            cout << "Logout..!" << endl;
            break;
        }

        default:
            cout << "Invalid Input" << endl;
            break;
        }


        return 0;


        break;
        }

    case 2:
    {

        int x2;
        cout << "Press 1 for view vehicles" << endl << "Press 2 for Add Vehicle" << endl << "Press 3 for Remove Vehicle" <<
            "Press 4 for Register In auction" << endl << "Press 5 for View Notification" << endl << "Press 6 to Logout" << endl;
        cin >> x2;
        switch (x2)
        {
        case 1:
        {
            seller.viewVehicles();
            break;
        }
        case 2:
        {
            seller.addVehicle();
            break;
        }


        case 3:
        {
            seller.removeVehicle();
            break;
        }

        case 4:
        {

            seller.rgister_in_Auction();
            break;
        }

        case 5:
        {
            seller.viewNotifications();
            break;
        }

        case 6:
        {

            cout << "Logout..!" << endl;
            break;
        }

        default:
            cout << "Invalid Input" << endl;
            break;
        }


        break;

    }


    
    case 3:
    {

        int x3;
        cout << "Press 1 for Add vehicles" << endl << "Press 2 for Remove Vehicle" << endl << "Press 3 for Manage Inspection Report" <<
            "Press 4 for Add Notificatoin" << endl << "Press 5 for Remove Notification" << endl << "Press 6 to Rate A vehicle" << endl <<
            "Press 7 to logout" << endl;
        cin >> x3;
        switch (x3)
        {
        case 1:
        {
            adminobj.addVehicle();
            break;
        }
        case 2:
        {
           adminobj.removeVehicle();
            break;
        }


        case 3:
        {
          //  adminobj.inspectionDetails();
               
            break;
        }

        case 4:
        {

           adminobj.addNotification();
            break;
        }

        case 5:
        {
            adminobj.RemoveNotification();
            break;
        }

        case 6:
        {

           adminobj.Rating();
            break;
        }

        case 7:
        {

            cout << "Logout." << endl;
            break;
        }

        default:
            cout << "Invalid Input" << endl;
            break;
        }
      

        
        break;

    }

    }


    return 0;





}