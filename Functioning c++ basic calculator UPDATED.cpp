#include <iostream>
using namespace std;
//Switch statements
//All variables declared inside main have local scope and exist only while the program is running.
int main()
{
    // These variables are declared inside main, so their scope is limited to this function.
    cout<<"====Welcome to the c++ calculator====" <<endl;
    int a;
        cout<<"Enter Number A."<<endl;
        cin>> a;
    int b;
        cout<<"Enter Number B."<<endl;
        cin>> b; 
        
    int choice;

    cout<<"1. Add" <<endl;
    cout<<"2. Subtract"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divide"<<endl;
    cout<<"Enter choice: (1-4) "<<endl;
    
    cin>> choice;

     // This switch statement creates its own code blocks for each case using curly braces { }
 switch(choice){

        case 1:
        {
            // This is a nested block. The variable 'result' only exists inside this block.
            int result = a + b;
            cout<<"Addition: " << result << endl;
            break;
        }

        case 2:
        {
            int result = a - b;
            cout<<"Subtraction: " << result << endl;
            break;
        }

        case 3:
        {
            int result = a * b;
            cout<<"Multiplication: "<< result << endl;
            break;
        }

        case 4:
        {
            int result = a / b;
            cout<<"Division: "<< result << endl;
            break;
        }

        default:
            cout<<"Invalid choice."<<endl;
    }

    // When main ends, all local variables (a, b, choice, result) go out of scope and are destroyed.
}