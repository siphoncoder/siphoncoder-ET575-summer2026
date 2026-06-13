/*
Alex Fenton
LAb 15 
June 2026, 2026
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

// Global constant
const float GRAVITY = 9.8;

// Function prototypes
int randomNumber();
float calculateDistance(int time);
void displayResult(int time, float distance);

int main()
{
    int time;
    float distance;

    // Seed random number generator
    srand(time(0));

    time = randomNumber();

    distance = calculateDistance(time);

    displayResult(time, distance);

    return 0;
}

// Function 1
int randomNumber()
{
    int number;

    number = rand() % 100 + 1;

    return number;
}

// Function 2
float calculateDistance(int time)
{
    float distance;

    distance = 0.5 * GRAVITY * pow(time, 2);

    return distance;
}

// Function 3
void displayResult(int time, float distance)
{
    cout << "The falling distance in "
         << time
         << " seconds is "
         << distance
         << " meters."
         << endl;
}