#include<iostream>
using namespace std;
string zodiacsign(int date, string month);
main()
 {
    int date;
    string month, sign;
    cout<< "Date : ";
    cin>>date;
    cout<< "Month : ";
    cin>>month;
    sign = zodiacsign(date, month);
    cout<<sign;
 }
string zodiacsign(int date, string month)
 {
    string z_sign;
    if((date >=21 && month == "March") || (date <= 19 && month == "April"))
     {
        z_sign = "Aries";
     } 
    else if((date >=20 && month == "April") || (date <= 20 && month == "May"))
     {
        z_sign = "Taurus";
     }
    else if((date >=21 && month == "May") || (date <= 20 && month == "June"))
    {
        z_sign ="Gemini";
    }
    else if((date >=21 && month == "June") || (date <= 21 && month == "July"))
    {
        z_sign = "Cancer";
    }
    else if((date >=23 && month == "July") || (date <= 22 && month == "August"))
    {
        z_sign = "Leo";
    }
   else if((date >=23 && month == "August") || (date <= 22 && month == "September"))
    {
        z_sign = "Virgo";
    }
   else if((date >=23 && month == "September") || (date <= 22 && month == "October"))
    {
        z_sign = "Libra";
    }
    else if((date >=23 && month == "October") || (date <= 21 && month == "November"))
    {
        z_sign = "Scorpio";
    }
    else if((date >=22 && month == "November") || (date <= 21 && month == "December"))
    {
        z_sign = "Sagittarius";
    }
    else if((date >=22 && month == "December") || (date <= 19 && month == "January"))
    {
        z_sign = "Capricon";
    }
    else if((date >=20 && month == "January") || (date <= 19 && month == "February"))
    {
        z_sign = "Aquarius";
    }
    else
    {
        z_sign = "Pisces";
    }
        return z_sign;
 }
