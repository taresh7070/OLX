#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;


void fs();
void old_id();
void new_id();
void buyer();
int seller();


void old_id()
	{
	ifstream fin;
	fin.open("id_list.txt");
	if(fin.fail())
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}
	string mobile_no;
	cout << "Please enter mobile number : ";
	cin  >> mobile_no;
	bool isFound=0;
	while(!fin.eof())
	{
		string temp = "";
		getline(fin,temp);
		for(int i=0;i<mobile_no.size();i++)
		{
			if(temp[i]==mobile_no[i])
				isFound = 1;
			else
			{
				isFound =0;
				break;
			}
		}

		if(isFound)
		{
			string password;
			string p="";
			cout << "enter Password ";
			cin  >>password;
		  	for(int i = mobile_no.size()+1;i<temp.size();i++)
				p+=temp[i];
			if(password==p)
			{
				fs();
			}
			//cout<<"correct password";
			else
			cout<<"worng password";
		}
	}
	
	fin.close();
}


void new_id()
	{
   		ofstream fout;
	    ifstream fin;
	    string name;
	    string numb;
	    string pass;
	    fout.open("id_list.txt", ios::app);
	    if(fout.is_open())
	    {
	        //cout << "Enter your name ";
	        getline(cin, name);
	        fout << name;
	        cout << "Enter your mobile no. ";
	        getline(cin, numb);
	        fout << numb << ends;
	  		cout << "Enter your password ";
	        getline(cin, pass);
	        fout << pass << endl;
	        fout.close();
	        cout << endl;
		}
		fs();	
	}
	
	
void fs()
{
		int ch;
		system("cls");
	cout<<"\n\n\n\n\n\t\t";
	cout<<"1. Buyer"<<"\n\t\t"<<"2. Seller "<<"\n\t\t3. Back "<<"\n\t\t"<<"enter your choice ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			system("cls");
			buyer();
			break;
		case 2:
			system("cls");
			seller();
			break;
		default:
			system("cls");	
	}	
}

int seller()
	{
		int y;
		string name,loc,BHK,cost,cn,cmp,model,fur,ut,tow,tw,specs,sr,mt,RAM,mmry,prscsr,dl,nob,yr,sec,t;
		cout<<"The item that you want to sell falls under which of the following product categories?\n1.House\n2.Flat\n3.Cars\n4.Scooty\n5.Bike\n6.Furniture\n7.Work From Home Jobs\n8.Office based Jobs\n9.Mobiles\n10.Tablets\n11.Desktops\n12.Laptops\n13.A.C\n14.T.V\n15.Books\n16.back ";
		cout<<"\nEnter the number corresponding to  your product's category ";
		cin>>y;
		switch(y)
		{
			case 1: 
			{
			 system("cls"); 
			 cout<<"\nNOTE:-USE UNDERSCORE(_) INSTED OF SPACE( ). SPACE IS TREATED AS TERMINATER\n\n";	
			 ofstream fout;
			 fout.open("House.txt",ios::app);
	         cout<<"Enter the city of your house ";
			 cin>>loc;
			 cout<<"Enter the number of BHKs your house comprises.. ";
			 cin>>BHK;
			 cout<<"Enter the estimated cost of your house ";
			 cin>>cost;
			 cout<<"Enter your name ";
			 cin>>name;
			 cout<<"Enter your contact number ";
			 cin>>cn;
			 fout<<"City= "<<loc<<"\t"<<"BHK= "<<BHK<<"\t"<<"Price= "<<cost<<"\t"<<"Name= "<<name<<"\t"<<"Contact No.= "<<cn<<"\n";
			 fout<<"================================================================================\n";
			 fout.close();
			 cout<<"Thanku for register yourself";
			 getch();
			 fs();
			 break;
			}
			
			case 2:
			{
			 system("cls");	
			 cout<<"\nNOTE:-USE UNDERSCORE(_) INSTED OF SPACE( ). SPACE IS TREATED AS TERMINATER\n\n";
			 ofstream fout;
			 fout.open("Flat.txt",ios::app);
		     cout<<"Enter the city of your flat ";
			 cin>>loc;
			 cout<<"Enter the estimated cost of your flat ";
			 cin>>cost;
			 cout<<"Enter your name ";
			 cin>>name;
			 cout<<"Enter your contact number ";
			 cin>>cn;
			 fout<<"City= "<<loc<<"\t"<<"BHK= "<<BHK<<"\t"<<"Price= "<<cost<<"\t"<<"Name= "<<name<<"\t"<<"Contact No.= "<<cn<<"\n";
			 fout<<"================================================================================\n";
			 fout.close();
			 cout<<"Thanku for register yourself";
			 getch();
			 fs();
			 break;
			}
			
			case 3:
			{
			 system("cls");
	         cout<<"\nNOTE:-USE UNDERSCORE(_) INSTED OF SPACE( ). SPACE IS TREATED AS TERMINATER\n\n";
			 ofstream obj("Car.txt",ios::app);
			 cout<<"Enter the name of the company to which your car belongs to: ";
			 cin>>cmp;
			 cout<<"Enter the year of car purchase ";
			 cin>>model;
			 cout<<"Enter the estimated cost of your car ";
			 cin>>cost;
			 cout<<"Enter your name ";
			 cin>>name;
			 cout<<"Enter your contact number ";
			 cin>>cn;
			 obj<<"Company= "<<cmp<<"\t"<<"Year= "<<model<<"\t"<<"Cost= "<<cost<<"\t"<<"Name"<<name<<"\t"<<"Contact No.= "<<cn<<"\n";
			 obj<<"================================================================================\n";			
			 obj.close();
			 cout<<"Thanku for register yourself";
			 getch();
			 fs();
			 break;
			}
			
			case 4:
			{
			 system("cls");	
			 cout<<"\nNOTE:-USE UNDERSCORE(_) INSTED OF SPACE( ). SPACE IS TREATED AS TERMINATER\n\n";
			 ofstream obj("Scooty.txt",ios::app);
			 cout<<"Enter the name of the brand to which your product belongs to: ";
			 cin>>cmp;
			 cout<<"Enter the year of scooty purchase ";
			 cin>>model;
			 cout<<"Enter the estimated cost of your product ";
			 cin>>cost;
			 cout<<"Enter your name ";
			 cin>>name;
			 cout<<"Enter your contact number ";
			 cin>>cn;
			 obj<<"Company= "<<cmp<<"\t"<<"Year= "<<model<<"\t"<<"Cost= "<<cost<<"\t"<<"Name= "<<name<<"\t"<<"Contact No.= "<<cn<<"\n";
			 obj<<"================================================================================\n";
			 obj.close();
			 cout<<"Thanku for register yourself";
			 getch();
			 fs();
			 break;
			}
			
			case 5:
			{
			 system("cls");
			 cout<<"\nNOTE:-USE UNDERSCORE(_) INSTED OF SPACE( ). SPACE IS TREATED AS TERMINATER\n";
			 ofstream obj("Bike.txt",ios::app);
			 cout<<"Enter the name of the brand to which your product belongs to: ";
			 cin>>cmp;
			 cout<<"Enter the year of bike purchase ";
			 cin>>model;
			 cout<<"Enter the estimated cost of your product ";
			 cin>>cost;
			 cout<<"Enter your name ";
			 cin>>name;
			 cout<<"Enter your contact number ";
			 cin>>cn;
			 obj<<"Company= "<<cmp<<"\t"<<"Year= "<<model<<"\t"<<"Cost= "<<cost<<"\t"<<"Name= "<<name<<"\t"<<"Contact No.= "<<cn<<"\n";
			 obj<<"================================================================================\n";
			 obj.close();
			 cout<<"Thanku for register yourself";
			 getch();
			 fs();
			 break;
			}
			
			case 6:
			{
			 system("cls");
			 cout<<"\nNOTE:-USE UNDERSCORE(_) INSTED OF SPACE( ). SPACE IS TREATED AS TERMINATER\n\n";
			 ofstream obj("Furniture.txt",ios::app);
			 cout<<"Enter the name of the furniture you want to sell ";
			 cin>>fur;
			 cout<<"The "<<fur<<" has been used for how many years? ";
			 cin>>ut;//usage time
			 cout<<"Enter the type of wood of which your furniture is mainly comprised of ";
			 cin>>tow;//type of wood
			 cout<<"Enter the estimated cost of your product ";
			 cin>>cost;
			 cout<<"Enter your name ";
			 cin>>name;
			 cout<<"Enter your contact number ";
			 cin>>cn;
			 obj<<"Name= "<<fur<<"\t"<<"Usage Time= "<<ut<<"\t"<<"Type of wood= "<<tow<<"\t"<<"Cost= "<<cost<<"\t"<<"Name= "<<name<<"\t"<<"Contact No.= "<<cn<<"\n";
			 obj<<"================================================================================\n";
			 obj.close();
			 cout<<"Thanku for register yourself ";
			 getch();
			 fs();
			 break;
			}
			
			case 7:
			{
			 system("cls");
			 cout<<"\nNOTE:-USE UNDERSCORE(_) INSTED OF SPACE( ). SPACE IS TREATED AS TERMINATER\n\n";
			 ofstream obj("Work From Home Jobs.txt",ios::app);
			 cout<<"Enter the sector to which your work is related ";
			 cin>>sec;
			 cout<<"Enter your skills ";
			 cin>>specs;
			 cout<<"Enter the range in which the salary would be provided ";
			 cin>>sr;//salary range
			 cout<<"Enter your name ";
			 cin>>name;
			 cout<<"Enter your contact number ";
			 cin>>cn;
			 obj<<"Working Sector= "<<sec<<"\t"<<"Skills= "<<specs<<"\t"<<"Prefered Salary= "<<sr<<"\t"<<"Name= "<<name<<"\t"<<"Contact No.= "<<cn<<"\n";
			 obj<<"================================================================================\n";
			 obj.close();
			 cout<<"Thanku for register yourself";
			 getch();
			 fs();
			 break;
			}
			
			case 8:
			{
			 system("cls");
			 cout<<"\nNOTE:-USE UNDERSCORE(_) INSTED OF SPACE( ). SPACE IS TREATED AS TERMINATER\n\n";
			 ofstream obj("Office based Jobs.txt",ios::app);
			 cout<<"Enter the sector to which your work is related ";
			 cin>>sec;
			 cout<<"Enter your skills ";
			 cin>>specs;
			 cout<<"Enter the range in which the salary would be provided ";
			 cin>>sr;//salary range
			 cout<<"Enter your name ";
			 cin>>name;
			 cout<<"Enter your contact number ";
			 cin>>cn;
			 obj<<"Working Sector= "<<sec<<"\t"<<"Skills= "<<specs<<"\t"<<"Prefered Salary= "<<sr<<"\t"<<"Name= "<<name<<"\t"<<"Contact No.= "<<cn<<"\n";			 
			 obj<<"================================================================================\n";
			 obj.close();
			 cout<<"Thanku for register yourself";
			 getch();
			 fs();
			 break;
			}
			
			case 9:
			{
			 system("cls");
			 cout<<"\nNOTE:-USE UNDERSCORE(_) INSTED OF SPACE( ). SPACE IS TREATED AS TERMINATER\n\n";
			 ofstream obj("Mobile.txt",ios::app);
		     cout<<"Enter the name of the brand to which your product belongs to: ";
			 cin>>cmp;
			 cout<<"Enter the model number of your product ";
			 cin>>model;
			 cout<<"Enter the amount of RAM in GB (in digits) your device contains ";
			 cin>>RAM;
			 cout<<"Enter the amount of storage your phone has ";
			 cin>>mmry;
			 cout<<"Enter the time (in years) for which you have used the device ";
			 cin>>ut;
			 cout<<"Enter the estimated cost of your product ";
			 cin>>cost;
			 cout<<"Enter your name ";
			 cin>>name;
			 cout<<"Enter your contact number ";
			 cin>>cn;
			 obj<<"Company= "<<cmp<<"\t"<<"Model= "<<model<<"\t"<<"RAM= "<<RAM<<"\t"<<"Storage= "<<mmry<<"\t"<<"Usage Time= "<<ut<<"\t"<<"Cost= "<<cost<<"\t"<<"Name= "<<name<<"\t"<<"Contact No.= "<<cn<<"\n";
	   		 obj<<"================================================================================\n";
			 obj.close();
			 cout<<"Thanku for register yourself";
			 getch();
			 fs();
			 break;
			}
			
			case 10:
			{
			 system("cls");
			 cout<<"\nNOTE:-USE UNDERSCORE(_) INSTED OF SPACE( ). SPACE IS TREATED AS TERMINATER\n\n";
			 ofstream obj("Tablet.txt",ios::app);
		     cout<<"Enter the name of the brand to which your product belongs to: ";
			 cin>>cmp;
			 cout<<"Enter the model name of your product ";
			 cin>>model;
			 cout<<"Enter the amount of RAM in GB (in digits) your device contains ";
			 cin>>RAM;
			 cout<<"Enter the amount of storage your phone has ";
			 cin>>mmry;
			 cout<<"Enter the time (in years) for which you have used the device ";
			 cin>>ut;
			 cout<<"Enter the estimated cost of your product ";
			 cin>>cost;
			 cout<<"Enter your name ";
			 cin>>name;
			 cout<<"Enter your contact number ";
			 cin>>cn;
			 obj<<"Company= "<<cmp<<"\t"<<"Model= "<<model<<"\t"<<"RAM= "<<RAM<<"\t"<<"Storage= "<<mmry<<"\t"<<"Usage Time= "<<ut<<"\t"<<"Cost= "<<cost<<"\t"<<"Name= "<<name<<"\t"<<"Contact No.= "<<cn<<"\n";
			 obj<<"================================================================================\n";
			 obj.close();
			 cout<<"Thanku for register yourself";
			 getch();
			 fs();
			 break;
			}
			
			case 11:
			{
			 system("cls");
			 cout<<"\nNOTE:-USE UNDERSCORE(_) INSTED OF SPACE( ). SPACE IS TREATED AS TERMINATER\n\n";
			 ofstream obj("Desktop.txt",ios::app);
		     cout<<"Enter the name of the brand to which your product belongs to: ";
			 cin>>cmp;
			 cout<<"Enter the model number of your product ";
			 cin>>model;
			 cout<<"Enter the amount of RAM in GB (in digits) your device contains ";
			 cin>>RAM;
			 cout<<"Enter the amount of storage your device has ";
			 cin>>mmry;
			 cout<<"Enter the processor that your device has ";
			 cin>>prscsr;
			 cout<<"Enter the time (in years) for which you have used the device ";
			 cin>>ut;
			 cout<<"Enter the estimated cost of your product ";
			 cin>>cost;
			 cout<<"Enter your name ";
			 cin>>name;
			 cout<<"Enter your contact number ";
			 cin>>cn;
			 obj<<"Company= "<<cmp<<"\t"<<"Model= "<<model<<"\t"<<"RAM= "<<RAM<<"\t"<<"Storage= "<<mmry<<"\t"<<"Processor= "<<prscsr<<"\t"<<"Usage Time= "<<ut<<"\t"<<"Cost= "<<cost<<"\t"<<"Name= "<<name<<"\t"<<"Contact No.= "<<cn<<"\n";
			 obj<<"================================================================================\n";
			 obj.close();
			 cout<<"Thanku for register yourself";
			 getch();
			 fs();
			 break;
			}
			
	        case 12:
			{
			 system("cls");
			 cout<<"\nNOTE:-USE UNDERSCORE(_) INSTED OF SPACE( ). SPACE IS TREATED AS TERMINATER\n\n";
			 ofstream obj("Laptop.txt",ios::app);
		     cout<<"Enter the name of the brand to which your product belongs to: ";
			 cin>>cmp;
			 cout<<"Enter the model number of your product ";
			 cin>>model;
			 cout<<"Enter the amount of RAM in GB (in digits) your device contains ";
			 cin>>RAM;
			 cout<<"Enter the amount of storage your device has ";
			 cin>>mmry;
			 cout<<"Enter the processor that your device has ";
			 cin>>prscsr;
			 cout<<"Enter the time (in years) for which you have used the device ";
			 cin>>ut;
			 cout<<"Enter the estimated cost of your product ";
			 cin>>cost;
			 cout<<"Enter your name ";
			 cin>>name;
			 cout<<"Enter your contact number ";
			 cin>>cn;
			 obj<<"Company= "<<cmp<<"\t"<<"Model= "<<model<<"\t"<<"RAM= "<<RAM<<"\t"<<"Storage= "<<mmry<<"\t"<<"Processor= "<<prscsr<<"\t"<<"Usage Time= "<<ut<<"\t"<<"Cost= "<<cost<<"\t"<<"Name= "<<name<<"\t"<<"Contact No.= "<<cn<<"\n";
			 obj<<"================================================================================\n";
			 obj.close();
			 cout<<"Thanku for register yourself";
			 getch();
			 fs();
			 break;
			}
			
			case 13:
			{
			 system("cls");
			 cout<<"\nNOTE:-USE UNDERSCORE(_) INSTED OF SPACE( ). SPACE IS TREATED AS TERMINATER\n\n";
			 ofstream obj("AC.txt",ios::app);
			 cout<<"Enter the name of the brand to which your product belongs to: ";
			 cin>>cmp;
			 cout<<"Enter the type(window/split) of your AC ";
			 cin>>model;
			 cout<<"How many tonnes is your AC of? ";
			 cin>>t;
			 cout<<"Enter the time (in years) for which you have used the device ";
			 cin>>ut;
			 cout<<"Enter the estimated cost of your product ";
			 cin>>cost;
			 cout<<"Enter your name ";
			 cin>>name;
			 cout<<"Enter your contact number ";
			 cin>>cn;
			 obj<<"Brand= "<<cmp<<"\t"<<"Type= "<<model<<"\t"<<"Tonnes= "<<t<<"\t"<<"Usage Time= "<<ut<<"\t"<<"Cost= "<<cost<<"\t"<<"Name= "<<name<<"\t"<<"Contact No.= "<<cn<<"\n";
			 obj<<"================================================================================\n";
			 obj.close();
			 cout<<"Thanku for register yourself";
			 getch();
			 fs();
			 break;
			}	
			case 14:
			{
			 system("cls");
			 cout<<"\nNOTE:-USE UNDERSCORE(_) INSTED OF SPACE( ).SPACE IS TREATED AS TERMINATER\n\n";
			 ofstream obj("TV.txt",ios::app);
			 cout<<"Enter the name of the brand to which your product belongs to: ";
			 cin>>cmp;
			 cout<<"Enter the model number of your product ";
			 cin>>model;
			 cout<<"what is the type(CRT/LCD/LED/PLASMA) of  your T.V ? ";
			 cin>>t;
			 cout<<"Enter the time (in years) for which you have used the device ";
			 cin>>ut;
			 cout<<"Enter the estimated cost of your product ";
			 cin>>cost;
			 cout<<"Enter your name ";
			 cin>>name;
			 cout<<"Enter your contact number ";
			 cin>>cn;
			 obj<<"Brand= "<<cmp<<"\t"<<"Model= "<<model<<"\t"<<"Type= "<<t<<"\t"<<"Usage Time= "<<ut<<"\t"<<"Cost= "<<cost<<"\t"<<"Name= "<<name<<"\t"<<"Contact No.= "<<cn<<"\n";
			 obj<<"================================================================================\n";
			 obj.close();
			 cout<<"Thanku for register yourself";
			 getch();
			 fs();
			 break;
			}
			
			case 15:
			{
			 system("cls");
			 cout<<"\nNOTE:-USE UNDERSCORE(_) INSTED OF SPACE( ).SPACE IS TREATED AS TERMINATER\n\n";
			 ofstream obj("Books.txt",ios::app);
			 cout<<"Enter the name of the book you want to sell ";
			 cin>>nob;//name of book
			 cout<<"Enter the year of your book ";
			 cin>>yr;
			 cout<<"Enter the estimated cost of your book ";
			 cin>>cost;
			 cout<<"Enter your name ";
			 cin>>name;
			 cout<<"Enter your contact number ";
			 cin>>cn;
			 obj<<"Name of Book= "<<nob<<"\t"<<"Year= "<<yr<<"\t"<<"Cost= "<<cost<<"\t"<<"Name= "<<name<<"\t"<<"Contact No.= "<<cn<<"\n";
			 obj<<"================================================================================\n";
			 obj.close();
			 cout<<"Thanku for register yourself";
			 getch();
			 fs();
			 break;
			}
			
			case 16:
			{
			 fs();
			 break;
		    }
			default:
			{
			 system("cls");
			 cout<<"Invalid choice press any key to go back";
			 getch();
			 fs();	
			}	
			
		}
		return 0;
	}
	
void buyer()
{
			int ch;
			char word[400];
		system("cls");
	cout<<"\n\n\n\n\n\t\t";
	cout<<"1.House"<<"\n\t\t"<<"2.Flat"<<"\n\t\t"<<"3.Car"<<"\n\t\t"<<"4.Scooty"<<"\n\t\t"<<"5.Bike"<<"\n\t\t"<<"6.Furniture"<<"\n\t\t"<<"7.Work From Home Jobs"<<"\n\t\t"<<"8.Office Based Jobs"<<"\n\t\t"<<"9.Mobile"<<"\n\t\t"<<"10.Tablet"<<"\n\t\t"<<"11.Desktop"<<"\n\t\t"<<"12.Laptop"<<"\n\t\t"<<"13.AC"<<"\n\t\t"<<"14.TV"<<"\n\t\t"<<"15.Books"<<"\n\t\t"<<"16.Back"<<"\nEnter your choice ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			
			{
			system("cls");	
			ifstream obj("House.txt");
			while(!obj.eof())
			{
				obj.getline(word,200);
				cout<<word<<endl;
			}
				obj.close();
				getch();
			break;
		    }
		case 2:
			{
			system("cls");
			ifstream obj("Flat.txt");
			while(!obj.eof())
			{
				obj.getline(word,200);
				cout<<word<<endl;
			}
				obj.close();
				getch();
			break;
			}
		case 3:
			{
			system("cls");	
			ifstream obj("Car.txt");
			while(!obj.eof())
			{
				obj.getline(word,200);
				cout<<word<<endl;
			}
				obj.close();
				getch();
			break;
			}
		case 4:
			{
			system("cls");	
			ifstream obj("Scooty.txt");
			while(!obj.eof())
			{
				obj.getline(word,200);
				cout<<word<<endl;
			}
				obj.close();
				getch();
			break;
			}
		case 5:	
			{
			system("cls");
			ifstream obj("Bike.txt");
			while(!obj.eof())
			{
				obj.getline(word,200);
				cout<<word<<endl;
			}
				obj.close();
				getch();
				break;	
			}
		case 6:
			{
			system("cls");
			ifstream obj("Furniture.txt");
			while(!obj.eof())
			{
				obj.getline(word,200);
				cout<<word<<endl;
			}
				obj.close();
				getch();
				break;
			}
		case 7:
			{
			system("cls");	
			ifstream obj("Work From Home Jobs.txt");
			while(!obj.eof())
			{
				obj.getline(word,200);
				cout<<word<<endl;
			}
				obj.close();
				getch();
				break;
			}
		case 8:
			{
			system("cls");	
			ifstream obj("Office Based Jobs.txt");
			while(!obj.eof())
			{
				obj.getline(word,200);
				cout<<word<<endl;
			}
				obj.close();
				getch();
				break;
			}
		case 9:
			{
			system("cls");
			ifstream obj("Mobile.txt");
			while(!obj.eof())
			{
				obj.getline(word,200);
				cout<<word<<endl;
			}
				obj.close();
				getch();
				break;
			}
		case 10:
			{
			system("cls");	
			ifstream obj("Tablet.txt");
			while(!obj.eof())
			{
				obj.getline(word,200);
				cout<<word<<endl;
			}
				obj.close();
				getch();
				break;
			}
		case 11:
			{
			system("cls");	
			ifstream obj("Desktop.txt");
			while(!obj.eof())
			{
				obj.getline(word,200);
				cout<<word<<endl;
			}
				obj.close();
				getch();
				break;
			}
		case 12:
			{
			system("cls");	
			ifstream obj("Laptop.txt");
			while(!obj.eof())
			{
				obj.getline(word,200);
				cout<<word<<endl;
			}
				obj.close();
				getch();
				break;
			}
		case 13:
			{
			system("cls");	
			ifstream obj("AC.txt");
			while(!obj.eof())
			{
				obj.getline(word,200);
				cout<<word<<endl;
			}
				obj.close();
				getch();
				break;
			}
		case 14:
			{
			system("cls");	
			ifstream obj("TV.txt");
			while(!obj.eof())
			{
				obj.getline(word,200);
				cout<<word<<endl;
			}
				obj.close();
				getch();
				break;
			}
		case 15:
			{
			system("cls");	
			ifstream obj("Books.txt");
			while(!obj.eof())
			{
				obj.getline(word,200);
				cout<<word<<endl;
			}
				obj.close();
				getch();
				break;
			}
			
		case 16:
			{
			 fs();
			 break;	
			}			
		default:
			{
			 system("cls");
			 cout<<"Invalid choice press any key to go back";
			 getch();	
			}		
	}
	fs();		
}



int main()
{
	int c;
	while(1)
	{
	 system("cls");
	 cout<<"\n\n\n\n\n\t\t\tWELCOME TO OLX";	
	 cout<<"\n\n\n\n\n\t\t";
	 cout<<"1. Sign Up"<<"\n\t\t"<<"2. Login "<<"\n\t\t"<<"3. Exit \n\t\t"<<"enter your choice ";
	 cin>>c;
	 switch(c)
	 {
		 case 1:
		 	 system("cls");
			 new_id();
			 break;
		 case 2:
		 	 system("cls");
			 cout<<"IF YOU ENTER WRONG NO. YOU AUTOMATICALLY GO BACK\n\n";
			 old_id();
			 break;
		 case 3:
		 	 exit(0);
			 break; 	 
		 default:
			 cout<<"invalid choice";	
	 }
    }
	return 0;
}
