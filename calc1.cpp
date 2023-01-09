#include <iostream>
#include<string>
using namespace std;

int main(){
  int x, y, z, ch;
  cout << "Enter numbers: ";
  cin >> x >> y;
  cout << "Choose an operator";
  cout << "\n1. Addition";
  cout << "\n2. Subtraction";
  cout << "\n3. Multiplication";
  cout << "\n4. Division";
  cin >> ch;
  
  switch(ch){
    case 1:{
      cout << "The Sum is: ";
      z = x + y; 
      cout << z << endl;   
      break;   
    } 
    case 2:{
      cout << "The Difference is: ";
      z = x - y; 
      cout << z << endl;
      break;      
    } 
    case 3:{
      cout << "The Product is: ";
      z = x * y; 
      cout << z << endl;
      break;      
    } 
    case 4:{
      cout << "The Quotient is: ";
      z = x / y; 
      cout << z << endl;
      break;      
    } 
    default:
      cout << "Invalid Try Again";
      break;
  } 
  char ans = 'N';
  do{
    cout<< "Do you want to continue (Y/N)?\n";
    cout<< "You must type a 'Y' or an 'N' :";
    cin >> ans;
    }
  while ((ans == 'Y') || (ans == 'y'));
  return 0;
}