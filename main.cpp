#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
  
 class brts{
 	private:
 	string stations[11]={" ","Akhbarnagar","Memnagar","Sivranjani","Nehrunagar","Star bazzar","Jodhpur","Jaimangal","ZundalCircle","Sola Bhagwat","GeetaMandir"};
 	int fare[11]={14,10,12,5,10,6,8,22,4,20,22};
 	int code;
 	int number_tic;
	public: 	
 	   void menu(){
 	   	
 	   	 cout<<"\t\t\t\t\t\tWELCOME TO JANMARG\n"; //title
 	   	  for(int i=1; i<=10 ; ++i){
 	   	  	cout<<"--------------------------------\n";
 	   	  	cout<<i<<") "<<stations[i]<<"\t    "<< fare[i]<<"/-"<<endl;
 	   	  	
			}
 	   	   cout<<"--------------------------------\n";
		}
		void desti(){
			
			cout<<"Destination: ";  ///ask for destination
			cin>>code;
			while(code>10 || code<1){   // loop for invalid code
				cout<<"Enter Valid Code: ";
				cin>>code;
			}
			cout<<"You Choosed: "<<stations[code]<<endl; //showing choosed stations to avoid mistakes.
			cout<<"How Many Tickets: ";   //how many tickets passenge want 
			cin>>number_tic;
			cout<<number_tic*fare[code]<< "/-";
			srand(time(0));
			system("cls");
			system("color fc");
			cout<<"Ticket Type: "<<"BRTS TICKET\n";
			cout<<"Ticket No. "<<rand()%1556542+54454<<endl;
			cout<<"Fare (Rs): "<<number_tic*fare[code]<<".00"<<"\n";
			cout<<"Device/ID: "<<rand()%1556542+54454<<"\n";
			cout<<"THANK YOU, HAVE A NICE TRIP\n\n";
			
			
		}
		
 	
 }; 
  
int main(){
	string y;
	newpage:
	system("cls");
	brts passenger;
	passenger.menu();
	passenger.desti();
    cout<<"Enter 'y' For New Page: ";
	 cin>>y;
     while(y!="y" && y!="Y"){
     cout<<"Enter valid Character: ";
	 cin>>y;
	 }
	 if(y=="Y" || y=="y"){
	  goto newpage;	
	 }
	return 0;
}

