#include<iostream>
using namespace std;
void calctime(int startinghours, int startingmins, int arrivalhours, int arrivalmins);
main()
 {
   int startinghours, startingmins, arrivalhours, arrivalmins, hours, minutes;
   cout<< "Enter the hours at which exam starts ";
   cin>>startinghours;
   cout<< "Enter the minutes at which exam starts ";
   cin>>startingmins;
   cout<< "Enter the hours of your arrival ";
   cin>>arrivalhours;
   cout<< "Enter the minutes of your arrival ";
   cin>>arrivalmins;
   calctime(startinghours, startingmins, arrivalhours, arrivalmins);
 }
 void calctime(int startinghours, int startingmins, int arrivalhours, int arrivalmins)
 {
    int startingtime, arrivaltime, totaltime;
    startingtime = (startinghours * 60) + startingmins;
    arrivaltime = (arrivalhours * 60) + arrivalmins;
    if(startingtime < arrivaltime)
     {
        int totaltime;
        totaltime = arrivaltime - startingtime;
        if(totaltime > 60)
         {
            int hours, minutes;
            hours = arrivalhours - startinghours;
            minutes = arrivalmins - startingmins;
            cout<< "Late" <<endl;
            cout<<hours <<" hours " <<minutes <<"minutes after the start";
         }
        else
         {
            cout<< "Late" <<endl;
            cout<<totaltime <<" minutes after the start ";
         }
     }
    if(startingtime > arrivaltime)
     {
        int totaltime;
        totaltime = startingtime - arrivaltime;
        if(totaltime < 60)
         {
            if(totaltime >= 30)
             {
               cout<< "Early" <<endl;
               cout<<totaltime <<" minutes before the start ";
             }
         }
         else
          {
            int hours, minutes;
            hours = totaltime / 60;
            minutes = totaltime % 60;
            cout<< "Early" <<endl;
            cout<<hours <<" hours : " <<minutes <<" minutes before the start ";
          }
         
        if(totaltime < 30)
         {
            cout<< "On time" <<endl;
            cout<<totaltime <<" minutes before the start ";
         }
     }
    if(startingtime == arrivaltime)
     {
        cout<< "On time ";
     }
 }

        
