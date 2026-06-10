/*
Alex Fenton
June 10,2026
Lab 12, nested loops
*/
#include<iostream>
using namespace std;

int main (){
cout<< "\n---example 1 : nested while loop---"<<endl;
// one run of the outer lop will have complete cycle of the inner loop
cout<<"OUTER loop="<<i<<endl;
// inner loop, print from 1 to 5
cout<<"\t\t INNER loop"<<endl;

int j =0;
while (j++ <5){
cout<<"\t"<<j;
cout <<endl;
}
cout <<"\n---example 2: nested for loop---"<<endl;
//cinema seats arrangement 
//row and seats per row (column)
int row =0, seats =0;
cout<<"Enter the number of rows:";
cin>>row;
cout <<"Enter the number of seats per row:";
cin>>seats;

for (int r =1; r< row; r++){

    for (int c =1; c< seats; c ++){
cout <<"Row" <<r<<"seat"<<c<<"\t";

  
}
cout <<endl;

}

cout <<"\n---example 3: graphing using nested loops---"<<endl;
const int GRAPHSIZE =9;
for (int row =1; row<=GRAPHSIZE; col++){
cout<<"  .  ";
if (col==5)
cout <<"  x. ";
else
cout << "  . ";
}
cout<<endl;

cout<< "\n--- example4: graphing H using nested loops --- "<<endl;
int dimension =10;
for (int col =1; col <=dimension; col++);
if( row>=3 && row<=8 && col>=3 && col<=4)
cout<< " %";


else 
cout<<" . "

cout<<endl; 

return 0; 
}