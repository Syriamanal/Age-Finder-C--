#include <iostream>
#include <string>
using namespace std;


int main()
{
    
int age;

//This will ask you to enter your age...
cout << "Enter Your age..." << endl;
    cout << endl;
cin >> age;
cout << "You have entered  " << age << endl;

//This will be the output...
if(age == 18)
{
    cout << endl;
    cout << "You are a teenager" << endl;
}
else if(age >= 18)
{
    cout << endl;
    cout << "You are older than 18!"; 
}
else if(age == 17)
{
    cout << endl;
    cout << "One more year to be 18!" << endl;
}
else if(age == 14)
{
    cout << endl;
    cout << "You are in high school!" << endl;
}
else
{
    //This will procec when age is bellow 14...
    cout << endl;
    cout << "Your to young!" << endl;
}

// String 
string AgeString;
    AgeString = "You need to do your homework!";
    cout << AgeString <<endl;
}
