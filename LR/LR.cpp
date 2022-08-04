#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;


void login();
void registration();
void forgot();



int main(){
	
	int choice;
	cout<<"\t\t\t____________________________________________________\n\n\n";
	cout<<"\t\t\t_____        Welcome to Login Page          ________\n\n\n";
	cout<<"\t\t\t_____________    Menu                       _________\n\n";
	cout<<"                                                            \n\n";
	cout<<"\t|  Press 1 to Login                              |"<<endl;
	cout<<"\t|  Press 2 to Register                           |"<<endl;
	cout<<"\t|  Press 3 to Reset Password                     |"<<endl;
	cout<<"\t|  Press 4 to Exit                               |"<<endl;
	
	cout<<"\n\t\t\t  Please Enter Your Choice  :  ";
	cin>>choice;
	cout<<endl;
	switch(choice){
		
		case 1:
			login();
			break;
		case 2:
			registration();
			break;
			
		case 3:
			forgot();
			break;
			
		case 4:
			cout<<"\n\t\t Thank You !!\n\n";
			
		default:
			system("cls");
			cout<<"\t\t\t  Please select from given Options!!\n"<<endl;
			main();	
		
		
	}
	
}

void login(){
	
	int count;
	string userId,password,id,pass;
	system("cls");
	cout<<"\t\t\t Please Enter Username and Password :"<<endl;
	cout<<"\t\t Enter Username";
	cin>>userId;
	cout<<"\t\t\t Password";
	cin>>password;
	
	ifstream input("records.txt");
	while(input>>id>>pass){
		if(id==userId && pass==password){
			count=1;
			system("cls");
		}
	}
	input.close();
	if(count==1){
		cout<<userId<<"\n Your Login Is Successfull !\n";
		main();
		
	}
	else{
		cout<<"\n\t Credentials does not match !!";
		main();
		
	}
}
void registration(){
	string rUserId,rPassword, rId, rPass;
	system("cls");
	cout<<"\t\t Enter Username";
	cin>>rUserId;
	cout<<"\t\t\t Password";
	cin>>rPassword;
	
	ofstream f1("records.txt", ios::app);
	f1<<rUserId<<'  '<<rPassword<<endl;
	system("cls");
	
	cout<<"\n\t Registration is Successfull\n";
	main();
	
	
}
void forgot(){
	
	int option;
	system("cls");
	cout<<"\t\t\t  Reset Your Password\n";
	cout<<"Press 1 to search your id by username "<<endl;
	cout<<"Press 2 to go back to main Menu \n"<<endl;
	cout<<"\t\t\t Enter Your Choice :";
	cin>>option;
	switch(option){
		case 1:
			{
			
			int count=0;
			string sUserId, sId, sPass;
			cout<<"\n\t\t Enter the username :";
			cin>>sUserId;
			
			ifstream f2("records.txt");
			while(f2>>sId>>sPass){
				if(sId==sUserId){
					count=1;
				}
			}
			f2.close();
			if(count==1){
				cout<<"Your account is found !!\n";
				cout<<"Your password is: "<<sPass;
				main();
				
			}
			else{
				cout<<"Username doesnot matched !!\n";
				main();
				
			}
			break;
		}
			
		case 2:
			{
			
			main();
	}
			
		default:
			cout<<"\t\t\t\t Wrong choice !!"<<endl;
			forgot();
			
			
	}
	
}
