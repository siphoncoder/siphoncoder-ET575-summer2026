/*
Alex Fenton
June 3, 2026
lab 7 : control flow 
*/

#include<iostream>
using namespace std;
int main (){

cout << "\n --- example 1: bool variable "<<endl;
//bool variable to check if a number is positive //declare variable 
int n;
bool checkpositives // bool values are 0(false) or 1 (true)

// collect number 
cout<<"Enter a number:";
cin>>n;

//check if a number is positive
checkpositive = n>0;

//print results
cout<< "Is number "<<n<<" positive ?" <<checkpositive<<endl;

//update checkpostiive 
checkpositive = '%';
//for a bool value that is not 0 or 1, the return is always 1 
cout<<"updated checkpositive=" <<checkpositive<<endl;

cout<<\n-- example2: if statemtent" <<endl;
// check if n is zero
int c = 10;
if(n==0){
cout<<"n is zero!";
c += 20;

}
cout<< "\t valuue of c = "<<c<<endl;
cout << " \ n---- example 3 : if-else statement" <<endl;
//if-else behaves as a on/off switch 
//check if a number is even or odd. Evn numbersd are divsible by 2, meaning that when the nuber is divided by 2, the remainder is 0.

if(n%2 ===0){
cout<<n<< " is and EVEN number" endl;

}
else{
cout<<n<<" is an ODD number"<<endl;

}
cout<<"\n---example 4: if-else statement"<<endl;
/*
// Ulatraviolet : less than 379 nm and greater than or equal to 10 nm
// Blue : 380 nm to 520 nm
//Green: 521 nm to 590 nm
//Red: 591 nm to 740 nm
// Infrared : more than 741 nm
// ANy wavelength less than 10 nm is undefined 

*/
//declare varianbles 
int wavelength =0;
// update wavelength 
cout<<"Enter a wavelength (nm);
cin>>wavelength;
// multiway
if (wavelength<379 && wavelength>=10 )
emittedlight = "ULTRAVIOLET";
else if (wavelength <=520&& wavelength>=380){emmittedlight=}


//print result 
cout<<wavelength<<"nm emits " <<emittedlight<< "light "<<endl;
cout <<"\n ---example 5: conditional operator---"<<endl;
//conditional operator : three operands ---> condiiton ? expression1 (true ): expression 2 (false)
/*
example 3)
if (n%2==0){
cout<<n<< "is an EVEN number"<<endl;
}
else{
cout <<n<<" is an ODD number"<< endl;



*/
cout <<n<<(n%2==0)? "is an EVEN number ": "is an ODD number";

cout<<"\n ---example 6: conditionl operator---"<<endl;
//cehck if n is greateer than 10 , if n is greater than 10 , set the max value to n 
int max =10;
// conditional operands to check if n is greater than max 

// print result 
cout<<"Is n greater than 10?"<<checkmax<<endl;
//Mike's answer 
cout << ((n>10))? "N is greater than 10" : "N is not greater than 10");


cout<<"\n---example 7: nested conditional statement ---" <<endl;
//check if a number n is positive (even or odd) , negative (even or odd) or zero 
//multiway statement 
if (n>0 && n%2 !==0){
cout <<"positive and even number "<<endl;

}
else if(n<0 && n%2==0){
cout <<"Positive and odd number"<<endl;
}
else if (n<0 && n%2==0){
    cout<<"negative and even number"<<endl;
}
else if (n<0 && no %2!=0){

cout<< "negative and odd number"<<endl;
}
else {
    cout<<"zero"<<endl;
}
*/

if (n>0){
    if (n%2==0)
    cout <<"positive and even number"<<endl;
    else
    cout<< "Positive and odd number"<<endl;
}
else if (n<0){

    if (n%2==0)
    cout<<"negative and even number"<<endl;
    else 
    cout<<"negative and odd number"<<endl;
}
else{
    cout <<"zero"endl;
}
cout <<"\n---LAB EXERCISE---"<<endl;
return 0;


}