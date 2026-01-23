#include <iostream>
using namespace std;
int main()
{
    //header
	cout << "Welcome to the C++ Mad Lib!"<< endl;
	cout << "Type your answers and find out what story is being told!"<< endl;
	
	//string set 1
	string item, day, furni, famil;
	cout << "Type an item:" << endl;
	cin >> item;
	
	cout<< "Type a day:" << endl;
	cin>> day;
	
	cout<< "Name a piece of furniture:" << endl;
	cin>> furni;
	
	cout<< "Name a Family Member:" <<endl;
	cin>> famil;
	//string set 2
	string emot, place, action;
	cout<< "Type a way you may feel about something:" <<endl;
	cin>> emot;
	
	cout<< "Type a place:" <<endl;
	cin>> place;
	
	cout<< "Whats's an action someone might do: "<<endl;
	cin>> action;
	//Final one i promise
	string yn;
	cout<< "Good or Bad?"<<endl;
	cin>>yn;
    
    cout<< " "<<endl;
    cout<< " "<<endl;
    cout<< " "<<endl;
	
    //here's the finished product
    cout << "Your story is called: Melissa's " << item <<endl;
    cout<< " "<<endl;
    cout << "Melissa woke up on " << day << ". She grabbed a " <<item<< " she was keeping under her " <<furni<< endl;
    cout<< " "<<endl;
    cout << "When she came downstairs her "<<famil<< " asked her what was inside." <<endl;
    cout<< " "<<endl;
    cout<< "She had said that it was something really " <<emot<<endl;
    cout<< " "<<endl;
    cout<< "Then, Melissa made her way down to the " <<place<< " To " <<action<<endl;
    cout<< " "<<endl;
    cout<< "It went "<<yn<<endl;
    cout<< " "<<endl;
    cout<< "The End."<<endl;
    
    //I tried to do something with numbers making a final choice, but I couldn't figure it out yet.
}

    
    