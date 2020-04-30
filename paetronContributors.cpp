#include<iostream> 
#include<conio.h> 
#include<stdlib.h>
#include<fstream> 
using namespace std;


string name;
double amount;
int choice;
char op;
void menu();
void becomingContributor();
void showingContributors();


int main()
{
	menu();

}


void becomingContributor()
{
	system("CLS");
	
	
	ofstream myFile("contributor.txt", ios::app);

	


	cout<<"\n\n\t\t\t\tEnter Your Name: "; cin>>name;
	cout<<"\t\t\t\tEnter Amount: "; cin>>amount;
	myFile<<name<<"\t"<<amount;
	cout<<"\n\t\t\t\tThank you For contributing... \n";

	cout<<"\n\nGo back to Main Page: "; cin>>op;
	if(op=='y'||op=='Y')
	{
				menu();
}


}
void showingContributors()
{
	system("CLS");
	// cout<<"\t\tName"<<"\t\t"<<"Amount\n";
	cout<<"Contributors\n";
	cout<<"--------------------------------------------------------------------------------------------------\n";

	ifstream myFile("contributor.txt");

	while(myFile>>name>>amount)
	{
		cout<<"\t\t"<<name<<"\t\t"<<amount<<endl;


	}
	cout<<"--------------------------------------------------------------------------------------------------\n";

		cout<<"\n\nGo back to Main Page: "; cin>>op;
	if(op=='y'||op=='Y')
	{
				menu();
}
}

void menu()
{
	system("CLS");

	cout<<"-------------------------------------------------------------------------------------------------------------\n\n\n";

	cout<<"\t\t1. Become a Contributor.\n";
	cout<<"\t\t2. Show Contributors.\n";

	cout<<"\t\t\n\n";


	cout<<"Enter a choice: ";cin>>choice;

	switch(choice)
	{
		case 1:

		becomingContributor();
		break;
		case 2:
		showingContributors();
		break;
		default:
		cout<<"\nPress 1 for becoming Contributor and 2 for showing Contributor.\n";
	}

}

