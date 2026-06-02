#include <iostream>
#include <string>

using namespace std;

int main() {
    string message;

    cout << "---------------- STRING EXERCISE ----------------" << endl;
    cout << "Enter a sentence: ";

    getline(cin, message);

    // First and last character
    cout << "First character: " << message.front() << endl;
    cout << "Last character: " << message.back() << endl;

    // Length
    cout << "Length: " << message.length() << " characters" << endl;

    // Find and replace
    size_t position = message.find("student");

    if (position != string::npos) {
        message.replace(position, 7, "engineer");
    }

    cout << "\nAfter replacement:" << endl;
    cout << message << endl;

    // Insert at beginning
    message.insert(0, "*** ");

    cout << "\nAfter insertion:" << endl;
    cout << message << endl;

    // Append to end
    message.append(" ***");

    cout << "\nFinal sentence:" << endl;
    cout << message << endl;

    cout << "-------------------------------------------------" << endl;

    return 0;
}

//Q1) Was the code correct?
//Yes. The code correctly asks fora sentence, stores it in message prints the first andlast character, finds the length, replaces "student" with "engineer", inserts text at the beginning, appends text at the end, and prints the final sentence.

//Q2) Was it readable properly commented

//Yes. The code is readable because it uses clear variable names like message, spaces between sections, and comments explaining important steps such as finding/replacing, inserting, and appending.

//Q3) Were you able to explain each line of code?
//Yes. Each line can be explained because the program uses clear C++ string methods, input/output statements, and simple logic with an if statement.

//Q4) Did it use the same programming concepts we learned in class?

//Mostly yes. It used concepts like #include, using namespace std, int main(), string, cout, getline, .length(), .replace(), .insert(), and .append().

//Question 5 : Code output : 

---------------- STRING EXERCISE ----------------
Enter a sentence: I am a student 
First character: I
Last character:  
Length: 15 characters

After replacement:
I am a engineer 

After insertion:
*** I am a engineer 

Final sentence:
*** I am a engineer  ***