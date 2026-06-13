/*
Alex Fenton
Lab 13 
June 11, 2026
*/

using namespace std;

int main(){

    cout<<"\n---example 1: void function"<<endl;
    
   printhi() ;
   printhi();
   printhi();
    
   cout << "\n---example 2 : void function with arguments " <<endl;
   greeting ("Peter");
   string user = "Annie";
   greeting (user);
    
    // Function prototypes
int getNumber();
void printNumbers(int number);
int countNotMultipleOf3(int number);
void displayResult(int number, int count);

int main()
{
    int number;
    int count;

    number = getNumber();

    printNumbers(number);

    count = countNotMultipleOf3(number);

    displayResult(number, count);

    return 0;
}

// Function 1
int getNumber()
{
    int number;

    cout << "Enter a number between 1 and 10: ";
    cin >> number;

    while (number < 1 || number > 10)
    {
        cout << "Invalid input. Enter a number between 1 and 10: ";
        cin >> number;
    }

    return number;
}

// Function 2
void printNumbers(int number)
{
    cout << "\nNumbers from " << number << " to 15:" << endl;

    for (int i = number; i <= 15; i++)
    {
        cout << i << " ";
    }

    cout << endl;
}

// Function 3
int countNotMultipleOf3(int number)
{
    int count = 0;

  for (int i = number; i <= 15; i++)
    {
        if (i % 3 != 0)
        {
            count++;
        }
    }

    return count;
}

// Function 4
void displayResult(int number, int count)
{
    cout << "\nFrom " << number
  << " up to 15, there are "
  << count
  << " number/s that are not multiplied by 3."
      << endl;
}
    return 0;




}