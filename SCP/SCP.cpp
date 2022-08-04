#include<iostream>
#include<fstream>
using namespace std;

class shopping{
	
	private:
		int pCode;
		float price;
		float discount;
		string pName;
		
		public:
			void menu();
			void administrator();
			void buyer();
			void add();
			void edit();
			void remaining();
			void list();
			void receipt();
			
			
			
};

void shopping::menu(){
	m:
	int choice;
	string email;
	string password;
	cout<<"\t\t\t\t____________________________\n";
	cout<<"\t\t\t\t                            \n";
	cout<<"\t\t\t\t   Super Market Main Menu   \n";
	cout<<"\t\t\t\t                            \n";
	cout<<"\t\t\t\t____________________________\n";
	cout<<"\t\t\t\t                            \n";
	cout<<"\t\t\t\t|   1) Administrator   |\n";
	cout<<"\t\t\t\t|                      |\n";
	cout<<"\t\t\t\t|   2) Buyer           |\n";
	cout<<"\t\t\t\t|                      |\n";
	cout<<"\t\t\t\t|   3) exit            |\n";
	cout<<"\t\t\t\t| Please select from menu |\n";
	cin>>choice;
	
	switch(choice){
		case 1:{
			cout<<"\t\t\t Please Login \n";
			cout<<"\t\t\t Enter Email   \n";
			cin>>email;
			cout<<"\t\t\t Enter password  \n";
			cin>>password;
			if(email=="mihal@gmail.com" && password=="mihal123"){
				administrator();
				
			}
			else{
				
				cout<<"Invalid email/password";
			}
			
			
			break;
		}
		
		case 2:{
			
			buyer();
			
			break;
		}
		case 3:{
			exit(0);
			break;
		}
		default:{
			
			cout<<"Please select from given options";
			break;
		}
	}
	goto m;
	
}

void shopping::administrator(){
	m:
	int choice;
	cout<<"\n\n\n\t\t\t\ Administrator Menu";
	cout<<"\n\t\t\t\t|____1) Add Product____|";
	cout<<"\n\t\t\t\t|                      |";
	cout<<"\n\t\t\t\t|____2) Modify Product_|";
	cout<<"\n\t\t\t\t|                      |";
	cout<<"\n\t\t\t\t|____3) Delete Product_|";
	cout<<"\n\t\t\t\t|                      |";
	cout<<"\n\t\t\t\t|____4) Back to Menu___|";
	cout<<"\n\t\t\t\t|                      |";
	
	cout<<"\n\t\t\t\t| Please enter Choice   ";
	cin>>choice;
	switch(choice){
		
		case 1:
			add();
			break;
			
		case 2:
			edit();
			break;
		case 3:
			remaining();
			break;
		case 4:
			menu();
			break;
			
		default:
			cout<<"Invalid Choice";
	}
	goto m;
	
}
void shopping::buyer(){
	m:
	int choice;
	cout<<"\t\t\t Buyer \n";
	cout<<"\t\t\t________ \n";
	cout<<"               \n";
	cout<<"\t\t\t\t 1) Buy Product \n";
	cout<<"               \n";
	cout<<"\t\t\t\t 2) Go Back \n";
	cout<<"\t\t\t\t Enter Your Choice :";
	
	cin>>choice;
	switch(choice){
		case 1:
			receipt();
			break;
			
		case 2:
			menu();
			
		default:
			cout<<"Invalid Choice";
			
	}
	goto m;
}
void shopping::add(){
	fstream data;
	int c;
	int token=0;
	float p;
	float d;
	string n;
	m:
	cout<<"\n\n\t\t\t Add New Product";
	cout<<"\n\n\t Product Code of the Product ";
	cin>>pCode;
	cout<<"\n\n\t Name of the Product ";
	cin>>pName;
	cout<<"\n\n\t Price of the Product ";
	cin>>price;
	cout<<"\n\n\t Discount on the Product";
	cin>>discount;
	
	data.open("database.txt",ios::in);
	
	if(!data){
		data.open("database.txt", ios::app|ios::out);
		data<<"  "<<pCode<<"  "<<pName<<"  "<<price<<"  "<<discount<<"\n";
		data.close();
	}
	else{
		data>>c>>n>>p>>d;
		while(!data.eof()){
			if(c==pCode){
				token++;
			}
			data>>c>>n>>p>>d;
			
		}
		data.close();
	
	
	if(token==1)
		goto m;
	else{
		data.open("database.txt", ios::app|ios::out);
		data<<"  "<<pCode<<"  "<<pName<<"  "<<price<<"  "<<discount<<"\n";
		data.close();
	}
}
	
	cout<<"\n\n\t\t Record Inserted";
}
void shopping::edit(){
	
	fstream data,data1;
	int pKey;
	int token=0;
	int c;
	float p;
	float d;
	string n;
	
	cout<<"\n\t\t\t Modify the record";
	cout<<"\n\t\t\t Product code";
	cin>>pKey;
	
	data.open("database.txt", ios::in);
	if(!data){
		cout<<"\n\n File does not exist";
		
	}
	else{
		data.open("database1.txt",ios::app|ios::out);
		data>>pCode>>pName>>price>>discount;
		while(!data.eof())
		{
			if(pKey==pCode){
				
				cout<<"\n\t\t\t Product new code :";
				cin>>c;
				cout<<"\n\t\t\t Product Name :";
				cin>>n;
				cout<<"\n\t\t\t Product Price :";
				cin>>p;
				cout<<"\n\t\t\t Product Discount :";
				cin>>d;
				data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
				cout<<"\n\t\t  Record edited";
				token++;
				
			}
			else{
				data1<<" "<<pCode<<" "<<pName<<" "<<price<<" "<<discount<<"\n";
			}
			data>>pCode>>pName>>price>>discount;
			
		}
		data.close();
		data1.close();
		
		remove("database.txt");
		rename("database1.txt","database.txt");
		
		if(token==0){
			cout<<"\n\n Record not Found, Sorry !";
			
		}
	}
		
	
}
void shopping::remaining(){
	
	fstream data,data1;
	int pKey;
	int token=0;
	cout<<"\n\n\t Delete Product";
	cout<<"\n\n\t Product Code :";
	cin>>pKey;
	data.open("database.txt",ios::in);
	if(!data){
		cout<<"File Does not Exist";
		
	}
	else{
		data1.open("database1.txt",ios::app|ios::out);
		data>>pCode>>pName>>price>>discount;
		while(!data.eof()){
			if(pCode==pKey){
				cout<<"\n\n\t Product Deleted!!";
				token++;
			}
			else{
				
				data1<<" "<<pCode<<" "<<pName<<" "<<price<<" "<<discount<<"\n";
			}
			data>>pCode>>pName>>price>>discount;
		}
		data.close();
		data1.close();
		remove("database.txt");
		rename("database1.txt","database.txt");
		
		if(token==0){
			cout<<"\n\n\t Record Not Found";
		}
		
	}
	
	
}
void shopping::list(){
	
	fstream data;
	data.open("database.txt",ios::in);
	cout<<"\n\n|__________________________________\n";
	cout<<"ProNo\t\tName\t\tPrice\n";
	cout<<"\n\n|__________________________________\n";
	data>>pCode>>pName>>price>>discount;
	while(!data.eof()){
		cout<<pCode<<"\t\t"<<pName<<"\t\t"<<price<<"\n";
		data>>pCode>>pName>>price>>discount;
		
	}
	data.close();
	
}
void shopping::receipt(){
	
	fstream data;
	int arrc[100];
	int arrq[100];
	char choices;
	int c=0;
	float amount=0;
	float discount=0;
	float total=0;
	cout<<"\n\n\t\t\t Receipt ";
	data.open("database.txt",ios::in);
	if(!data){
		cout<<"\n\n\t Empty Database";
		
	}
	else{
		data.close();
		
		list();
		cout<<"\n______________________________________\n";
		cout<<"\n                                      \n";
		cout<<"\n     Please Place the order           \n";
		cout<<"\n                                      \n";
		do{
			m:
			cout<<"\n\n Enter Product Code";
			cin>>arrc[c];
			cout<<"\n\n Enter the Product Quantity";
			cin>>arrq[c];
			for(int i=0;i<c;i++){
				if(arrc[c]==arrc[i]){
					cout<<"\n\n Duplicate Product Code";
					goto m;
				}
			}
			c++;
			cout<<"\n\n\t Want to Buy more Product? if Yes type y";
			cin>>choices;
		}
		while(choices=='y');
		
		cout<<"\n\n\t\t\t_______________Receipt_______________\n";
		cout<<"\nProduct No\t Product Name\t Product Quantity\tPrice\tamount\tAmount with Discount";
		
		for(int i=0;i<c;i++){
			data.open("database.txt",ios::in);
			data>>pCode>>pName>>price>>discount;
			while(!data.eof()){
				if(pCode==arrc[i]){
					
					amount=price*arrq[i];
					discount=amount-(amount*discount/100);
					total=total+discount;
					cout<<"\n"<<pCode<<"\t\t"<<pName<<"\t\t"<<arrq[i]<<"\t\t"<<price<<"\t\t"<<amount<<"\t\t"<<discount;
				}
				data>>pCode>>pName>>price>>discount;	
			}
		}
		data.close();
		
		
		
	}
	cout<<"\n\n_____________________________________________";
	cout<<"\n Total Amount :"<<total;
}
int main(){

	shopping s;
	s.menu();

}














