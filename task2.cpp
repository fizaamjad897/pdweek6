#include<iostream>
using namespace std;
void calcgrade(int english, int maths, int chemistry, int socialscience, int biology);
main()
 {
    string name;
    string finalgrade;
    int english, maths, chemistry, socialscience, biology;
    cout<< "Enter your name : ";
    cin>>name;
    cout<< "Enter English Marks : ";
    cin>>english;
    cout<< "Enter Maths Marks : ";
    cin>>maths;
    cout<< "Enter Chemistry Marks : ";
    cin>>chemistry;
    cout<< "Enter SocialScience Marks : ";
    cin>>socialscience;
    cout<< "Enter Biology Marks : ";
    cin>>biology;
    calcgrade(english, maths, chemistry, socialscience, biology);
 }
 void calcgrade(int english, int maths, int chemistry, int socialscience, int biology)
  {
    int obtainedmarks, percentage;
    int perc;
    string grade;
    obtainedmarks = english + maths + chemistry + socialscience + biology;
    perc = (obtainedmarks / 500);
    percentage = perc * 100;
    if(percentage > 90 && percentage <= 100)
     {
        grade = "A+";
        cout<<grade;
     }
    else if(percentage > 80 && percentage <= 90)
     {
        grade = "A";
        cout<<grade;
     }
    else if(percentage > 70 && percentage <= 80)
     {
        grade = "B+";
        cout<<grade;
     }
    else if(percentage > 60 && percentage <= 70)
     {
        grade = "B";
        cout<<grade;
     }
    else if(percentage >= 50 && percentage < 60)
     {
        grade = "C";
        cout<<grade;
     }
    else if(percentage >= 40 && percentage <= 50)
     {
        grade = "D";
        cout<<grade;
     }
    else
     {
        cout<<"No grade";
     }  
  }
