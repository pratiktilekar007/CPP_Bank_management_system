#include<iostream> 
#include<conio.h> 
#include <time.h>
#include <stdlib.h>
#include<fstream>

using namespace std;

	int i;
	char cha;

string password() 
{ 

	string name; 
	string pass;
	string username = "pratik";  
	string password = "1234";  

	cout << "\n\t\t\t\tEnter User Name: "; 
	cin >> name; 
	cout << "\n\t\t\t\tEnter password: "; 
	cin >> pass; 




	

	if ( name == username && pass == password) 
	{	 

 		cout << "\n\t\t\t\tPassword Accepted... "<<endl; 
 		cout<<"\n\t\t\t\tPress Enter To Continue......";
 		getch();
  		return "\n\t\t\t\tWelcome......";
 



	}	

 	else 
 	{
 		for(i=1;i<3;i++)
		{
 
		cout << "\n\t\t\t\tSomething Wrong... Try Again" << endl; 
		cout << "\n\t\t\t\tEnter User Name: "; 
		cin >> name; 
		cout << "\n\t\t\t\tEnter password: "; 
		cin >> pass; 


		while ( name == username && pass == password) 
		{


		cout << "\n\t\t\t\tPassword And Username Accepted... "<<endl; 
		cout<<"\n\t\t\t\tPress Enter To Continue......";
 		getch();
	 	return "\n\t\t\t\tWelcome";
 

		}	

		}	
	}

}


	class accno
	{
		public :
		int save,l;
		
		int a,choice;
		
		int accno,day,month,year;
		string s1; 
		string s2;
		string add;
		string mob;
		int cash;
		string type;
		string date;
		
		
		
		
		public:
	
	
		void accnumber()
		{
		ifstream infile("COUNT.dat");
		infile>>a;

		ofstream outfile("COUNT.dat");
		a+=1;
		outfile<<a;
		outfile.close();
		}

	};



	class  bank:public accno
	{
	
	
	
		
		public :
			
			void create()
			{	
				system("cls");
				ofstream fout;  
    			fout.open ("data.dat",ios::app); 
    
     			cout<<"\n\t\t\t\tAccount number:";
				 cout<<a; 
     			
     
     			cout<<"\n\n\t\t\t\tYour First Name:"; 
     			cin>>s1;
     			
     			cout<<"\n\t\t\t\tYour Last Name:"; 
     			cin>>s2;
     
   				cout<<"\n\t\t\t\tEnter your Address:"; 
   				cin>>add;
     
   				cout<<"\n\t\t\t\tEnter Mobile Number:"; 
    			cin>>mob;
    			
    			cout<<"\n\t\t\t\tEnter Date (Day - Month -Year):"; 
    			cin>>day>>month>>year;
    			
    			
    			
    			cout<<"\n\t\t\t\tChoose Account Type :"; 
    			cout<<"\n\t\t\t\tCurrent  = c   //   Saving = s";
    			cout<<"\n\t\t\t\t";cin>>type;
    			
    			
    			if("c"==type)
    			{
    				cout<<"\n\t\t\t\tEnter Amount Balance:"; 
    			cout<<"\n\t\t\t\tCurrent  = 100  Minimum Balance";
    			cout<<"\n\t\t\t\t";cin>>cash;
				}
				else if("s"==type)
				{
					
			   cout<<"\n\t\t\t\tEnter Amount Balance:"; 	
    			cout<<"\n\t\t\t\tSaving = 500   Minimum Balance";
    			cout<<"\n\t\t\t\t";cin>>cash;
    		
				}
				else
				{
				cout<<"wrong  choice....";
				}
					 
     
     			
     			
     			
     			
   				fout<<a<<"\t"<<s1<<"\t"<<s2<<"\t"<<add<<"\t"<<mob<<"\t"<<day<<" "<<month<<" "<<year<<"\t"<<type<<"\t"<<cash<<"\n"; 
        
 				
  			
 			    fout.close(); 
 			    cout<<"\n\t\t\t\tAccount  has been sucessfully Added....";
				cout<<"\n\t\t\t\tPress 1 Goto Main Menu... \n";			
				cin>>save;
				system("cls");	
		
			}
			
			
			
			void deposite()
			{
				
				
				int choice,id,amount;
				ifstream inf("data.dat",ios::app);
				ofstream outf("new.dat",ios::app);
				
				cout<<"\nEnter the id you want to Update :";
                cin>>id;
                
                 while ((inf>>a>>s1>>s2>>add>>mob>>day>>month>>year>>type>>cash))
                  {
                  
				  	if(a==id)
				  	{
				  	
				  	  system("cls");
                     
                     
                        	
			    		 		cout<<"Enter the Amount Deposite :";
                         		cin>>amount;
                         		cash=cash+amount;
                         		outf<<a<<"\t"<<s1<<"\t"<<s2<<"\t"<<add<<"\t"<<mob<<"\t"<<day<<" "<<month<<" "<<year<<"\t"<<type<<"\t"<<cash<<"\n"; 
                         		
                         		cout<<"Changes saved!";
                      	
							
				  			}
                             else
                             	outf<<a<<"\t"<<s1<<"\t"<<s2<<"\t"<<add<<"\t"<<mob<<"\t"<<day<<" "<<month<<" "<<year<<"\t"<<type<<"\t"<<cash<<"\n"; 
                     }
                           
				  
				   outf.close();
                     inf.close();
                    remove("data.dat");
                rename("new.dat","data.dat");
				  
	 			cout<<"\nPress 1 Goto Main Menu...\n";			
				cin>>save;
				system("cls");	
				
			}
			
			void withdraw()
			{
				
				int choice,id,amount;
				ifstream inf("data.dat",ios::app);
				ofstream outf("new.dat",ios::app);
				
				cout<<"\nEnter the id you want to Update :";
                cin>>id;
                
                 while ((inf>>a>>s1>>s2>>add>>mob>>day>>month>>year>>type>>cash))
                  {
                  
				  	if(a==id)
				  	{
				  	
				  	
                     system("cls");
                     
                     
                        	
			    		 		cout<<"Enter the Amount Of Withdraw :";
                         		cin>>amount;
                         		cash=cash-amount;
                         		outf<<a<<"\t"<<s1<<"\t"<<s2<<"\t"<<add<<"\t"<<mob<<"\t"<<day<<" "<<month<<" "<<year<<"\t"<<type<<"\t"<<cash<<"\n"; 
                         		
                         		cout<<"Changes saved!";
                      	
							
				  			}
                             else
                             	outf<<a<<"\t"<<s1<<"\t"<<s2<<"\t"<<add<<"\t"<<mob<<"\t"<<day<<" "<<month<<" "<<year<<"\t"<<type<<"\t"<<cash<<"\n"; 
                     }
                           
				  
				   outf.close();
                     inf.close();
                    remove("data.dat");
                rename("new.dat","data.dat");
				  
	 			cout<<"\nPress 1 Goto Main Menu...\n";			
				cin>>save;
				system("cls");		
			}
			
		void show()
			{
		
				system("cls");
	 			
				ifstream fin("data.dat",ios::app);
				
				
				cout<<"\n\t\t\t\tAcc no "<<"Fname"<<"\t"<<"Lname"<<"\t"<<"add"<<"\t"<<"mob\t\t"<<"Day-Month-Year\t"<<"Type\t"<<"Balance\n\n";
			    while ((fin>>a>>s1>>s2>>add>>mob>>day>>month>>year>>type>>cash))
				{
					
				cout<<"\n\t\t\t\t"<<a<<"\t"<<s1<<"\t"<<s2<<"\t"<<add<<"\t"<<mob<<"\t"<<day<<"  "<<month<<"  "<<year<<"\t"<<type<<"\t"<<cash;
				
				}

				fin.close();
				
	 			cout<<"\n\n\t\t\t\tPress 1 Goto Main Menu... \n";			
				cout<<"\t\t\t\t";cin>>save;
				system("cls");
			}
		
		
		void search()
		{
			int no;
			system("cls");
			cout<<"Enter Account Number :";
			cin>>no;
	 			
				ifstream fin("data.dat",ios::app);
				
				
				cout<<"\n\t\t\t\tAcc no "<<"Fname"<<"\t"<<"Lname"<<"\t"<<"add"<<"\t"<<"mob\t\t"<<"Day-Month-Year\t"<<"Type\t"<<"Balance\n\n";
			    while ((fin>>a>>s1>>s2>>add>>mob>>day>>month>>year>>type>>cash))
				{
					
					if(a==no)
					{			
				 	cout<<"\n\t\t\t\t"<<a<<"\t"<<s1<<"\t"<<s2<<"\t"<<add<<"\t"<<mob<<"\t"<<day<<"  "<<month<<"  "<<year<<"\t"<<type<<"\t"<<cash;
			        }
				}

				fin.close();
				
	 			cout<<"\n\n\t\t\t\tPress 1 Goto Main Menu... \n";			
				cout<<"\t\t\t\t";cin>>save;
				system("cls");	
			
		}
			
			void del()
			{
				int del;
				cout<<"Enter the Account Number to delete :";
                cin>>del;
                ifstream inf("data.dat",ios::app);
				ofstream outf("new.dat",ios::app);
				
				  while ((inf>>a>>s1>>s2>>add>>mob>>day>>month>>year>>type>>cash))
                  {
                    if(a!=del)
                    {
      				
					outf<<a<<"\t"<<s1<<"\t"<<s2<<"\t"<<add<<"\t"<<mob<<"\t"<<day<<" "<<month<<" "<<year<<"\t"<<type<<"\t"<<cash<<"\n"; 
					}
                 else
                  { 
                        cout<<"\nRecord deleted successfully......!\n";
                  }
                   }
                     outf.close();
                     inf.close();
                    remove("data.dat");
                rename("new.dat","data.dat");
				   
	 			cout<<"\n\nPress 1 Goto Main Menu... \n";			
				cin>>save;
				system("cls");		
		
			}
			
			
			void update()
		{
		
				int choice,id;
				ifstream inf("data.dat",ios::app);
				ofstream outf("new.dat",ios::app);
				
				cout<<"\nEnter the id you want to Update :";
                cin>>id;
                
                 while ((inf>>a>>s1>>s2>>add>>mob>>day>>month>>year>>type>>cash))
                  {
                  
				  	if(a==id)
				  	{
				  	
				  	 cout<<"\nWhich information do you want to change?\n1.First Name :\n2.Last Name :\n3.Address :\n4.Mobile Number :\nEnter your choice:";
                     cin>>choice;
                     system("cls");
                     
                     
                        	if(choice==1)
                       		{
			    		 		cout<<"Enter the First name:";
                         		cin>>s1;
                         		outf<<a<<"\t"<<s1<<"\t"<<s2<<"\t"<<add<<"\t"<<mob<<"\t"<<day<<" "<<month<<" "<<year<<"\t"<<type<<"\t"<<cash<<"\n"; 
                         		
                         		cout<<"Changes saved!";
                      		}
                      		
                      		else if(choice==2)
                      		{
                      			cout<<"Enter the Last Name:";
                                cin>>s2;
                                outf<<a<<"\t"<<s1<<"\t"<<s2<<"\t"<<add<<"\t"<<mob<<"\t"<<day<<" "<<month<<" "<<year<<"\t"<<type<<"\t"<<cash<<"\n"; 
                                
                      			cout<<"Changes saved!";
							}
							
								else if(choice==3)
                      		{
                      			cout<<"Enter the Address :";
                                cin>>mob;
                               	outf<<a<<"\t"<<s1<<"\t"<<s2<<"\t"<<add<<"\t"<<mob<<"\t"<<day<<" "<<month<<" "<<year<<"\t"<<type<<"\t"<<cash<<"\n"; 
                                
                      			cout<<"Changes saved!";
							}
							
							else if(choice==4)
                      		{
                      			cout<<"Enter the Mobile number :";
                                cin>>mob;
                               	outf<<a<<"\t"<<s1<<"\t"<<s2<<"\t"<<add<<"\t"<<mob<<"\t"<<day<<" "<<month<<" "<<year<<"\t"<<type<<"\t"<<cash<<"\n"; 
                                
                      			cout<<"Changes saved!";
							}
							
							
							
                     
				  	
				  			}
                             else
                             	outf<<a<<"\t"<<s1<<"\t"<<s2<<"\t"<<add<<"\t"<<mob<<"\t"<<day<<" "<<month<<" "<<year<<"\t"<<type<<"\t"<<cash<<"\n"; 
                     }
                           
				  
				   outf.close();
                     inf.close();
                    remove("data.dat");
                rename("new.dat","data.dat");
				  
	 			cout<<"\nPress 1 Goto Main Menu...\n";			
				cin>>save;
				system("cls");		
	
		}
			
		
	};



     
 //    Main Program Strat By Here pratik.......
     
		int main()  
		{  
			
		int n;	
		bank b1;
		
		system("color 4");
 
// 		password();
   		
		   	
			
			
		while(1)
		{
			
			system("CLS");
			cout<<"\n\n\t\t\t\t======================\n";
			cout<<"\t\t\t\tBANK MANAGEMENT SYSTEM";
			cout<<"\n\t\t\t\t======================\n";

		cout<<"\t\t\t\t    ::MAIN MENU::\n";
		cout<<"\n\t\t\t\t1. NEW ACCOUNT";
		cout<<"\n\t\t\t\t2. DEPOSIT AMOUNT";
		cout<<"\n\t\t\t\t3. WITHDRAW AMOUNT";
		cout<<"\n\t\t\t\t4. BALANCE ENQUIRY";
		cout<<"\n\t\t\t\t5. ALL ACCOUNT HOLDER LIST";
		cout<<"\n\t\t\t\t6. CLOSE AN ACCOUNT";
		cout<<"\n\t\t\t\t7. MODIFY AN ACCOUNT";
		cout<<"\n\t\t\t\t8. EXIT";
		cout<<"\n\n\t\t\t\tSelect Your Option (1-8): ";
		cin>>n;
		
		
		switch (n)
		{
	 		case 1:
	 			{ 
	 			
				b1.accnumber();
				b1.create();
				break;	
				 }
	 	
		 	case 2 :
	 			{	
	 			b1.deposite();
				break;   	
			 	}
	 		
	 		
	 		case 3 :
	 			{
	 			b1.withdraw();
		 		break;	
				}
				 
				 
			case 4 :
				{		
			  	b1.search();	
		   	    break;
			    }	 	 
			
			case  5:
			 	{	
				b1.show();
                break;
			    }
			    
			    
			case  6:
			 	{	
				b1.del();
                break;
			    }
			
			case  7:
			 	{
				 b1.update();	
				
                break;
			    }
			    
	 		case 8 :
	 			{
				cout<<"Thank You.....";
				exit(0);          
			    }
	 		
			 
			default : 
	 		cout<<"\n\n Warning!! Incorrect Choice";
			cout<<"\n\n Please press 'Enetr' key....\n";
			getch();
			system("cls");
	 		
	 		
		 }
		
	
		}
		
		
	
			
		
  getch(); 
  return 0; 
		}


