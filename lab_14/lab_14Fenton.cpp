#include <iostream>
using namespace std;

// Function prototypes
int inputMarks();
int totalMarks(int m1, int m2, int m3);
float calculatePercentage(int m1, int m2, int m3);
char determineGrade(float percentage);
void displayResult(int m1, int m2, int m3, char grade);

int main()
{
    int mark1, mark2, mark3;
    float percentage;
    char grade;

    cout << "Enter marks for Subject 1: ";
    mark1 = inputMarks();

    cout << "Enter marks for Subject 2: ";
    mark2 = inputMarks();

    cout << "Enter marks for Subject 3: ";
    mark3 = inputMarks();

    percentage = calculatePercentage(mark1, mark2, mark3);

    grade = determineGrade(percentage);

    cout << "\nPercentage = " << percentage << "%" << endl;

    displayResult(mark1, mark2, mark3, grade);

    return 0;
}

// Input and validate marks
int inputMarks()
{
    int mark;

    cin >> mark;

    while (mark < 0 || mark > 100)
    {
        cout << "Invalid mark! Enter a value between 0 and 100: ";
        cin >> mark;
    }

    return mark;
}

// Calculate total marks
int totalMarks(int m1, int m2, int m3)
{
    return m1 + m2 + m3;
}

// Calculate percentage
float calculatePercentage(int m1, int m2, int m3)
{
    int total;

    total = totalMarks(m1, m2, m3);

    return (total / 300.0) * 100;
}

// Determine grade
char determineGrade(float percentage)
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else
        return 'F';
}

// Display final result
void displayResult(int m1, int m2, int m3, char grade)
{
    cout << "With marks "
         << m1 << ", "
         << m2 << ", "
         << m3
         << ", the GRADE is "
         << grade << endl;
}


