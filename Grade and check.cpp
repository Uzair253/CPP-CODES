#include <iostream> //standard i/o header file
using namespace std; 
int main() 
{ 
  char grade; //initilization for char
  cout<<"Enter your grade:"<<endl; //shows output to ask user for input
  cin>>grade; //take user input
  
  //Now We apply If Else condition. if the user type letter either in capital or in small then it will give output with respect to condition
  
        if (grade=='A'|| grade=='a') //If user type A the this condition apply
             cout<<"Your average must be between 90 – 100"<<endl;
	     
  
       else if (grade=='B' || grade=='a') //If user type B the this condition apply
             cout<<"Your average must be between 80 - 89"<<endl;
	     
      
       else if (grade=='C' || grade=='c') //If user type C the this condition apply
             cout<<"Your average must be between 70 - 79"<<endl;
	     
  
       else if (grade=='D' || grade=='a') //If user type D the this condition apply
              cout<<"Your average must be between 60 - 69"<<endl;
     
     
	     else //if user type any other then code will shows this
	            cout<<"Your average must be below 60";
              
	      
	return 0;
  
		}