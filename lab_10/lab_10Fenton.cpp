/*
Alex Fenton
Lab 10, loop mechanism
June 9, 2025
*/
#include <iostream>
using namespace std;

int main(){

cout <<"\n --- example 1: for loop as counter"<<endl;
/*
for loop has three main statement for (intitial action; boolean expression; update action)
*/
   
// use for a loop to print Hello 5 times
for (int x =1; x<=5; x++){

    cout <<"Hello" <<x<<endl;
}
cout << "End of for loop. Value of x = " <<x<<endl;

cout <<"\n---example 2 : for loop as a counter with different steps "<< endl;
// print from 1 to 9 step 2
for (int x =1; x<=9; x+=2){
cout <<x<<"\t";

}
cout <<"\n --example 3: for loop as a decrement counter with different steps"<<endl;
// print from 10 to -10 step 3 
for (int x =10; x> = -10; x=-3)[

    cout <<x<<"t";


]
cout<<endl;

cout<<"\n--- example 4: for loop with conditional statement "<<endl;
// count the numbers that are multiplied of 5 between -20 and 20 step 4 
int counter =0;
for (int x= -20; x <=20; x+=4){
cout <<x<<"\t";
if (x%5==0 && ! =0)
if (x>0) sumpositive += x;
 counter ++;

}
cout <<endl<<"numbers that are multiplied of 5 = "<<counter<<endl;
cout <<"sum of all positive number = "<<sumpositive<<endl;

cout <<"\ n---example 5: while loop as a counter"<<endl;
// while loop to print from 1 to 5, inclusive 
int n =1;
while(n<=5){

    cout<<n<<"\t";
    n++;


}

cout<<endl;
n=1;
while(n++ <=5){

    cout<<n<<"\t";
}
cout <<"\n---example 6: while loop to alidate an input"<<endl;
//while loop to recollect a number
// accept numbers between 1 and 9
int number =0;
cout<<"Enter a number:";
cin>>number;

cout<<"Collected number=" <<number<<endl;

// while loop to recollect a number that is not between 1 and 9
while (!(number >=1 && number<=9)){
cout <<"Enter a new number between 1 and 9";


}
   cout <<"Collected number =" <<number<<endl;
   cout <<"\n---- EXERCISE1---"<<endl;

cout << "\n--- Exercise: Decrement Counter ---" << endl;

    // counter for multiples of 2
    int counter = 0;

    // decrement from 21 to -21 by 5
    for (int x = 21; x >= -21; x -= 5){

        cout << x << "\t";

        // check if x is a multiple of 2
        if (x % 2 == 0){
            counter++;
        }
    }

    cout << endl;
    cout << "Number of multiples of 2 = " << counter << endl;

    
}

cout <<"\n---Exercise 2 ---->>"endl;

cout << "\n--- Exercise: For Loop with User Input ---" << endl;

    // declare variable
    int start = 0;

    // collect starting value
    cout << "Enter the starting value: ";
    cin >> start;

    // for loop from user value to 30, step 4
    for (int x = start; x <= 30; x += 4){

        cout << x << "\t";
    }

    cout << endl;
}
return 0;


}


