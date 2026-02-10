#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	cout<<"A proffessor is coming into the class! Guess absolutely at random who it could be!";
	cout<< " "<<endl;
	int guess;
	string prof[10]= {"Heather Peters","Jake Perrine", "Daniel Pike","Matthew Prater", "Rahad Habib",
	                  "Gabrielle Vosteen","Ryan Murray","Tony Hinton", "Derick Clark", "Craig Belanger"
	                 };
	cout<<"Guess who this proffessor is: ";
	//listing the proffessors
	cout<< " "<<endl;
	cout<<"1 - Heather Peters";
	cout<< " "<<endl;
	cout<<"2 - Jake Perrine";
	cout<< " "<<endl;
	cout<<"3 - Daniel Pike";
	cout<< " "<<endl;
	cout<<"4 - Matthew Prater";
	cout<< " "<<endl;
	cout<<"5 - Rahad Habib";
	cout<< " "<<endl;
	cout<<"6 - Gabrielle Vosteen";
	cout<< " "<<endl;
	cout<<"7 - Ryan Murray";
	cout<< " "<<endl;
	cout<<"8 - Tony Hinton";
	cout<< " "<<endl;
	cout<<"9 - Derick Clark";
	cout<< " "<<endl;
	cout<<"10 - Craig Belanger";
	cout<< " "<<endl;
	cin>>guess;



	//create random numbers?
	srand(time(0)); //seed the generator
	int secret = rand()% 10+1;
	cout<<"The secret proffessor is number "<<secret<<endl;
	if(guess==secret) {
		cout<<"Yay! You got it right! "<<endl;
		
		beep(350,1000)

	}
	else {
		cout<<"Wrongo. "<<endl;
		beep(750,2000)
	}


}