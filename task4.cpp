#include<iostream>
using namespace std;
float residential(float minutes);
float premium(char time, float minutes);
main()
 {
    char service, time;
    float minutes;
    cout<< "Enter which type of customer you are(Residential or Premium). Select (r/p) ";
    cin>>service;
    if(service == 'r') 
     {
        cout<< "Enter number of minutes you used the service ";
        cin>>minutes;
        float bill;
        bill=residential(minutes);
        cout<<bill <<"$";
     }
    else if(service == 'p')  
     {
        cout<< "Enter number of minutes you used the service ";
        cin>>minutes;
        cout<< "Press D for Day or Press N for night ";
        cin>>time;
        float bill;
        bill=premium(time, minutes);
        cout<<bill <<"$";
     }
     else
      {
        cout<< "Error";
      }
      
 }
 float residential(float minutes)
  {
        float free;
        if(minutes <= 50)
         {
            free = 10;
            return free;
         }
        if(minutes > 50)
         {
            float extramins;
            extramins = (minutes - 50) * 0.20 ;
            free = 10 + extramins;
            return free;
         }
         return 0;
  }
  float premium(char time, float minutes)
   {
    if(time == 'D')
     {
        float free;
        if(minutes<=75)
         {
           free = 25.00;
           return free;  
         }
        if(minutes > 75)
         {
            float extramins;
            extramins = (minutes - 75) * 0.10 ;
            free = 25 + extramins;
            return free;
         }
     }
     if(time == 'N')
     {
        float free;
        if(minutes<=100)
         {
           free = 25.00;
           return free;  
         }
        if(minutes > 75)
         {
            float extramins;
            extramins = (minutes - 100) * 0.05 ;
            free = 25 + extramins;
            return free;
         }
     }
     return 0.0;
   }

