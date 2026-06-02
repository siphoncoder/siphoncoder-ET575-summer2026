/* 
Alex Fenton 
June 2, 2026
Lab 5 : String methods
*/

#include<iostream>
using  namespace std;
include <string>

int main(){
cout << "\ n --- example 1: string idenxing " << endl;
// characters withing a string is accessible by using an index number
// index number starts from 0 (left- most)
string nusername = "peterpan123";
cout<< " The fourth character of username = "<<username[3]<<endl;
// at () method can be used to acess a character in a string 
cout<< " The sixth character of username=" <<username.at(5)endl;


cout << "\n--- example 2: length of a string " <<endl;
// length metbhod shows the number of charcters in a string including the white space 
int num_username = username.length();

cout<< " There are" << num_username<<" characters in username"<<endl;

cout<< "\n--- example 3: adding strings" <<endl;
// strings can be concatenated or addes by usijng the + operator 
string n = "Never";
string m = "Again";
cout<<n + m <<endl;

cout<<"\n ---example 4: Substracting character from a string " <<endl;
//substr() method extracts characteres from a string
//substr (x,y) ---> x= starting index, y=amount of charcters to be extracted from index x 
cout<<"Extracted word =" <<n.substr(1,4)<<endl;

cout<<"\n---example 5: inserting charcter/s into a string "<endl;
// insert() method insert charcaters into a string 
//insert (x,y)--> x = inserting index position , y = characters to be inserted 
// from example, for insert LAND in between the username = "peterLANDpan123"
cout <<username<<endl;
username.insert(5, "LAND"); //automatically update the string value
cout<<username<<endl;

cout<<"\n---example 6: add character/s to the end of the string "<<endl;
// append () method adds characters to the end of a string 
// append(x)---> x = characters to be added to the end of the string 
username.append("END"); //automatically update the string value 
cout<<username<<endl;

cout<< "\n---example 7: replacing characters in a string "<<endl;
//replace ()method replaces characters in a string 
//replace (x,y,z) --> x= index where the replacement start, y = number of charcteres t be replaced from x , z = new characters of the replacement 
string name = "Peter Pan";
//replace 'eter ' with 'atrick'
name.replace(1, 4,"atrick");
cout<<name<<endl;

cout << "\ n ---example 8: erasing characters from a string " <<endl;
//erase () method erases characters from a string 
// erase(x,y)---> x = starting index where characters will be removed, y = amount of characters to be removed from index x 
//erase the word 'an' from 'Patrick Pan'
name.erase(9,2);
cout<<name<<endl;

cout<< "\n --- example 9: find the index of characters in a string "<< endl;
//find ()method return to the index of a found character 
//find (x)--> x=character/s  to be found 
cout<<username<<endl;
int index_r =username.find("r");
cout<< "Index of letter r =" <<index_r<<endl;
cout<< "Index of NEVER=" <<username.find("NEVER");
cout<< "Index of NEVER=" <<never<<endl;
return 0;
}