//Afham Bashir. Assignment 9  
#include <iostream>
#include <string> 
#include <iomanip>
using namespace std; 

int main (){
  string salsa_type[]= {"Mild", "Medium", "Sweet", "Hot", "Zesty"};   // string array containing the name of all 5 types of salsa 
  int  salsa_jars[5];  // string of 5 integers that will contain number of each type sold
  int sum =0;  //declares and initializes the sum of the jars to 0. 
  int max =0;  // declares and initialies the max number of jars.
  int max_type;  //will contain the index number of best max jars; 

  cout << "How many salsa jars of Mild Sold? ";           
  cin >> salsa_jars[0];   // outputs prompts for each respective type of salsa type and its jars solds and inputs that integer value into the salsa_ jar array at its respective index. 
  cout << "\nHow many salsa jars of Medium Sold? ";
  cin >> salsa_jars[1]; 
  cout << "\nHow many salsa jars of Sweet Sold? "; 
  cin >> salsa_jars[2];
  cout << "\nHow many salsa jars of Hot Sold? ";
  cin >> salsa_jars[3];
  cout << "\nHow many salsa jars of Zesty Sold? ";
  cin >> salsa_jars[4];

  for (int i=0; i<5; i++){  
    sum+=salsa_jars[i]; 
  }                      // for loop that sums the total number of all jars sold

  cout << "\nSalsa Sales Report\n";  
  cout << "------------------\n";       
  for (int i=0;i<5;i++){                   
     cout << setw(15)<< left<< salsa_type[i]<< salsa_jars[i]<<endl;}  //for loop to output each jar type from the salsa type string array with the corresponding index spot on the salsa jar array inorder to output all the types sold and their respective amount of jars sold. 
  cout << "------------------\n";
  cout << "Total"<<right<< setw(13) <<sum<<endl;  //outputs the total. 

  for(int i = 0; i < 5; i++) {
   if (salsa_jars[i] > max) {
       max = salsa_jars[i];
        max_type = i;}      
      }    // for loop that goes through all amounts of jar types to find the max via an if statement that assigns max a value of the index if the value at that index spot is higher than the value of the max before. Then gives that index number of the max to the max type number

cout << "\nBest selling Procduct is " <<salsa_type[max_type]<<endl; //outputs the highest selling salsa type, and uses max type variable, which is determined using the salsa jar array, for the corresponding index number on the salsa type array. 

 return 0;
}