// Rassul Khalizov
// 10/08/24
// Lab 5 Part 2

#include<iostream> 

using namespace std;

#include<string> 

#include<iomanip> 

int main()
{
    // declares variables
    double gigabytes; 
    double low;
    double normal;
    double high; 
    double hourslow;
    double hoursnormal;
    double hourshigh;
    int quality; 

    // asks for the input of how many gigabytes of music are in their hotspot plan and the quality of music they would like stream 
    cout << setw(2) <<"how many gigabytes are in your monthly hotspot plan?";
    cin >> gigabytes;

    cout<<"What type of quality music would you like to stream: low(1), medium(2), or high(3)";
    cin >> quality; 

   switch (quality)
   {
    // if they are planning to stream low quality music, the switch goes to case(1) and outputs how many hours the user can stream with their hotspot plan 
    case(1):
    hourslow = gigabytes * 1000 / 43.2;
    cout << setw(3) << "You can stream " << hourslow << " hours of low quality music";
    break; 

    // if they are planning to stream medium quality music, the switch goes to case (2) and outputs how many hours the user can stream with their hotspot plan
    case(2):
    hoursnormal = gigabytes * 1000 / 72;
    cout << setw(3) << "You can stream " << hoursnormal << " hours of normal quality music";
    break; 

    // if they are planning to stream high quality music, the switch goes to case(3) and outputs how many hours hte user can stream with their hotspot plan. 
    case(3):
    hourshigh = gigabytes * 1000 / 115.2;
    cout << setw(3) << "You can stream " << hourshigh << " hours of high quality music";
    break; 

    // if the input is not 1, 2, or 3, the program asks the user to input a valid number, either 1, 2, or 3. 
    default:
    cout<<"Please input a valid input either 1, 2, or 3";
   }
/*
how many gigabytes are in your monthly hotspot plan?100
What type of quality music would you like to stream: low(1), medium(2), or high(3)3
You can stream 868.056 hours of high quality music%     
*/
    return 0;
}
