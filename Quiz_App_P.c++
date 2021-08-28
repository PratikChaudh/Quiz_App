#include<iostream>
#include<windows.h>
using namespace std;
void showmenu()
{
	cout<<"===========================================================================\n";
	cout<<"================================Quiz App===================================\n";
	cout<<"===========================================================================\\n\n\n\n\n";
	cout<<"1) New Quiz\n";
	cout<<"2)Highest Score\n";
	cout<<"3) Exit\n";
};
int main()
{ 	
	system("COLOR 47");
	int i, op;
	string currentplayer;
	string question[5]={"1. 	Which of the following type of class allows only one object of it to be created?",
						"2. 	Which of the following is not a type of constructor?",
						"3. 	Which of the following statements is correct?",
						"4. 	Which of the following is not the member of class?",
						"5. 	Which of the following concepts means determining at runtime what method to invoke?",

	};
	string options[5]={	"1)	Virtual class 2)	Abstract class 3)	Singleton class 4)	Friend class",
						"1)	Copy constructor 2)	Friend constructor 3)	Default constructor 4)	Parameterized constructor",
						"1)	Base class pointer cannot point to derived class., 2)	Derived class pointer cannot point to base class. 3)	Pointer to derived class cannot be created.	Pointer to base class cannot be created",
						"1)	Static function 2)	Friend function 3)	Const function 4)	Virtual function",
						"1)	Data hiding 2)	Dynamic Typing 3)	Dynamic binding 4)	Dynamic loading",
						
	};
	int ans[5]={3,2,2,2,3};
						string playername="RTC";
						int highestscore=0;
						char ch='y';
						while(ch=='y')
						{	
							int currentresult=0;
							system("CLS");
							showmenu();
							int menu;
							cin>>menu;
							switch(menu)
							{	
								case 1:
									system("COLOR 41");
									
									cout<<"Enter Your Name:";
									cin>>currentplayer;
									cout<<"\n\n";
									
									for( i=0;i<5;i++)
									{
									system("CLS");
									cout<<"==============================================="<<endl;
									cout<<"============	 Playing Quiz	=================="<<endl;
									cout<<"===============================================\n\n"<<endl;
										cout<<"\n\n"<<question[i]<<endl;
										cout<<options[i]<<endl;
										cout<<"Enter Option";
										cin>>op;
										if(op==ans[i])
										{
											currentresult++;
											if(currentresult>highestscore)
											{
												highestscore=currentresult;
												playername=currentplayer;
											}
										}
									}
									cout<<"\n\nYour Score is "<<currentresult<<endl;
								break;
								case 2:
									system("COLOR 74");
									system("CLS");
									cout<<"==============================================="<<endl;
									cout<<"==============Highest  Score=================="<<endl;
									cout<<"==============================================="<<endl;
									cout<<"\n\n Highest Score is "<<highestscore<<"By "<<playername<<endl;
									cout<<"Getting Highest Score";
								break;
								case 3:
									system("COLOR 46");
									cout<<"Thank you for Using Quize App !....";
									exit(0);
								break;
								default:
									cout<<"Wrong Selection";
								break;
							}
						
							cout<<"\n\nDo you want to continue y/n ?";
							cin>>ch;
						}
return 0;
}
