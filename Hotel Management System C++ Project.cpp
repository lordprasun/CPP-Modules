#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>
#include<cstdlib>
#include<time.h>
#include <fstream>
#include <cstring>
#include <cmath>
#include <cctype>
using namespace std;
void function()
{
	cout<<	setw(40)<<"MAIN MENU"<<endl;
	cout<<"WHAT YOU WANT TO DO"<<endl;
	cout<<"enter 1 for meal options:"<<endl;
	cout<<"enter 2 for room booking options:"<<endl;
	cout<<"enter 3 to give feedback about the hotel:"<<endl;
	cout<<"enter 4 to quit from the programme:"<<endl;
	int x;
	cout<<"enter your options:";
	cin>>x;
	switch (x)
	{
		case 1:
			{
					ifstream food;
				string menu,choice2;
				int sum=0,opt,quan,tsum=0;
				food.open("food.txt",ios::in);
				cout<<"THE LIST OF THE THINGS AVAILABLE HERE IS GIVEN BY:\n";
				cout<<left<<setfill(' ')<<setw(25)<<setfill(' ')<<setw(25)<<endl;
				cout<<left<<setfill(' ')<<setw(25)<<"Item "<<setfill(' ')<<setw(25)<<"price\n";
				cout<<left<<setfill(' ')<<setw(25)<<"1-Qourma "<<setfill(' ')<<setw(25)<<"150\n";
				cout<<left<<setfill(' ')<<setw(25)<<"2-Baryani "<<setfill(' ')<<setw(25)<<"130\n";
				cout<<left<<setfill(' ')<<setw(25)<<"3-White Qourma "<<setfill(' ')<<setw(25)<<"125\n";
				cout<<left<<setfill(' ')<<setw(25)<<"4-Zinger Burger "<<setfill(' ')<<setw(25)<<"180\n";
				cout<<left<<setfill(' ')<<setw(25)<<"5-Tikka "<<setfill(' ')<<setw(25)<<"90\n";
				cout<<left<<setfill(' ')<<setw(25)<<"6-Fish "<<setfill(' ')<<setw(25)<<"300\n";
				cout<<left<<setfill(' ')<<setw(25)<<"7-Karahi "<<setfill(' ')<<setw(25)<<"450\n";
				cout<<left<<setfill(' ')<<setw(25)<<"8-Boneless"<<setfill(' ')<<setw(25)<<"350\n";
				cout<<left<<setfill(' ')<<setw(25)<<"9-Chinease "<<setfill(' ')<<setw(25)<<"250\n";
				cout<<left<<setfill(' ')<<setw(25)<<"10-Milkshake "<<setfill(' ')<<setw(25)<<"150\n";
				cout<<left<<setfill(' ')<<setw(25)<<"11-Juices "<<setfill(' ')<<setw(25)<<"120\n";
				while(getline(food,menu)){
					cout<<menu<<endl;
					
				}
				food.close();
				order:
				sum=0;
				cout<<"\nPlease select from the above menu: ";
				cin>>opt;
				while(opt<1 && opt>11){
					cout<<"Invalid option.Please select from the above menu: ";
					cin>>opt;
				}
				cout<<"Enter quantity: ";
				cin>>quan;
				if(opt==1)
					sum=quan*150;
				else if(opt==2)
					sum=quan*130;
				else if(opt==3)
					sum=quan*125;
				else if(opt==4)
					sum=quan*180;
				else if(opt==5)
					sum=quan*90;
				else if(opt==6)
					sum=quan*300;
				else if(opt==7)
					sum=quan*450;
				else if(opt==8)
					sum=quan*350;
				else if(opt==9)
					sum=quan*250;
				else if(opt==10)
					sum=quan*150;
				else if(opt==11)
					sum=quan*120;
				tsum+=sum;
				cout<<"Do you want to order something else (Y or N)? ";
				cin>>choice2;
				if(choice2=="Y" || choice2=="y")
				goto order;
				cout<<"\nYour total bill is "<<tsum<<endl;	
				cout<<"Press enter to continue ";
				getch(); 
				function();
				break;
			}
		case 2:
			{
				system("CLS");
				label_10:
				cout<<"enter 1 to check the prices of the rooms:"<<endl;
				cout<<"enter 2 to book the room:"<<endl;
				cout<<"enter 3 to go to main menu:"<<endl;
				int y;
				cout<<"enter your option:"<<endl;
				cin>>y;
				switch (y)
				{
					case 1:
						{
							system ("CLS");
							cout<<"THE PRICES OF THE ROOMS ARE:"<<endl;
							ifstream file_5;
							string n1;
							file_5.open("PRICES.txt");
							if (file_5)
							{
								while(getline(file_5,n1))
								{
									cout<<n1<<endl;
								}
							cout<<"Price of the Standard room :5000 per day"<<endl;	
							cout<<"Price of the VIP room :10000 per day"<<endl;	
							}
							
							goto label_10;
							
						}
					case 2:
						{
							system("CLS");
							cout<<"SELECT THE ROOM YOU WANT:";
							int name_room;
							cout<<"STANDARD OR VIP:"<<endl;
							cout<<"ENTER 1 FOR VIP AND 2 FOR STANDARD ROOM:";
							cin>>name_room;
							if (name_room==1)
							{
							
								int quantity;
								int days;
								cout<<"enter the quantity of rooms:";
								cin>>quantity;
								cout<<"enter days:";
								cin>>days;
								int total;
								total=25000*quantity*days;
								cout<<"your bill is "<<total<<endl;
								cout<<"YOUR ROOMS HAS BEEN BOOKED:"<<endl;
								goto label_10;
								
							}
							else
							{
								int quantity;
								cout<<"enter the quantity of rooms:";
								cin>>quantity;
								int days_1;
								cout<<"enter days:";
								cin>>days_1;
							int	total_1=1500*quantity*days_1;
								cout<<"the bill is "<<total_1<<endl;
							
								
							}
							goto label_10;
							
							
							
						}
					case 3:
						{
							system("CLS");
							cout<<"press any key to go to main menu:";
							getch();
							system("CLS");
							function();
						}
				}
				
				
				
				
			}
		case 3:
			{
				system("CLS");
				cout<<"THANKS FOR GIVING YOUR TIME TO THE FEEDBACK :"<<endl;
				ofstream file_4;
				file_4.open("FEEDBACK.txt");
				cin.ignore();
				string feedback;
				cout<<"PLEASE GIVE THE FEEDBACK:";
				getline(cin,feedback);
				file_4<<feedback;
				file_4.close();
				cout<<"press any key to go to the main menu:";
				getch();
				system ("CLS");
				function();
				
			}
		
		case 5:
			{
				system("CLS");
				cout<<"THANKS FOR YOUR VISIT HERE HOPE YOU ENJOYED:"<<endl;
				cout<<"press any key to end the programme:"<<endl;
				getch();
				exit((0));
				break;
			}
	}
	
}
void menu()
{
	cout<<setw(40)<<"MAIN MENU"<<endl;
	int z;
	cout<<"press 1 for the detail of employed persons:"<<endl;////main menue and options 
	cout<<"press 2 to create rooms data:"<<endl;
	cout<<"press 3 for to set the prices of the rooms:"<<endl;
	cout<<"press 4 to check coustomers data:"<<endl;
	cout<<"press 5 for quit the programme:"<<endl;
	
	cout<<"enter your choice:";
	cin>>z;
	switch (z)
	{
		case 1:
			{
				system("CLS");
				int quantity1;//selaries record
				cout<<"enter the number of waiters:";
				cin>>quantity1;
				int quantity2;
				cout<<"enter the number of cooks:";//set the salaries according to the budjet
				cin>>quantity2;
				cout<<"\n you are the general manager you can set the pays:"<<endl;
				int cook;
				cout<<"enter the pay of cook:";
				cin>>cook;
				int waiter;
				cout<<"enter the pay of waiter:";
				cin>>waiter;
				int manager;
				cout<<"enter the pay of manager:";
				cin>>manager;
				int cooks;
				cooks=cook*5;
				
				cout<<"the total pay of the cooks is "<<cooks<<endl;
				int waiters;
				waiters=waiter*20;
				cout<<"the total pay of the waiters is "<<waiters<<endl;
				cout<<"the pay of the operfation manager is "<<manager<<endl;
				int total;
				total=waiters+cooks+manager;
				cout<<"the total pay your hotel has to pay to the employes is "<<total<<endl;
				cout<<"press any key to goto main menu";
				getch();
				system("CLS");
				menu();
				
			}
		case 2:
			{
				system("CLS");
				cout<<"NOW YOU CAN CREATE YOUR ROOM DETAILS:"<<endl;
				ofstream file_1;///rooom details and prices controll
				file_1.open("ROOM DATA.txt");
				int rooms;
				cout<<"enter the number of standard class rooms:";
				cin>>rooms;
				file_1<<"NO OF STANDARD CLASS ROOMS ARE ";
				file_1<<rooms;
				int vip;
				cout<<"enter the no of VIP ROOMS in the hotel:";
				cin>>vip;
				file_1<<"\nNO OF THE VIP CLASS ROOMS:";
				file_1<<vip;
				file_1.close();
				cout<<"press any key to goto main menu";
				getch();
				system("CLS");
				menu();
					
			}
		
		case 3:
			{
				system("CLS");
				cout<<"NOW YOU CAN SET THE PRICES OF THE ROOMS "<<endl;
				ofstream file_2;
				file_2.open("PRICES.txt");
				int standard;
				cout<<"enter your desired price for standard room per day:";
				cin>>standard;
				file_2<<"THE PRICE OF THE STANDARD ROOM IS ";
				file_2<<standard;
				
				int VIP;
				cout<<"enter the desired price of the vip room per day:";
				cin>>VIP;
				file_2<<"\nTHE PRICE OF THE VIP ROOM IS ";
				file_2<<VIP;
				file_2.close();
				cout<<"press any key to goto main menu";
				getch();
				system("CLS");
				menu();
					
			}
		case 4:
			{
					label_6:
									ifstream file_4;
									string n5,filename;
									cin.ignore();
									cout<<"ENTER THE NAME OF THE COUSTOMER:";
									getline(cin,filename);
									filename+=".txt";
									file_4.open(filename.c_str());
									if (file_4)
									{////checking the data of the coustomer
									
										system("CLS");
										while(getline(file_4,n5))
										{
											cout<<n5<<endl;
										}
										string choice_1;
										cout<<"WANT TO CHECK ANOTHER COUSTOMER DATA:"<<endl;
										cout<<"enter yes or no:";
										cin>>choice_1;
										if (choice_1=="yes")
										{
											system("CLS");
											goto label_6;
										}
										else{
											system("CLS");
											function();
										}
									}
									else
									{
										cout<<"THIS PERSON HAS NOT VISIT YET";
										cout<<"press any key to check another COUSTOMER:";
										getch();
										goto label_6;
										menu();
								}
				
			}
		case 5:
			{
				cout<<"press any key to quit from the programme:";
				getch();
				exit((0));
			}
	}
}
int main()
{
	cout<<setw(60)<<"WELCOME TO THE PC HOTEL RESERVATION AND\n ";//starting page 
	cout<<setw(45)<<"MANAGMENT SYSTEM"<<endl;
	cout<<"Are you a client or managment manber?\n";
	int a;
	cout<<"enter 1 for coustomer and 2 for managment member\n";
	cin>>a;
	if(a==1)
	{
		system("CLS");
	
		string number;
		cout<<"enter your number:";
		cin>>number;
		string CNIC;
		cout<<"enter your CNIC:";
		cin>>CNIC;///getting data from the user 
		cin.ignore();
		string coustomer;
		cout<<"enter your name:";
		getline(cin,coustomer);
		
			string adress;
		cout<<"enter your adress:";
		getline(cin,adress);
		ofstream file_3;
		string fid=coustomer+".txt";
		file_3.open(fid.c_str());
		file_3<<number;
		file_3<<"\n";
		file_3<<coustomer;
		file_3<<"\n";
		file_3<<CNIC;
	
		file_3<<"\n";
		file_3<<adress;
		file_3.close();
		system("CLS");
		function();
		
	
	}
	if(a==2)
	{
		
		system("CLS");
		
		int a;
		cout<<"HAVE YOU CREATED YOUR ACCOUNT?\n";
		cout<<"enter 2  to login or enter 1 to create a new account:";
		cin>>a;/////account verificaton and creating of the account
		if (a==1)
		{
				system("CLS");
			cin.ignore();
			string name;////account verification ......
				cout<<"enter your username:"; 
			getline(cin,name);
			
			string password;
			cout<<"enter the password :";
			cin>>password;
			cin.ignore();
				
			ofstream file;
			file.open("ADMIN.txt");
			
			
			file<<name<<endl;
			file<<password;
				
			file.close();
			
				cout<<"your account has been made succesfully"<<endl;
			cout<<"press any key to login";
			getch();
			system("CLS");
			string name1;
			cout<<"enter the user name:";
			label_2:
			getline(cin,name1);
			if (name1==name)
			{
					string password1;
			cout<<"enter the password:";
			label_1:
			getline (cin,password1);
				if (password1==password)
				{
					cout<<"your account has been loged in";
					
					cout<<"\n press enter to display main menu"<<endl;
					getch();
					system ("CLS");
					menu();
					
				}
				else
				{
					cout<<"invalid password :enter again";
					goto label_1;
				}
			
			}
			else
			{
				
				cout<<"invalid name:enter again:";
				goto label_2;
				
			}
		
			
				
			
		}
		else
		{
			cin.ignore();
			string n1,pass,n2;
	    	ifstream file2;
	    	file2.open("ADMIN.txt");
	    	string name2;
	    	cout<<"enter username:";
	    	getline(cin,name2);					
	    	file2>>n1;
	    	
	    	if (name2==n1)
	    	{
	    		cout<<"Enter the password:";
	    		cin>>pass;
	    		file2>>n2;
	    		if (pass==n2)
				{
					cout<<setw(55)<<"YOUR ACCOUNT HAS BEEN SUCCESFULLY LOGED IN::"<<endl;
					menu();
					
				}
				else
				{
					while(pass!=n2)
					{
						cout<<"invalid password :enter again::";
						cin>>pass;
						cin.ignore();
					}
				}			
			}
			
			
				while(name2!=n1)
				{
					cout<<"invalid name:enter again:";
					getline(cin,name2);
						if (name2==n1)
	    				{
	    					cout<<"Enter the password:";
	    					cin>>pass;
	    					file2>>n2;
	    					if (pass==n2)
							{
								cout<<setw(55)<<"YOUR ACCOUNT HAS BEEN SUCCESFULLY LOGED IN::"<<endl;
								menu();
						}
					
				
					else
					{
						while(pass!=n2)
						{
							cout<<"invalid password :enter again::";
							cin>>pass;
							cin.ignore();
					}
				}
				menu();			
			}
			
					
			
	
			
			
		}
	}
}
}


