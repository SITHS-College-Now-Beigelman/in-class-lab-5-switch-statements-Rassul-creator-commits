// Rassul Khalizov
// Lab 5
// 10/14/24

#include <iostream>
using namespace std; 
#include <cstdlib>
#include <ctime>

/*
int main() {
    srand(time(0)); // random number generator

    int North = 0, East = 0; // Starting point (0, 0)

    for (int i = 0; i < 25; ++i) {
        int direction = rand() % 4; // Random number between 0 and 3

        switch (direction) {
            case 0: 
            North++; 
            break; // Move north
            
            case 1: 
            North--; 
            break; // Move south
            
            case 2: 
            East++; 
            break; // Move east
            
            case 3: 
            East--; 
            break; // Move west
        }

        cout << "Step " << i + 1 << ": "; // Adds 1 to i every time the program runs so that the program runs 25 times
        if (North > 0) cout << North << " blocks north, "; // if North is positive, the program prints how many blocks North the robot has moved
        else if (North < 0) cout << -North << " blocks south, "; //if North is negative, the program prints how many blocks South the robot has moved
        else cout << "0 blocks north/south, "; 

        if (East > 0) cout << East << " blocks east" << endl; //if East is positive, the program prints how many blocks East the robot has moved
        else if (East < 0) cout << -East << " blocks west" << endl; //if East is negative , the program prints how many blocks West the robot has moved
        else cout << "0 blocks east/west" << endl;
    }
    
    Step 1: 0 blocks north/south, 1 blocks east
Step 2: 0 blocks north/south, 0 blocks east/west
Step 3: 1 blocks south, 0 blocks east/west
Step 4: 2 blocks south, 0 blocks east/west
Step 5: 2 blocks south, 1 blocks west
Step 6: 1 blocks south, 1 blocks west
Step 7: 1 blocks south, 2 blocks west
Step 8: 1 blocks south, 1 blocks west
Step 9: 0 blocks north/south, 1 blocks west
Step 10: 1 blocks north, 1 blocks west
Step 11: 0 blocks north/south, 1 blocks west
Step 12: 1 blocks south, 1 blocks west
Step 13: 0 blocks north/south, 1 blocks west
Step 14: 1 blocks south, 1 blocks west
Step 15: 1 blocks south, 0 blocks east/west
Step 16: 1 blocks south, 1 blocks west
Step 17: 1 blocks south, 2 blocks west
Step 18: 1 blocks south, 1 blocks west
Step 19: 0 blocks north/south, 1 blocks west
Step 20: 1 blocks north, 1 blocks west
Step 21: 1 blocks north, 2 blocks west
Step 22: 2 blocks north, 2 blocks west
Step 23: 1 blocks north, 2 blocks west
Step 24: 0 blocks north/south, 2 blocks west
Step 25: 1 blocks north, 2 blocks west
    */

int main() {
    srand(time(0)); // random number generator

    const int targetEast = 2;
    const int targetNorth = 3;
    const int numRuns = 10;
    int totalSteps = 0;
    int run = 0; 

    for (int run = 0; run < numRuns; ++run) {
        int East = 0, North = 0; // Starting point
        int steps = 0;

        while (East != targetEast || North != targetNorth) {
            int direction = rand() % 4; // Random number between 0 and 3

            switch (direction) {
                case 0: North++; break; // Move north
                case 1: North--; break; // Move south
                case 2: East++; break; // Move east
                case 3: East--; break; // Move west
            }

            steps++;
        }

        cout << "Run " << run + 1 << ": Reached destination in " << steps << " steps." << endl;
        totalSteps += steps;
    }

    double averageSteps = static_cast<double>(totalSteps) / numRuns;
    cout << "Average number of steps after " << numRuns << " runs: " << averageSteps << endl;

    /*
    Run 1: Reached destination in 313 steps.
Run 2: Reached destination in 2391 steps.
Run 3: Reached destination in 1486861 steps.
Run 4: Reached destination in 11 steps.
Run 5: Reached destination in 215 steps.
Run 6: Reached destination in 469 steps.
Run 7: Reached destination in 1579 steps.
Run 8: Reached destination in 925 steps.
Run 9: Reached destination in 60909 steps.
Run 10: Reached destination in 351 steps.
Average number of steps after 10 runs: 155402
    */
    return 0;
}




