/*/This complete program is made by Priyansh saxena for the  basic bank management project.
To complete this project ,I took some help from GPT for error handling and for some functions like isdigit(), rand()          */
   





# include "iostream"//main header file
# include <string.h>//for string
# include <conio.h>//for getch()
# include <cstdlib>// for  gerenating random number :- rand() and srand()
# include <ctime>// for seeding time value in srand() 
# include <cctype>//for isdigit()

using namespace std;
             
			 /*function for Front Page of the bank */
int FrontPage() {    
    cout<<endl;
	cout<<"                                ##########################################################"<<endl;
	cout<<endl;
	int x;
	cout<< "Select an Option :"<< endl;
	cout<< "1. Press 1 to Create a New Account "<<endl;
	cout<<"2. Press 2 for  Account Details "<<endl;
	cout<<"3. Press 3 to Deposit the Amount in your Account "<<endl;
	cout<<"4. Press 4 to Withdraw the Amount from your  Account" <<endl;
	cout<<"5. Press 0 for exit"<<endl;
	cout<<"\n";
	cout<<"       Selected Option :-  ";
	cin >> x;
	cout<<endl;
	cout<<"                                ##########################################################"<<endl;
	return x;
	
}
class BOB {
	private :
			string name ;
			string phone;
			int x=0;
			char pin[4],ch;
			bool valid=true;
			int i=0;
			int s=0;
			double balance =0.0;
		 
			int account;
	
	
	public:	
			;
			void Acc_creation();
			void Acc_details();
			void credit();
			void debit();

};
//BOB::BOB(){}
                       // function to creat an  account  started 
	
void BOB::Acc_creation(){
	
	
	cout<<"\n                      TO CREATE A NEW ACCOUNT ENTER YOUR DETAILS AS REQUIRED    \n"<<endl;
	
	
	cout<<"Enter your Full Name :   ";
	cin.ignore();
	getline(cin,name);
	
	cout<<"Enter Your 10 digit Phone number : "<<endl;
	
	cin>>phone;
	
	for (int a = 0; a < phone.length(); a++)//iterating through phone number to check if its valid or not
	{
		if(!isdigit(phone[a]))  //condition to check valid number using is digit function
		{
			cout<<"Enter a valid 10 digit phone number"<<endl;
			valid=false;
			break;     //if number is not valid break the loop
		} 
	}
	if( valid && phone.size()==10)//if number is valid then go inside this loop
	{
		cout<<"Enter 4 digit Pin";
			while(i<4 && (ch=getch() )!= '\r') 
				{
					pin[i]=ch;
					i++;
					cout<<"*";
				
				}
				x = atoi(pin);
		srand(time(0));
        account = rand() % 900000000000 + 100000000000;// this line generates a random number between 100000000000 and 999999999999
        
    	system("CLS");
    	cout<<"\n\n\n";
   		cout<<"				  ________________________________________________"<<endl;
    	cout<<"				 |                                                |"<<endl;
    	cout<<"				 |     YOUR ACCOUNT NUMBER IS :- |"<<account  <<"|     |"<< endl;
    	cout<<"				 |________________________________________________|"<<endl;
    	cout<<"\n\n WARNING !!  PLEASE REMEBER THIS ACCOUNT NUMNER AND YOUR PIN TO DEPOSIT AND WITHDRAW THE AMOUNT !! WARNING \n";
  
	}//if condition for (password input closing bracket
	else 
	{
	   	cout<<"enter a valid mobile number"<<endl;
	}  
//we wiil store this randomly generated 12 digit  account number and pin is private varible of BOB class
	}
	
	
	
	
									// function to creat an  account  ended
									
									
									
	
                      /* function to display account details started */
void BOB::Acc_details()
{   	
		int accNumber,i=0;
		char Pin[4],ch;
		cout<<"_______________________________"<<endl;
		cout<<"----- Account Details -----"<<endl;
		cout<<"_______________________________"<<endl;
		cout<<endl;
		cout<<"a. Enter your Account Number  => "<<endl;
		cin>>accNumber;
		cout<<"Enter your Pin :-"<<endl;
		while(i<4 && (ch=getch() )!= '\r')//condition to enter only 4 digit pin
				{
					Pin[i]=ch;
					i++;
					cout<<"*";
				}
				int y = atoi(pin);
				
	if (accNumber==account && y==x)
	{
		cout<<endl;
		cout<<"-------------------------------------------" <<endl;
		cout<<"You Bank details are :- " <<endl;
		cout<<endl;
	//	cout<< "Name/son of :- "<<name<<"/"<<fname<<endl ;
		cout<< "Mobile Number :- " <<phone<<endl;
		cout<< "Account Number:- "<<account<<endl;
	//	cout<< "IFSC code :- "<<ifsc<<endl;
	//	cout<<"PIN :- "<<pin<<endl;
		cout<<"AMOUNT :- | "<< balance <<" |"<<endl;
		cout<<"-------------------------------------------" <<endl;
	}
	else if (accNumber!=account && y!=x)
	{

	 cout<<" _______________________________"<<endl;
	 cout<<"| Invalid Account Number & PIN  |"<<endl;
	 cout<<"|_______________________________|"<<endl;
	}
	
	       
	       
	                   
}
 							/* function to display account details closed */
 							
 							
 							
 										 /*function credit money started*/
void BOB::credit(){
		int amt,accc,pass=0,a=0;
		char password[4],chh;
		system("CLS");
		cout<<"_______________________________"<<endl;
		cout<<"----- CREDIT/DEPOSIT Amount -----"<<endl;
		cout<<"_______________________________"<<endl;
		cout<<endl;
		cout<<"ENTER YOUR ACCOUNT NUMBER:-"<<endl;
		cin>>accc;
		cout<<"ENTER YOUR PIN :-";
			while( a<4 && (chh=getch() )!= '\r')//condition to enter only 4 digit pin
				{
					password[a]=chh;
					a++;
					cout<<"*";
				}
 					 pass = atoi(password);
		
//		cin>>password;
		if(accc==account && pass !=x){
		system("CLS");
		cout<<"Please enter the amount to Deposit :- "<<endl;
		cin>>amt;
		balance=balance+amt;
		cout<<"AMOUNT DEPOSITED | "<<balance<<" |";
		
		
		}
		else{
			cout<<"enter a valid account number and password "<<endl;
		}
}

                    /*function credit money close*/


                    /*function debit money started*/
void BOB::debit(){
		int accc,pin,amt,a=0;
		char pass[4],chh;
		cout<<"_______________________________"<<endl;
		cout<<"----- DEBIT/WITHDRAW Amount -----"<<endl;
		cout<<"_______________________________"<<endl;
		cout<<endl;
		cout<<"a. Enter your Account Number  => ";
		cin>>accc;
		cout<<"a. Enter your Account PIN No.  => ";
		//cin>>pin;
			while( a<4 && (chh=getch() )!= '\r')//condition to enter only 4 digit pin
				{
					pass[a]=chh;
					a++;
					cout<<"*";
				}
 					 pin = atoi(pass);
		if(accc==account && pin !=x){
		system("CLS");
		cout<<"a. Enter the Amount you want to Debit/Withdraw => "<<endl;
		cin>>amt;
		
			if (balance>=amt)
				{
			balance=balance-amt;
			cout<<" An amount of "<<amt << "is been Debit from your account"<<endl;
			cout<<endl;
			cout<<"Your current Available Balance is :- "<<balance<<endl;
				}
			else cout<<"!!!--INSUFFICENT BALANCE--!!!"<<endl;
		}
		else {
		cout<<"INCORRECT ACCOUNT NUMBER & PIN .!!!!"<<endl;}
	
}
                                      /*function debit money close*/

 main(){
	BOB a;
	int x;
	
	
	cout<<"                                                 WELCOME TO MY BANK \n"<<endl;
	x=FrontPage();
	while(x==1 || x==2 || x==3 || x==4 || x==5)
	{
	if (x==1)
	{
		
	a.Acc_creation();
	x=FrontPage();
	}
	else if (x==2)
	{
		a.Acc_details();
		x=FrontPage();
	}
    
    
    else if(x==3){
	a.credit();
	x=FrontPage();
	}
    else if(x==4){
    	a.debit();
    	x=FrontPage();
	
	}
    else if (x==5)
		{
			cout<<endl;
			cout<<" ________________________________________________________"<<endl;
			cout<<"|           THANKS FOR USING OUR BANK SERVICES           |"<<endl;
			cout<<"|________________________________________________________|"<<endl;
			return 0;
		}
	else 
		{
			cout<< "!!!!!!!   PLEASE  SELECT A VALID OPTION  !!!!!!!"<<endl;
			x=FrontPage();
		}	

}
}
