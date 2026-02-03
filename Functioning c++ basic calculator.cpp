#include <iostream>
using namespace std;
//Switch statements
int main()
{
    int a;
        cout<<"Enter Number A."<<endl;
        cin>> a;
    int b;
        cout<<"Enter Number B."<<endl;
        cin>> b; 
        
    int choice;
    cout<<"====Welcome to the c++ calculator====" <<endl;
    cout<<"1. Add" <<endl;
    cout<<"2. Subtract"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divide"<<endl;
    cout<<"Enter choice: (1-4) "<<endl;
    
    cin>> choice;

        
    switch(choice){
        case 1:
            cout<<"Addition: " <<a+b<<endl;
            break;
        case 2:
            cout<<"Subtraction: " <<a-b<<endl;
            break;
        case 3:
            cout<<"Multiplication: "<<a*b<<endl;
            break;
        case 4:
            cout<<"Division: "<<a/b<<endl;
            break;
        default:
            cout<<"Invalid choice."<<endl;
    }
}