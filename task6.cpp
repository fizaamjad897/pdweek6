#include<iostream>
using namespace std;
float appartmentprice(string month, float numberofstays);
float studioprice(string month, float numberofstays);
main()
 {
    float numberofstays, priceofappartment, priceofstudio;
    string month;
    cout<<"Month : ";
    cin>>month;
    cout<< "Number of stays : ";
    cin>>numberofstays;
    if(month == "May" || month == "June" || month == "July" || month == "August" || month == "September" || month == "October")
     {
       priceofappartment = appartmentprice(month, numberofstays);
       priceofstudio = studioprice(month, numberofstays);
       cout<< "Apartment: " <<priceofappartment <<"$" <<endl;
       cout<< "Studio : " <<priceofstudio <<"$" <<endl;
     }
    else
     {
        cout<<"Invalid Month";
     }
 }
 float appartmentprice(string month, float numberofstays)
  {
    if(month == "October" || month == "May")
     {
        float calculatedprice, discountedprice;
        calculatedprice = 65 * numberofstays;
        if(numberofstays > 14)
           {
            discountedprice = calculatedprice - (calculatedprice * 0.1);
            return discountedprice;
           }
        else
         {
            return calculatedprice;
         }
     }
    if(month == "June" || month == "September")
      {
        float calculatedprice, discountedprice;
        calculatedprice = 68.70 * numberofstays;
        if(numberofstays > 14)
           {
            discountedprice = calculatedprice - (calculatedprice * 0.1);
            return discountedprice;
           }
        else
         {
            return calculatedprice;
         }
      }
    if(month == "July" || month == "August")
      {
        float calculatedprice, discountedprice;
        calculatedprice = 77 * numberofstays;
        if(numberofstays > 14)
           {
            discountedprice = calculatedprice - (calculatedprice * 0.1);
            return discountedprice;
           }
        else
         {
            return calculatedprice;
         }
      }
      return 0.0;
  }
 float studioprice(string month, float numberofstays)
  {
    if(month == "May" || month == "October")
     {
        float calculatedprice, discountedprice;
        calculatedprice = 50 * numberofstays;
        if(numberofstays > 7 && numberofstays <= 14)
          {
            discountedprice = calculatedprice - (calculatedprice * 0.05);
            return discountedprice;
          }
        else if(numberofstays > 14)
         {
            discountedprice = calculatedprice - (calculatedprice * 0.3);
            return discountedprice;
         }
        else
         {
            return calculatedprice;
         }
     }
    if(month == "June" || month == "September")
     {
        float calculatedprice, discountedprice;
        calculatedprice = 75.20 * numberofstays;
        if(numberofstays > 14)
         {
            discountedprice = calculatedprice - (calculatedprice * 0.20);
            return discountedprice;
         }
        else 
         {
            return calculatedprice;
         }
     }
     if(month == "July" || month == "August")
      {
        float calculatedprice;
        calculatedprice = 76 * numberofstays;
        return calculatedprice;
      }
    return 0.0;
  }

 