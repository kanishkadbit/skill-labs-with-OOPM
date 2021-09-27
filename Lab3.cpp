3.1
/*create a class student with two method getdata() and printdata().
getdata() to get the value from the user and display the data in printdata().
create the two object s1,s2 to declare and access the values from studenttest.*/

#include<iostream>
using namespace std;

class student{
	public:
	int rollnum;
	float cgpa;
	string branch,name;
	char div;
	

	int getdata()
	{
		cout<<"\nEnter your Name: ";
		cin>>name;
		
		cout<<"Enter your Roll no: ";
		cin>>rollnum;
		
		cout<<"Enter your Division: ";
		cin>>div;
		
		cout<<"Enter your Branch: ";
		cin>>branch;
		
		cout<<"Enter your CGPA:";
		cin>>cgpa;
	}

	int displaydata()
	{
		cout<<"\nStudent Information"<<endl;
		cout<<"The name is: "<<name<<endl;
		cout<<"The Roll no is: "<<rollnum<<endl;
		cout<<"The Division is: "<<div<<endl;
		cout<<"The Branch is: "<<branch<<endl;
		cout<<"The CGPA is: "<<cgpa<<endl;
	}
};

int main()
{
	student s1,s2;
	s1.getdata();
	s1.displaydata();
	s2.getdata();
	s2.displaydata();
}

3.2
 #include<iostream>
using namespace std;


class BankLab2 {
	
	public:

	string name;

	char account_type;

	int account_number,amount;

	float balance;

	 

	BankLab2(string n,int a, char t, float b) {

		name = n;

		account_number=a;

		account_type=t;

		balance=b;



	}

	

	int deposit()

	{

		cout<<"Enter the amount to	deposit: ";

	    cin>>amount;

		if(amount<0)

		{

			cout<<"Invalid amount,Enter a valid amount"; 

			return 0;

		}

		balance=balance+amount;

		return 1;

	}

	

	int withdraw()

	{

		cout<<"Your Balance= "<<balance; 

		cout<<"Enter amount to withdraw: "; 

		cin>>amount;

		if (balance<amount)

		{

			cout<<"Insufficient Balance: "; 

			return 0;

		}

		if(amount<0)

		{

			cout<<"Invalid	amount"; 

			return 0;

		}

		balance=balance-amount; 

		return 1;

	}

	

	void display()

	{

	cout<<"Name :"<<name;

	cout<<"Account Number:"<<account_number;

    cout<<"Account Type:"<<account_type;

    cout<<"Balance: "<<balance;

	}

};
    int main()
    {	

	int account_number;
	 char ans;

	BankLab2 b1("salman",1,'s',2000);

	BankLab2 b2("makarand",2,'s',2000);

	BankLab2 b3("siddharth",3,'s',2000);

		

	cout<<"Menu"<<endl;

	cout<<"1.Deposit"<<endl;

	cout<<"2.Withdraw"<<endl;

	cout<<"3.Display"<<endl;

	cout<<"Enter option"<<endl; 
    
    int op;
    
	cin>>op;


		do

		{

			cout<<"Please enter your account number:"<<endl; 

			cin>>account_number;		

				switch(account_number)

				{

					case 1:	if(op==1)

								b1.deposit();

							if(op==2)

								b1.withdraw();

							if(op==3)

								b1.display();

							

							break;

					case 2:	if(op==1)

								b2.deposit();

							if(op==2)

								b2.withdraw();

							if(op==3)

								b2.display();

							

							break;

					case 3:	if(op==1)

								b3.deposit();

							if(op==2)

								b3.withdraw();

							if(op==3)

								b3.display();

							

							break;

					default: cout<<"Enter value between 1 to 3";

							break;

				}
               	cout<<"Do you want to continue?[Y/N]";

				cin>>ans;

				if(ans=='Y' || ans == 'y') 

				{

				cout<<"Menu";

			    cout<<"1.Deposit";

			    cout<<"2.Withdraw";

		        cout<<"3.Display";

				cout<<"Enter option"; 

				cin>>op;

				}

					

			}

			while(ans!='N');

	}
