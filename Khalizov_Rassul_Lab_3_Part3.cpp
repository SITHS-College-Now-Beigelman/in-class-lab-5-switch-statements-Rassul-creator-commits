// Rassul Khalizov
// 10/08/24
// Lab 5 Part 2

#include<iostream> 

using namespace std;

#include<string> 

#include<cstdlib> 

#include<iomanip> 

int main()
{
    int direct;
    int North;
    int East; 
    int runs;
    int average;  
    int numberofruns; 
/*
    srand(time(0));
    
    East = 0;
    North = 0; 


    for (int i = 0 ; i < 25; i++) {
        
        direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable 
        // 1 means North, 2 means South, 3 means East and 4 means West 
        
        cout << "Rass"; 

        switch (direct)
        {
        case 1: 
        North = 1;
        break;

        case 2:
        North = -1;
        break;

         case 3:
        East = 1;
        break;

        case 4:
        East = -1;
        break;
        }

        if (North > 0)
        cout << North << " block (s) North "; 

        else if (North < 0)
        cout << -North << " block (s) South ";        

        if (East > 0)
        cout << East << " block (s) East ";

        else if (East < 0)
        cout << -East << " block (s) West ";

        if (East == 0 && North == 0)
        cout <<"Back to starting point"; 

    
        Rass1 block (s) West 
Rass1 block (s) North 1 block (s) West
Rass1 block (s) North 1 block (s) West 
Rass1 block (s) South 1 block (s) West 
Rass1 block (s) South 1 block (s) West 
Rass1 block (s) South 1 block (s) West
Rass1 block (s) North 1 block (s) West 
Rass1 block (s) North 1 block (s) East 
Rass1 block (s) North 1 block (s) East 
Rass1 block (s) South 1 block (s) East 
Rass1 block (s) South 1 block (s) West 
Rass1 block (s) South 1 block (s) West 
Rass1 block (s) South 1 block (s) East 
Rass1 block (s) North 1 block (s) East 
Rass1 block (s) South 1 block (s) East 
Rass1 block (s) South 1 block (s) West 
Rass1 block (s) South 1 block (s) West 
Rass1 block (s) South 1 block (s) West
Rass1 block (s) South 1 block (s) West 
Rass1 block (s) South 1 block (s) East 
Rass1 block (s) North 1 block (s) East 
Rass1 block (s) North 1 block (s) East 
Rass1 block (s) South 1 block (s) East 
Rass1 block (s) South 1 block (s) East 
Rass1 block (s) South 1 block (s) East    
        */
       

    for (int times = 0; times < 10; times++ ){
        East = 0;
        North = 0; 
        runs = 0; 
            
        while (North != 3 || East != 2){
            runs++;
            direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable 
        // 1 means North, 2 means South, 3 means East and 4 means West 
            switch (direct)
                {
                case 1: 
                North++;
                break;

                case 2:
                North--;
                break;

                case 3:
                East++;
                break;

                case 4:
                East--;
                break;
                }
            cout<< runs << " runs needed";
            numberofruns = runs + runs; 
        }
    }
        average = numberofruns / 10;
        cout<< average << "moves need on average in ten runs";
    return 0; 

    /*
    1runs to get to 2 East, 3 North
    1runs to get to 2 East, 3 North
    1runs to get to 2 East, 3 North
    1runs to get to 2 East, 3 North
    1runs to get to 2 East, 3 North
    1runs to get to 2 East, 3 North
    1runs to get to 2 East, 3 North
    1runs to get to 2 East, 3 North
    1runs to get to 2 East, 3 North
    1runs to get to 2 East, 3 North
    0moves need on average in ten runs%                                                                                                                              
    */
}
