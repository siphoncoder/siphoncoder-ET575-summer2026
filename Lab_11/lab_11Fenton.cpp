/*
Alex Fenton
June 9,2026
Lab 11 , do-while loop, nested loop
*/

#include<iostream>
using namespace std;
int main(){
cout << "\n---exampe 1: do-while---"<<endl;
//do block ---> check if a number is even or odd 
// while block ---> will run if the user wants by typing 'y' 'Y'
int num;
char choice;
do {

cout<<"Enter a number:";
cin>>num;
if(num%2==0 && num !=0){
    cout <<"EVen number"<<endl;
}
else if (num==0){
    cout<< "Number is zero"<<endl;
}
else {
    cout << "Number is odd"<<endl;
}

cout<<"Do you want another run ?";
cin>>choice;


} while (choice =='y'|| choice =='Y');
cout<<"End of program"<<endl;

cout<< "\n----example 2 : loop with a break statement---"<<endl;
// break statement terminates or exits the entire loop iteration
//use loop to add positive numbers, if a negative number is enetered , the loop will end. 
int sumnumbers =0;
int n;
while (true){
cout <<"Enter a positive number :";
cin >>n;

if(n>0){
sumnumbers += n;
}
else {

   break; 
}
}
cout <<"End of while loop. Total sum=" <<sumnumbers<<endl;

cout <<"\n===example 3 : loop with a continue statement ---"<<endl;
//print 1 to 9 inclusive. add all numbers except 5 

int sumall =0;
for (int m =1; m<=9; m++){

    cout <<m<<"\t";
    sumall += m;
}
cout <<endl<<"Total sum =" <<sumall<<endl;
cout <<"\n---example4: loop with conditional statement---"<<endl;
//declare variables
int count =0;
int i =10;
while(i >5){
    i--;
    if (i%2==0){
count +=i;
continue;

    }
count -=3;
}
cout <<"Final count is ="<<count<<endl; //cout--> Final count is =5
   
/*
table to analyze the flow of a loop with conditional statement
loop iteration 
*/


return 0;
}