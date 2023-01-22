#include<iostream>
using namespace std;
float fruitprice(string fruitname, string dayname, float amountoffruits);
main()
 {
    string fruitname, dayname;
    float amountoffruits, resultedprice;
    cout<< "Fruit Name: ";
    cin>>fruitname;
    cout<< "Day Name: ";
    cin>>dayname;
    cout<< "Quantity of fruits: ";
    cin>>amountoffruits;
    if((dayname == "Monday" || dayname == "Tuesday" || dayname == "Wednesday" || dayname == "Thursday" || dayname == "Friday" || dayname == "Saturday" || dayname == "Sunday") && (fruitname == "banana" || fruitname == "apple" || fruitname == "orange" || fruitname == "grapefruit" || fruitname == "kiwi" || fruitname == "pineapple" || fruitname == "grapes"))
     {
        resultedprice = fruitprice(fruitname, dayname, amountoffruits);
        cout<<resultedprice;
     }
    else 
     {
        cout<< "Error";
     }    
 }
 float fruitprice(string fruitname, string dayname, float amountoffruits)
  {
    float calculatedprice;
    if(dayname == "Monday" || dayname == "Tuesday" || dayname == "Wednesday" || dayname == "Thursday" || dayname == "Friday")
      {
        if(fruitname == "banana")
         {
            calculatedprice = 2.50 * amountoffruits;
         }
        if(fruitname == "apple")
         {
            calculatedprice = 1.20 * amountoffruits;
         }
        if(fruitname == "orange")
          {
            calculatedprice = 0.85 * amountoffruits;
          }
        if(fruitname == "grapefruit")
         {
            calculatedprice = 1.45 * amountoffruits;
         }
        if(fruitname == "kiwi")
         {
            calculatedprice = 2.70 * amountoffruits;
         }
        if(fruitname == "pineapple")
         {
            calculatedprice = 5.50 * amountoffruits;
         }
        if(fruitname == "grapes")
         {
            calculatedprice = 3.85 * amountoffruits;
         }
        return calculatedprice;
      }
    if(dayname == "Saturday" || dayname == "Sunday")
     {
        if(fruitname == "banana")
         {
            calculatedprice = 2.70 * amountoffruits;
         }
        if(fruitname == "apple")
         {
            calculatedprice = 1.25 * amountoffruits;
         }
        if(fruitname == "orange")
          {
            calculatedprice = 0.90 * amountoffruits;
          }
        if(fruitname == "grapefruit")
         {
            calculatedprice = 1.60 * amountoffruits;
         }
        if(fruitname == "kiwi")
         {
            calculatedprice = 3.00 * amountoffruits;
         }
        if(fruitname == "pineapple")
         {
            calculatedprice = 5.60 * amountoffruits;
         }
        if(fruitname == "grapes")
         {
            calculatedprice = 4.20 * amountoffruits;
         }
        return calculatedprice;
      }
      return 0.0;
  }

    


  
