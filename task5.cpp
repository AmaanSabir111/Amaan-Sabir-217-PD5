#include <iostream>
using namespace std;
void menuOptions(int foodSchedule);
void hostelName(int agg);
void fee(char category);
main()
{
    int foodSchedule;
    int agg;
    int option;
    char category;

    cout << " ";
    cout << "****************************************************************************************************************************************************" << endl;
    cout << " *                                                                                                                                                  *" << endl;
    cout << " *                                                             HOSTEL MANAGEMENT SYSTEM                                                             *" << endl;
    cout << " *                                                                                                                                                  *" << endl;
    cout << " ****************************************************************************************************************************************************" << endl;
    cout << " "<<endl;
    cout << " "<<endl;
    cout << " "<<endl;
    cout << " "<<endl;
    cout << " "<<endl;
    cout << "Press 1 to know your Hostel name" << endl
         <<        "Press 2 to know mess menu" << endl
         << "Press 3 to know the dues to Hostel" << endl;
    cin >> option;
    if (option == 2)
    {
        menuOptions(foodSchedule);
    }
    else if (option == 1)
    {
        hostelName(agg);
    }
    else if (option == 3)
    {
        fee(category);
    }
}
void menuOptions(int foodSchedule)
{

    cout << "Monday    :    Biryani" << endl;
    cout << "Tuesday   :    Dal Roti" << endl;
    cout << "Wednesday :    Kema" << endl;
    cout << "Thursday  :    Bar-B-Q" << endl;
    cout << "Friday    :    Pulao" << endl;
    cout << "Saturday  :    Kabab" << endl;
    cout << "Sunday    :    Egg" << endl;
}
void hostelName(int agg)
{

    cout << "Enter your aggregate:";
    cin >> agg;
    if (agg >= 90)
    {
        cout << "You will get a room in 'Khalid Hostel'";
    }
    else if (agg >= 80 && agg < 90)
    {
        cout << "You will get a room in 'Edhi Hostel'";
    }
    else if (agg >= 75 && agg < 80)
    {
        cout << "You will get a room in 'Sartaj Hostel'";
    }
    else{
        cout<<"You are not eligible";
    }
}
void fee(char category)
{
    cout << "Enter your category:";
    cin >> category;
    if (category == 'A')
    {
        cout << "Your fee per semester will be 5000 RS";
    }
    else if (category == 'B')
    {
        cout << "Your fee per semester will be 9000 RS";
    }
    else if (category == 'C')
    {
        cout << "Your fee per semester will be 13000 RS";
    }
}