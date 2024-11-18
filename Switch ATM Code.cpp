#include<iostream>
#include<string>
using namespace std;
int main()
{
    int choice,Amount,option1,option3,pin=1234,entered_pin;
    char opt1;
    cout << "Insert your card (Press Enter)!";
    cin.get();
    cout << "Enter your pin:\n";
    cin >> entered_pin;
    switch(pin==entered_pin)
    {
    case 1:
            cout<<"The pin is executed"<<endl;
        cout << "select account type \n1.current	\n2.saving\n";
	    cin >> option1;
	    switch(option1)
	    {
	    case 1:
	        cout<<"a) Online Billing \nb) Withdraw\n"; 
            cin>>opt1;
            break;
        case 2:
            cout<<"You have no saving in account";
            return 0;
            break;
	    }    
        switch (opt1)
        {  
            case 'b':
                cout<<"Choose one option from below";
                cout<<"\n1-Rs 500";
                cout<<"\n2-Rs 1000";
                cout<<"\n3-Rs 5000";
                cout<<"\n4-Rs 10000";
                cout<<"\n5-Rs Custom";
                cin>>choice;
                switch (choice)
            {
                case 1:
                    cout<<"You just withdraw Rs 500";
                    Amount = 500;
                    break;
                case 2:
                    cout<<"You just withdraw Rs 1000";
                    Amount = 1000;
                    break;
                case 3:
                    cout<<"You just withdraw Rs 5000";
                    Amount = 5000;
                    break;
                case 4:
                    cout<<"You just withdraw Rs 10000";
                    Amount = 10000;
                    break;
                case 5:
                    cout<<"Enter Amount to withdraw:";
                    cin>>Amount;
                    cout<<"You just withdraw\n"<<Amount;
                    break;
            }
                cout<<"\nDo you want a receipt?"
                    "\n1-Yes"
                    "\n2-No";
                cin>>option3;
            switch (option3) 
                {
                    case 1:
                        cout << "*****************************\n";
                        cout << "            Receipt            ";
                        cout<< "\n*                          *\n";
                        cout<<"You just withdraw Rs " <<Amount;
                        cout<< "\n*                          *\n";
                        cout<< "\n*****************************\n";
                        cout << "\nPlease collect your card (Press Enter)!";
                        cin.get();
                        cin.ignore();
                        cout << "Please collect your cash (Press Enter)!";
                        cin.get();
                        cout <<"THANK YOU!";
                        break;
                    case 2:
                        cout << "You just withdrew: Rs "<<Amount;
            	        cout << "\nPlease collect your card (Press Enter)!";
                        cin.get();
                        cin.ignore();
                        cout << "Please collect your cash (Press Enter)!";
                        cin.get();
                        cout <<"THANK YOU!";
                        break;
                }
                break;
            case 'a':
                cout<<"This option is not available!";
                return 0;
                break;
            default:
                cout<<"You entered an invalid option!";
                return 0;
                break;
            }
        break;
    case 0:
        cout<<"invalid Pin";
        return 0;
        break;
    }
}
