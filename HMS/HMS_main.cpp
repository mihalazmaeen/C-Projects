#include<iostream>
using namespace std;

int main(){
	int quantity;
	int choice;
	//Initial Quantity
	int qRooms=0,qPasta=0,qBurger=0,qNoodles=0,qShake=0,qChicken=0;
	//Sold Items
	int sRooms=0,sPasta=0,sBurger=0,sNoodles=0,sShake=0,sChicken=0;
	//Total processed items
	int totalRooms=0,totalPasta=0,totalBurger=0,totalNoodles=0,totalShake=0,totalChicken=0;
	
	cout<<"\n\t Enter initial items";
	cout<<"\n Rooms available";
	cin>>qRooms;
	cout<<"\n Quantity of Pasta :";
	cin>>qPasta;
	cout<<"\n Quantity of Burger :";
	cin>>qBurger;
	cout<<"\n Quantity of Noodles :";
	cin>>qNoodles;
	cout<<"\n Quantity of Shake :";
	cin>>qShake;
	cout<<"\n Quantity of Chicken :";
	cin>>qChicken;
	
	m:
	cout<<"\n\t\t\t  Please select from the Menu";
	cout<<"\n\n1) Rooms";
	cout<<"\n2) Pasta";
	cout<<"\n3) Burger";
	cout<<"\n4) Noodles";
	cout<<"\n5) Shake";
	cout<<"\n6) Chicken";
	cout<<"\n7) Information of sales and collection";
	cout<<"\n8) Exit";
	
	cout<<"\n\n Please enter your choice";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\n\t Only "<<qRooms-sRooms<<" Rooms are available";
			cout<<"\n\n How Many Room/Rooms Do You Want?";
			cin>>quantity;
			if(qRooms-sRooms >=quantity){
				sRooms=sRooms+quantity;
				totalRooms=(totalRooms+quantity*1500);
				cout<<"\n\n\t\t"<<quantity<< "room/rooms have been allotted to You";
				cout<<"\n\n\t\t fare of"<<quantity<<"room/rroms is "<<totalRooms<<" BDT";
				
			}
			else
				cout<<"\n\t Only "<<qRooms-sRooms<<" Rooms are available";
				break;
				
		case 2:
			cout<<"\n\t Only "<<qPasta-sPasta<<" Pastas are available";
			cout<<"\n\n How Many pastas Do You Want?";
			cin>>quantity;
			if(qPasta-sPasta >=quantity){
				sPasta=sPasta+quantity;
				totalPasta=(totalPasta+quantity*150);
				cout<<"\n\n\t\t"<<quantity<< " Pastas are in Process!!";
				cout<<"\n\n\t\t Price of"<<quantity<<"Pasta is "<<totalPasta<<" BDT";
				
			}
			else
				cout<<"\n\t Only "<<qPasta-sPasta<<" Pasta are available";
				break;
		case 3:
			cout<<"\n\t Only "<<qBurger-sBurger<<" Pastas are available";
			cout<<"\n\n How Many Burgers Do You Want?";
			cin>>quantity;
			if(qBurger-sBurger >=quantity){
				sBurger=sBurger+quantity;
				totalPasta=(totalPasta+quantity*150);
				cout<<"\n\n\t\t"<<quantity<< " Pastas are in Process!!";
				cout<<"\n\n\t\t Price of"<<quantity<<"Pasta is "<<totalBurger<<" BDT";
				
			}
			else
				cout<<"\n\t Only "<<qPasta-sPasta<<" Pasta are available";
				break;
		case 4:
			cout<<"\n\t Only "<<qNoodles-sNoodles<<" Noodles are available";
			cout<<"\n\n How Many Noodles Do You Want?";
			cin>>quantity;
			if(qNoodles-sNoodles >=quantity){
				sNoodles=qNoodles-sNoodles;
				totalNoodles=(totalNoodles+quantity*150);
				cout<<"\n\n\t\t"<<quantity<< " Noodles are in Process!!";
				cout<<"\n\n\t\t Price of"<<quantity<<"Noodles is "<<totalNoodles<<" BDT";
				
			}
			else
				cout<<"\n\t Only "<<qNoodles-sNoodles<<" Noodles are available";
				break;
		case 5:
			cout<<"\n\t Only "<<qShake-sShake<<" Shakes are available";
			cout<<"\n\n How Many Shakes Do You Want?";
			cin>>quantity;
			if(qShake-sShake >=quantity){
				sShake=sShake+quantity;
				totalShake=(totalShake+quantity*150);
				cout<<"\n\n\t\t"<<quantity<< " Shake are in Process!!";
				cout<<"\n\n\t\t Price of"<<quantity<<"Pasta is "<<totalShake<<" BDT";
				
			}
			else
				cout<<"\n\t Only "<<qShake-sShake<<" Pasta are available";
				break;
		case 6:
			cout<<"\n\t Only "<<qChicken-sChicken<<" Pastas are available";
			cout<<"\n\n How Many Burgers Do You Want?";
			cin>>quantity;
			if(qChicken-sChicken >=quantity){
				sChicken=sChicken+quantity;
				totalChicken=(totalChicken+quantity*150);
				cout<<"\n\n\t\t"<<quantity<< " Chicken are in Process!!";
				cout<<"\n\n\t\t Price of"<<quantity<<"Pasta is "<<totalChicken<<" BDT";
				
			}
			else
				cout<<"\n\t Only "<<qChicken-sChicken<<" Chicken are available";
				break;
				
		case 7:
			cout<<"\n\t\t Details of sales and collection";
			cout<<"\n\n Number of rooms we had:"<<qRooms;
			cout<<"\n\n\t Number of Rooms we gave for rent"<<sRooms;
			cout<<"\n\n\t\t  Remaining rooms: "<<qRooms-sRooms;
			cout<<"\n\n\t\t Total Collection of Rents :"<<totalRooms;
			
	
			cout<<"\n\n Number of Pastas we had:"<<qPasta;
			cout<<"\n\n\t Number of Pastas we sold"<<sPasta;
			cout<<"\n\n\t\t  Remaining Pastas: "<<qPasta-sPasta;
			cout<<"\n\n\t\t Total Collection of selling Pastas :"<<totalPasta;
			
			cout<<"\n\n Number of Burger we had:"<<qBurger;
			cout<<"\n\n\t Number of Burger we sold"<<sBurger;
			cout<<"\n\n\t\t  Remaining Burgers: "<<qBurger-sBurger;
			cout<<"\n\n\t\t Total Collection of selling Burgers :"<<totalBurger;
			
			cout<<"\n\n Number of Noodles we had:"<<qNoodles;
			cout<<"\n\n\t Number of Noodles we sold"<<sNoodles;
			cout<<"\n\n\t\t  Remaining Noodles: "<<qNoodles-sNoodles;
			cout<<"\n\n\t\t Total Collection of selling Noodles :"<<totalNoodles;
			
			cout<<"\n\n Number of Shake we had:"<<qShake;
			cout<<"\n\n\t Number of Shakes we sold"<<sShake;
			cout<<"\n\n\t\t  Remaining Shakes: "<<qShake-sShake;
			cout<<"\n\n\t\t Total Collection of selling Shakes :"<<totalShake;
			
			cout<<"\n\n Number of Chicken we had:"<<qChicken;
			cout<<"\n\n\t Number of Chicken we sold"<<sChicken;
			cout<<"\n\n\t\t  Remaining Chicken: "<<qChicken-sChicken;
			cout<<"\n\n\t\t Total Collection of selling Chicken :"<<totalChicken;
		
		case 8:
			exit(0);
			
		default:
			cout<<"\n Please select an option from the list";
			

			
			
			
			
					
					
				
				
	}
	goto m;
}
