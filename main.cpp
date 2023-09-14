//ATM
#include <iostream>

using namespace std;

int main()
{
    int pin_num,choice_num1,choice_num2;
    double bank_bal=1000.5456,Withdraw_amt,dep_amt;
    cout << "******Welcome to your Bank******" << endl;
    cout<<"Enter your pin number please : ";
    cin>>pin_num;
    cout<<"\n\nEnter any option to be served!"<< endl;
    cout<<"1. Balance Enquiry"<< endl;
    cout<<"2. Cash Withdraw"<< endl;
    cout<<"3. Deposit Cash"<< endl;
    cout<<"4. Exit"<< endl;
    cout<<"\nEnter your choice : ";
    cin>>choice_num1;

    if(choice_num1==1)
        {
            cout<<"Your bank balance is : "<<bank_bal<<endl;
            cout<<"Do you want to perform any other transaction ?"<<endl;
            cout<<"Press 1 to proceed and 2 to exit "<<endl;
            cout<<"\nEnter your choice : ";
            cin>>choice_num2;
            if(choice_num2==2)
                {cout<<"Thank you for banking with us, have a nice day!"<<endl;}
            if(choice_num2==1)
                {cout<<"\n\nEnter any option to be served!"<< endl;
                cout<<"1. Balance Enquiry"<< endl;
                cout<<"2. Cash Withdraw"<< endl;
                cout<<"3. Deposit Cash"<< endl;
                cout<<"4. Exit"<< endl;
                cout<<"\nEnter your choice : ";
                cin>>choice_num1;}
        }
    if(choice_num1==2)
        {
            cout<<"Please enter your amount to withdraw : ";
            cin>>Withdraw_amt;
            cout<<"Please collect your cash!"<<endl;
            cout<<"Your available balance is : "<<bank_bal-Withdraw_amt;
            cout<<"Do you want to perform any other transaction ?"<<endl;
            cout<<"Press 1 to proceed and 2 to exit "<<endl;
            cout<<"\nEnter your choice : ";
            cin>>choice_num2;
            if(choice_num2==2)
                {cout<<"Thank you for banking with us, have a nice day!"<<endl;}
            if(choice_num2==1)
                  {cout<<"\n\nEnter any option to be served!"<< endl;
                  cout<<"1. Balance Enquiry"<< endl;
                  cout<<"2. Cash Withdraw"<< endl;
                  cout<<"3. Deposit Cash"<< endl;
                  cout<<"4. Exit"<< endl;
                  cout<<"\nEnter your choice : ";
                  cin>>choice_num1;}
        }
    if(choice_num1=3)
        {cout<<"Please enter amount to deposit : ";
        cin>>dep_amt;
        cout<<"Thank you for depositing, your new balance is : "<<bank_bal+dep_amt<<endl;
        cout<<"Do you want to perform any other transaction ?"<<endl;
        cout<<"Press 1 to proceed and 2 to exit "<<endl;
        cout<<"\nEnter your choice : ";
        cin>>choice_num2;

        if(choice_num2==2)
            {cout<<"Thank you for banking with us, have a nice day!"<<endl;}
        if(choice_num2==1)
              {cout<<"\n\nEnter any option to be served!"<< endl;
              cout<<"1. Balance Enquiry"<< endl;
              cout<<"2. Cash Withdraw"<< endl;
              cout<<"3. Deposit Cash"<< endl;
              cout<<"4. Exit"<< endl;
              cout<<"\nEnter your choice : ";
              cin>>choice_num1;}

        }
    if(choice_num1=4)
    {cout<<"Thank you for banking with us, have a nice day!"<<endl;}
    else
        cout<<"Enter valid number!!";


    return 0;
}
/*


                                                                           ATM MACHINE

#include <iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;
int main()
{
	int pin,password=5450,count=0,i,n;
	bool isTrue=true;
	double balance =0.0,withdraw=0.0,deposite=0.0;
	system("Color 3E");
	do
	{
		cout<<"**********Welcome to SBI Bank**********"<<endl;
		cout<<"Please enter your pin number: ";
		cin>>pin;

		if(pin==password)
			{
				do
				{
					cout<<"**********Welcome to SBI Bank**********"<<endl;
					cout<<"Enter the option you want: "<<endl<<"1. Deposite Cash "<<endl<<"2. Cash Withdraw "<<endl<<"3. Balance Enquiry  "<<endl<<"4. Exit "<<endl;
					cin>>i;
					switch(i)
				{
					case 1:
						cout<<"Deposite amount : Rs ";
						cin>>deposite;
						balance= balance+deposite;
						break;

					case 2:
						if(balance<=0)
						{
							cout<<"Please deposite some funds."<<endl;
						}
						else
						{
							cout<<"Withdraw amount : Rs ";
							cin>>withdraw;
							balance=balance-withdraw;
							cout<<"Your avialable balance is Rs "<<balance<<endl;
						}
						break;
					case 3:
						 cout<<"Current balance : Rs "<<balance<<endl;
						 break;

					case 4:
						cout<<"Have a nice day!!";
						isTrue=false;
						break;

						default: cout<<"Do you want to perform another transaction?"<<endl;
						         cout<<"Press 1 to proceed and 2 to exit"<<endl;
						         cin>>n;
				}

				}while(isTrue!=false);

			}
		else
		{
			count++;
			if(count==3)
		{
			isTrue=false;
		}

		else
		{
			cout<<"Wrong pin!!"<<endl;
		}

		}

	}while(isTrue!=false);

}
*/
