#include <iostream>
#include <iomanip>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {

    int choice;
    double temperature;
    double result;

    cout << "Choose conversion type:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Fahrenheit to Kelvin" << endl;

    cout << "\nEnter choice: ";
    cin >> choice;

    cout << fixed << setprecision(1);

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;

        result = celsiusToFahrenheit(temperature);

        cout << temperature << "°C is "
             << result << "°F" << endl;
    }
    else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;

        result = (5.0 / 9.0) * (temperature - 32);

        cout << temperature << "°F is "
             << result << "°C" << endl;
    }
    else if (choice == 3) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;

        result = temperature + 273.15;

        cout << temperature << "°C is "
             << result << " K" << endl;
    }
    else if (choice == 4) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;

        result = (temperature - 32) * (5.0 / 9.0) + 273.15;

        cout << temperature << "°F is "
             << result << " K" << endl;
    }
    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

/*
1. Does the AI code use C++ concepts you're unfamiliar with? Explain.

No. The code uses concepts covered in class such as functions,
variables, input/output statements, arithmetic expressions,
and if-else statements. The only new item was setprecision(),
which is used to control the number of decimal places displayed.

//2. Are there any issues or improvements you noticed? Explain.

The code worked correctly. One improvement would be to create
separate functions for all conversion types instead of only
Celsius to Fahrenheit. This would make the code more organized
and easier to maintain.

//3. What methods did you use to test if the AI code was working as it should? Explain.

I tested the program using known temperature conversions.
For example, 20°C converted to 68°F, 98.6°F converted to 37.0°C,
and 0°C converted to 273.15 K. The outputs matched the expected
results, confirming the calculations were correct.


//What did the AI get right or wrong? Explain.
The AI correctly generated the temperature conversion formulas and used a function for Celsius-to-Fahrenheit conversion. It also used conditional statements correctly. The only thing that needed attention was understanding every part of the code before using it.

Did the AI code work the first time? If not, how did you fix it?
The code worked correctly after testing. I verified the formulas using known temperature conversions to ensure the outputs were accurate.

How can AI make programming easier or harder for beginners?
AI can make programming easier by generating code examples, explaining concepts, and helping debug errors. However, it can make learning harder if beginners copy code without understanding how it works.

How do you ensure AI doesn't replace your own thinking in problem-solving?
I use AI as a tool for guidance and explanations, but I still test the code, review the logic, and make sure I understand each line before submitting or using it.