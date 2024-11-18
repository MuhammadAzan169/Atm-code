#include <iostream>
#include <string>
using namespace std;
int main()
{
    int pin=1234,i,enteredpin,cash,amount,option1,option2,option3;
    char opt1;
    int choice;
    cout << "Insert your card (Press Enter)!";
    cin.get();
    cout << "Enter your pin:\n";
    cin >> enteredpin;
    if(pin!=enteredpin)
    {
        for(int i=1; i<=3; i++){
            cout<<"You entered invalid pin, you have "<<3-i<<" tries left";
            cin>>enteredpin;
            if(pin==enteredpin)
            {
                break;
            }
            else if(i==3)
            {
                cout<<"Your account has been Blocked\n";
                return 0;
                break;
            }
        }
    }
    cout<<"The pin is executed"<<endl;
    cout << "select account type \n1.current	\n2.saving\n";
	cin >> option1;
	if (option1 == 2);
	    {
		    cout << "Procceding (Press Enter)!"<<endl;
	        cin.ignore();
            cin.get();	
	    }
    cout<<"a) Online Billing \nb) Withdraw\n"; 
    cin>>opt1;
    if(opt1=='b')
        {
            cout << "Choose one option from below";
            cout<<"\n1-Rs 500";
            cout<<"\n2-Rs 1000";
            cout<<"\n3-Rs 5000";
            cout<<"\n4-Rs 10000";
            cout<<"\n5-Rs Custom\n";
            cin>>option2;
            if (option2<1 or option2>5)
                {
                    cout<<"You entered an invalid option!";
                    return 0;
                }
            else if (option2==1)
            {
                cash = 500;
            }else if (option2==2){
                cash = 1000;
            }else if (option2==3){
                cash = 5000;
            }else if (option2==4){
                cash = 10000;
            }else{
                cout<<"Enter amount to withdraw: Rs ";
                cin>>cash;
            }
            cout<<"Do you want a receipt?"
                    "\n1-Yes"
                    "\n2-No";
            cin>>option3;
            if (option3 == 1 ) 
            {
                cout << "***************************\n";
                cout<<"         Receipt           \n";
                cout << "*                      *\n";
                cout<<"You just withdraw Rs " <<cash;
                 cout << "\n*                      *\n";
                cout<< "\n**************************\n";	
            }
            else if(option3>2 or option3<1)
            {
		        cout<<"You entered an invalid option!";
	        }
	        
            cout << "\nPlease collect your card (Press Enter)!";
            cin.get();
            cin.ignore();
            cout << "Please collect your cash (Press Enter)!";
            cin.get();
            cout << "THANK YOU!";
            return 0;
        }
    else
        {
            cout << "This option is not currently availaible\n";
		}
    cout<<"Plz collect your card\n";
    cin.get();
    cout<<"Thank you";
    return 0;
}
