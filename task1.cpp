#include<iostream>
using namespace std;
string activity(string temp, string humidity);
main()
 {
    string temp, humidity, task;
    cout<< "Enter the temperature (Warm or Cold) ";
    cin>>temp;
    cout<< "Enter thr humidity (Dry or Humid) ";
    cin>>humidity;
    task = activity(temp, humidity);
    cout<<task;

 }
 string activity(string temp, string humidity)
  {
    string timpepass;
    if(temp == "warm" && humidity == "dry")
     {
       timpepass = "Play Tennis";
       return timpepass;
     }
    else if(temp == "warm" && humidity == "humid") 
     {
        timpepass = "Swim wohoo";
        return timpepass;
     }
    else if(temp == "cold" && humidity == "dry") 
     {
        timpepass = "Play basketball";
        return timpepass;
     }
    else if(temp == "cold" && humidity == "humid") 
     {
        timpepass = "Watch TV";
        return timpepass;
     }
    else 
     {
        return 0;
     }

  }
