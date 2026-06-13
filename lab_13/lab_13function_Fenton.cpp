/*
Alex Fenton
June , 2026
Lab 13 introducton to function
*/

#include <iostream>
using namespace std;

//example 1 : void function
//void function is a function that dosent return a value

void printhi(){
cout <<"Hello Function !" <<endl;
return ; // for a void  funct

}
//example 2 : void function with parameter 
//function that prints a name with a message
//the name is passed to the function 
void greeting (string username){
    cout<<"Good morning "<<username<<endl;
}