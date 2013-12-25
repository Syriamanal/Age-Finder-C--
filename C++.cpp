#include <iostream>

using namespace std;


int main()
{
    
int age;

//This will ask you to enter your age...
cout << "Enter Your age..." << endl;
    cout << endl;
cin >> age;
cout << "You have entered " << age << "!" <<endl;

//This will be the output...
if(age == 18)
{
    cout << endl;
    cout << "You are a adult" << endl;
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
else if(age == 16)
{
    cout << endl;
    cout << "Two more years to be 18!" << endl;
}
else if(age == 15)
{
    cout << endl;
    cout << "Three more years to be 18!" << endl;
}
else if(age == 14)
{
    cout << endl;
    cout << "Four more years to be 18!" << endl;
}
else if(age == 13)
{
    cout << endl;
    cout << "You are " << age << endl;
}else if(age == 12)
{
    cout << endl;
    cout << "Don't you have homework to do?" << endl;
}
else if(age == 11)
{
    cout << endl;
    cout << "Did you do your homework?" << endl;
}
else
{
    //This will procec when age is bellow 14...
    cout << endl;
    cout << "Your to young!\a" << endl;
    cout << "You need to do your homework!\a" << endl;
}
}
