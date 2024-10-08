//Rassul Khalizov
//9/28/27
//Homework 1 Part 1
#include<iostream>

using namespace std;

#include<string>

#include<iomanip>

int main()
{
    //declares the variables
    double minutes;
    double weight;
    double totalwalking;
    double totaljogging;
    double totalrunning; 
    int typeofexercise; 
    double calories;
    double minwalking;
    double minjogging;
    double minrunning; 

    
    // asks for user input on min, weight, walkingslowly, walking, running, goal for calories burned
    cout<<" how many minutes have you worked out?" ;
    cin >> minutes; 

    cout<<"What is your weight in kilograms?" ;
    cin >> weight;

    cout<<"What type of exercise did you do: walkingslowly(1), walking(2), running(3)";
    cin >> typeofexercise; 

    cout<<"How many calories do you want to burn?" ;
    cin >> calories;

    switch (typeofexercise)
    {
        // if the user is walking slowly, the switch goes to case(1) and outputs the amount of calories that you have burned. Then, it outputs the amount of time it will take the user to burn their desired amount of calories in each mode: wallking slowly, walking, and runing. 
        case (1):
        
        totalwalking = minutes * ((2 * 3.5 * weight) / 200);
        cout << setw(2) << "You will burn " << totalwalking << " calories walking"<< endl; 


       
        minwalking = (calories/((2 * 3.5 * weight) / 200));

        minjogging = (calories/((2 * 3.5 * weight) / 200)); 

        minrunning = (calories/((2 * 8.8* weight) / 200)); 
        
        cout<< setw(2) << "It will take " << minwalking << " minutes to burn " << calories << " calories walking" << endl; 

        cout << setw(2) << "It will take " << minrunning << " minutes to burn " << calories << " calories running" << endl;

        cout<< setw(2) << "It will take " << minjogging << " minutes to burn " << calories << " calories jogging" << endl; 
 

        break;

        // if the user is walking, the switch goes to case(2) and outputs the amount of calories that you have burned. Then, it outputs the amount of time it will take the user to burn their desired amount of calories in each mode: wallking slowly, walking, and runing. 

        case (2):
        
        totaljogging = minutes * ((3 * 3.5 * weight) / 200);
        cout << setw(2) << "You will burn " << totaljogging << " calories jogging"<< endl;


        minwalking = (calories/((2 * 3.5 * weight) / 200));

        minjogging = (calories/((2 * 3.5 * weight) / 200)); 

        minrunning = (calories/((2 * 8.8* weight) / 200)); 

        cout<< setw(2) << "It will take " << minwalking << " minutes to burn " << calories << " calories walking" << endl; 

        cout<< setw(2) << "It will take " << minjogging << " minutes to burn " << calories << " calories jogging" << endl; 

        cout << setw(2) << "It will take " << minrunning << " minutes to burn " << calories << " calories running" << endl; 

        break;

        // if the user is running, the switch goes to case(3) and outputs the amount of calories that you have burned. Then, it outputs the amount of time it will take the user to burn their desired amount of calories in each mode: wallking slowly, walking, and runing. 

        case(3):

        totalrunning = minutes * ((8.8 * 3.5 * weight) / 200);
        cout << setw(2) << "You will burn " << totalrunning << " calories running"<< endl;


        minwalking = (calories/((2 * 3.5 * weight) / 200));

        minjogging = (calories/((2 * 3.5 * weight) / 200)); 

        minrunning = (calories/((2 * 8.8* weight) / 200)); 

        cout<< setw(2) << "It will take " << minwalking << " minutes to burn " << calories << " calories walking" << endl; 

        cout<< setw(2) << "It will take " << minjogging << " minutes to burn " << calories << " calories jogging" << endl; 

        cout << setw(2) << "It will take " << minrunning << " minutes to burn " << calories << " calories running" << endl; 

        default:
        cout<<"please input a valid number: either 1, 2, or 3";
    }
    /*
    how many minutes have you worked out?10
What is your weight in kilograms?63
What type of exercise did you do: walkingslowly(1), walking(2), running(3)1
How many calories do you want to burn?100
You will burn 22.05 calories walking
It will take 45.3515 minutes to burn 100 calories walking
It will take 18.0375 minutes to burn 100 calories running
It will take 45.3515 minutes to burn 100 calories jogging
    */

    return 0;
}
