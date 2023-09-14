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

