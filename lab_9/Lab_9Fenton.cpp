/*
ALex Fenton
June 4, 2026
Lab 9 switch-case statement 
*/

#include<iostream>
using namespace std;
int main (){

    cout<< "\n---example 1: switch case statement "<<endl;
    //ask the uer to select a day-off (number)
    //declare variables 
    int dayoff =0;

    //collect dayoff 
    cout << "Select a day off:"<<endl;
    cout<<"1 for Monday "<<endl;
    cout <<"2 for Tuesdsay"<<endl;
    cout<< "3 for Wednseday"<<endl;
    cout <<"4 for Thursday"<<endl;
    cout <<"5 for Friday"<<endl;
    cin>> dayoff,

    //switch-case statment 
    switch (dayoff)
    {
      case 1:
      cout<<"You are off Monday"<<endl;
      break;
      case 2:
      cout<<"You are off Tuesday"<<endl;
      break;
      case 3:
      cout<<"You are off Wednesday"<<endl;
      break;
      case 4:
      cout<<"You are off Thursday"<<endl;
      case 5:
      cout<<"You are off Friday"<<endl;
      break;
      default:
      cout<<"Wrong dayoff!"<<endl;
      break;

    }
cout <<"\n---example 2: Secect a gender "<<endl;
//selecy gender using character
//declare variables
char gender;
string selectedgender = "";

//collect the gender 
cout<<"Select a gender";
cout<<"m for male "<<endl;
cout <<"f for female"<<endl;
cout << "o for other"<<endl;
cin>>gender;

//switch-case
switch (gender)
{
    case'm' : case 'M';
    selectedgender = "MALE";
    break;
   
    case 'f': case 'F';
    selectedgender = "FEMALE";
    break;
    
    case 'o': case 'O';
    selectedgender = "OTHER";

    default :
    selectedgender="UNKNOWN";
    break;

}
//print result 
cout<<"Selected gender =" <<selectedgender<<endl;
cout<< "\n -----EXERCISE---"<<endl;
return 0;



//LAB EXERCISE 9

    // declare variables
    double number = 0;
    char choice;

    // collect number
    cout << "Enter a number: ";
    cin >> number;

    // ask user if number should be doubled
   
    cout << "Do you want to double the number?" << endl;
    
    cout << "Y for Yes" << endl;
    
    cout << "N for No" << endl;
    
    cin >> choice;

    // switch-case statement
    switch(choice)
    {
        
        
        case 'Y':
        case 'y':
            number = number * 2;
            break;

        case 'N':
        
        case 'n':
            number = number;
            break;

        default:
           
        number = 0;
            break;
    }

    // print result
    cout << "The number is set to " << number << endl;

    return 0;
}


