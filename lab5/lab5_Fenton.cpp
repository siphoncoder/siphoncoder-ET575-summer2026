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

cout<<"\n--- example 10: combinate mehtods --- " <<endl;
//add strng m in username starting NEVER 
cout<<m<<endl;
//find the index for 123 
int index123 = suername.find("123");
//add value of string m before index123
username.insert(index123,m);
cout <<username<<endl;

cout<<"\n --- practise exam 1 ----"<<endl;
string  password  = "peterpan123";
int a = password.length();
int b = a- 2;
password.replace(b,3,"NONE");
cout<<n;

cout << " LAB EXERCISE" <<endl;
 //Ask user for a word 
 string new_word;
 cout<< "Type a word";
 cin >> new_word;

 //Print the 4th character 
 cout<< "THe 4th character is :" <<new_word[3]<<endl;

 //Find the print length 
 int word_length = new_word.length();
 cout<<"The length of the word is:"
 << word_length<< "Characters." <<endl;

 //Replace 3 characters startin from the 2nd character
 new_word.replace(1, 3, "---$---");
 cout<< "After replacement:" <<new_word<<endl;

 //Remove 2 charcters from the end 
 int end_index = new_word.length() -2;
 new_word.erase(end_index, 2);
 cout<< "After removing two charcters from the end:"
<< new_word <<endl;
return 0;
}
