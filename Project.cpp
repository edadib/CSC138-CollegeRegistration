#include<iostream>
#include<string.h>
#include<string>
#include<fstream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

struct studentData
{
	char studentName[100];
	char studentGender;
	int student_id;
	int studentCourse;
	int studentSemester;
	int fee;
}student[300];

struct Student
{
	char college[100];
	int room;
	char programName[100];
	char courseName[100];
	int courseCode;
}Students[300];


void reg_1(studentData student[], int a)
{
	system("Color 71");
	cout<<endl<<endl;
	cout<<"  Enter student's name: "<<endl;
	cout<<"  "; cin>>ws;
	cin.getline(student[a].studentName,100);
	cout<<"  Enter student's ID: "<<endl;
	cout<<"  "; cin>>student[a].student_id;
	cout<<"  Code: MALE(M) or Female(F)"<<endl;
	cout<<"  Enter student's gender: "<<endl;
	cout<<"  "; cin>>student[a].studentGender;
	
}

void signup()
{
	system("Color 08");
	string password,pw;
    string username,un,usfile;
	ifstream datain;
	ofstream dataout;
	
	
	cout<<"enter username : ";
	cin>>un;
	cout<<"enter password : ";
	cin>>pw;

	usfile=un+".txt";
	dataout.open(usfile.c_str());
	dataout<<un<<endl;
	dataout<<pw;
	datain.open(usfile.c_str());
	datain>>username;
	datain>>password;


	if(un==username && pw==password)
	{
		cout<<"Username already exist \n";
		system("pause");
		system("cls");
		cout<<"enter username again : ";
		cin>>un;
		cout<<"enter password again : ";
		cin>>pw;
	}

}

void course(studentData student[], int i)
{
	system("Color 89");
	cout<<endl;
	cout<<"   _________________________________________"<<endl;
	cout<<"  |      COURSE      |  CODE COURSE |  CODE |"<<endl;
	cout<<"  |__________________|______________|_______|"<<endl;
	cout<<"  |  APPLIED SCIENCE |      AS      |   1   |"<<endl;
	cout<<"  |__________________|______________|_______|"<<endl;
	cout<<"  |     GOEMATIC     |      AP      |   2   |"<<endl;
	cout<<"  |__________________|______________|_______|"<<endl;
	cout<<"  |      AGROTECH    |      AT      |   3   |"<<endl;
	cout<<"  |__________________|______________|_______|"<<endl;
	cout<<"  | COMPUTER SCIENCE |      CS      |   4   |"<<endl;
	cout<<"  |__________________|______________|_______|"<<endl<<endl;
	cout<<"  Enter student's course in code: "<<endl;
	cout<<"  "; cin>>student[i].studentCourse;
	if(student[i].studentCourse== 1)
	{
		strcpy(Students[i].programName,"As");
	}
	else if(student[i].studentCourse== 2)
	{
		strcpy(Students[i].programName,"Ap");
	}
	else if(student[i].studentCourse== 3)
	{
		strcpy(Students[i].programName,"At");
	}
	else if(student[i].studentCourse== 4)
	{
		strcpy(Students[i].programName,"Cs");
	}

}

void FemaleCollege(studentData student[], int a)
{
	if(student[a].studentCourse== 1 || student[a].studentCourse== 2)
	{
		int room=0;
		cout<<"  Your college is : FORTRAN"<<endl;
		int xRan;
		srand( time(0));
	
		xRan=rand()%50+1;
		cout<<"  Your Room is : "<<xRan<<endl;
		strcpy(Students[a].college,"FORTRAN");
		Students[a].room=xRan;
		
	}
	else if(student[a].studentCourse== 3 || student[a].studentCourse== 4)
	{
		int room=0;
		cout<<"  Your college is : UNIX"<<endl;
		int xRan;
		srand( time(0));
	
		xRan=rand()%50+1;
		cout<<"  Your Room is : "<<xRan<<endl;
		strcpy(Students[a].college,"UNIX");
		Students[a].room=xRan;
	}
	else
	{
		cout<<"  Invalid Code";
	}
}

void MaleCollege(studentData student[], int a)
{
	if(student[a].studentCourse== 1 || student[a].studentCourse== 2 || student[a].studentCourse== 3 || student[a].studentCourse== 4)
	{
		int room=0;
		cout<<"  Your college is : PHYTON"<<endl;
		int xRan;
		srand( time(0));
	
		xRan=rand()%50+1;
		cout<<"  Your Room Is : "<<xRan<<endl;
		strcpy(Students[a].college,"PHYTON");
		Students[a].room=xRan;
	}
	else
	{
		cout<<"  Invalid Code";
	}
}

void studentpart(studentData student[], int a)
{
	if(student[a].studentCourse== 1)
	{
		cout<<"  Enter Your Semester \n";
		cout<<"  "; cin>>student[a].studentSemester;
	}
	else if(student[a].studentCourse== 2)
	{
		cout<<"  Enter Your Semester \n";
		cout<<"  "; cin>>student[a].studentSemester;		
	}
	else if(student[a].studentCourse== 3)
	{
		cout<<"  Enter Your Semester \n";
		cout<<"  "; cin>>student[a].studentSemester;		
	}
	else if(student[a].studentCourse== 4)
	{
		cout<<"  Enter Your Semester \n";
		cout<<"  "; cin>>student[a].studentSemester;		
	}
	else
	{
		cout<<"  invalid \n";
	}
}

void fee(studentData student[], int a)
{
	if (student[a].studentSemester== 1)
	{
		student[a].fee=280;
	}
	else if (student[a].studentSemester== 2)
	{
		student[a].fee=480;
	}
	else if (student[a].studentSemester== 3)
	{
		student[a].fee=520;
	}
	else if (student[a].studentSemester== 4)
	{
		student[a].fee=480;
	}
	else if (student[a].studentSemester== 5)
	{
		student[a].fee=600;
	}
	else if (student[a].studentSemester== 6)
	{
		student[a].fee=230;
	}
}

void courseCode(studentData student[],Student Students[], int a, int i)
{
	if(student[a].studentCourse== 1)
	{
		cout<<"  Enter Your Course Code \n";
		cout<<"  1 = AS 113 / 2 = AS 115 / 3 = AS 120 \n";
		cout<<"  "; cin>>Students[i].courseCode;
		if(Students[i].courseCode == 1)
		{
			strcpy(Students[i].courseName,"AS 113 - Chemical In Industries");
		}
		else if(Students[i].courseCode == 2)
		{
			strcpy(Students[i].courseName,"AS 115 - Polymer Technology");
		}
		else if (Students[i].courseCode== 3)
		{
			strcpy(Students[i].courseName,"AS 120 - Diploma In Science");
		}
		else
		{
			cout<<"  invalid \n";
		}
	}
	else if(student[a].studentCourse== 2)
	{
		cout<<"  Enter Your Course Code \n";
		cout<<"  1 = AP 120 / 2 = AP 121 / 3 = AP 122 \n";
		cout<<"  "; cin>>Students[i].courseCode;
		if(Students[i].courseCode == 1)
		{
			strcpy(Students[i].courseName,"AP 120 - Geomatical Science");
		}
		else if(Students[i].courseCode == 2)
		{
			strcpy(Students[i].courseName,"AP 121 - Data and Satelite Communication ");
		}
		else if (Students[i].courseCode== 3)
		{
			strcpy(Students[i].courseName,"AP 122 - Weather ForeCasting");
		}
		else
		{
			cout<<"  invalid \n";
		}
	}
	else if(student[a].studentCourse== 3)
	{
		cout<<"  Enter Your Course Code \n";
		cout<<"  1 = AT 110 \n";
		cout<<"  "; cin>>Students[i].courseCode;
		if(Students[i].courseCode == 1)
		{
			strcpy(Students[i].courseName,"AT 110 - Agrotech");
		}	
		else
		{
			cout<<"  invalid \n";
		}
	}
	else if(student[a].studentCourse== 4)
	{
		cout<<"  Enter Your Course Code \n";
		cout<<"  1 = CS 110 / 2 = CS 111 / 3 = CS 119 / 4 = CS 143 \n";
		cout<<"  "; cin>>Students[i].courseCode;
		if(Students[i].courseCode == 1)
		{
			strcpy(Students[i].courseName,"CS 110 - Computer Science");
		}
		else if(Students[i].courseCode == 2)
		{
			strcpy(Students[i].courseName,"CS 111 - Statistics");
		}
		else if(Students[i].courseCode == 3)
		{
			strcpy(Students[i].courseName,"CS 119 - Actuarial Science");
		}
		else if(Students[i].courseCode == 4)
		{
			strcpy(Students[i].courseName,"CS 143 - Mathematical Science");
		}
		else
		{
			cout<<"  invalid \n";
		}	
	}
	else
	{
		cout<<"  invalid \n";
	}
}

int main()
{
	int total=0,fortran=0,unix=0,phyton=0,male=0,female=0;
	char respond = 'N';
	char b, d;
	int i,Choice;
	int a = 0,e=0;
	
	ofstream outFile;
	ofstream outReport;
	
	outFile.open("receipt.txt", ios::app);
	outReport.open("report.txt", ios::app);

		for(int j=0;j<=100;j++)
	{
		system("cls");
		cout<<endl;
		cout<<" ==================================="<<endl;
		cout<<"     WELCOME TO ZEUS V2.0 BETA      "<<j<<"%"<<endl<<"        ";
		for(int z=0;z<=(j/5);z++)
		{
			cout<<(char)219;
		}
		cout<<endl;
		cout<<"     < REGISTRATION  PROGRAM >      "<<endl;
		cout<<" ==================================="<<endl;
		cout<<"       HOLD ON FOR A SECONDS";
	}
	system("CLS");
	cout<<" ==================================="<<endl;
	cout<<"     WELCOME TO ZEUS V2.0 BETA      "<<endl;
	cout<<"          	DONE				   "<<endl;
	cout<<"     < REGISTRATION  PROGRAM >      "<<endl;
	cout<<" ==================================="<<endl;
	cout<<endl<<endl;
	system("pause");
	system("CLS");

	cout<<endl<<endl;
	
	
	while(1)
	{
		cout<<" ==================================="<<endl;
		cout<<" Please Choose Your Choice \n";
		cout<<" 1 = sign up \n";
		cout<<" 2 = log in \n";
		cout<<" ==================================="<<endl;
		cout<<" Enter Choice : ";
		cout<<" "; cin>>Choice;

		system("cls");
		if(Choice==1)
		{
			signup();
			std::cout << "Loading";
			std::cout.flush();
			for ( int j = 0;j < 3 ; j++ ) 
			{ 
				for (int i = 0; i < 3; i++)
		 		{ 
					std::cout << ".";
					std::cout.flush();
					for(double counter = 0; counter < 100000000; counter++);
				} 
			std::cout << "\b\b\b   \b\b\b"; 
			}
			system("cls");
			cout<<"Sign Up Complete, You May Log In \n";
			system("pause");
			system("cls");
		}
		else if(Choice==2)
		{
			string password1,password2;
    		string username1,username2,usfile;
			ifstream datain;
			ofstream dataout;

			
			cout<<"enter username : ";
			cin>>username1;
			cout<<"enter password : ";
			cin>>password1;
	
			usfile=username1+".txt";
			datain.open(usfile.c_str());
			datain>>username2;
			datain>>password2;
			system("CLS");
			if(username1==username2 && password1==password2)
			{
				int t;
				for(int t=0;t<=100;t++)
				{
					system("cls");
					cout<<endl;
					cout<<" ==================================="<<endl;
					cout<<"            Loading ....            "<<t<<"%"<<endl<<"        ";
					for(int z=0;z<=(t/5);z++)
					{
						cout<<(char)219;
					}
					cout<<endl;
					cout<<" ==================================="<<endl;
				}
				system("CLS");
				cout<<" ==================================="<<endl;
				cout<<" |        Log In Successful        |"<<endl;
				cout<<" ==================================="<<endl;
				cout<<endl<<endl;
				system("pause");
				system("cls");
			
				while(respond !='x'||respond!='X')
				{
					system("CLS");
					a++;
					reg_1(student, a);
					if(student[a].studentGender =='F' || student[a].studentGender =='f')
					{
         	           while(1)
          	           {
                    		system("CLS");
           	         		cout<<endl<<"  List Course, press 'T' :"<<endl;
                      	  	cout<<"  "; cin>>b;
                       	 	while(b=='T' || b=='t')
                       		{
                        		if(b=='T' || b=='t')
                        	    {
				         	       course(student, a);
				         	       courseCode(student, Students, a, i);
				         	       studentpart(student, a);
					      	       FemaleCollege(student, a);
					      	       fee(student, a);
                         	       break;
                           		}
                        	}
							cout<<endl<<"  Ready to continue, press 'E', To re-edit, press 'T'"<<endl;
                        	cout<<"  "; cin>>d;
                        	if(d=='E' || d=='e')
                        	{
                            	break;
							}
                        
                    	}        
						if(strcmp(Students[a].college,"FORTRAN")==0)
						{
							fortran++;
						}
						if(strcmp(Students[a].college,"UNIX")==0)
						{
							unix++;
						}
					}
					else if(student[a].studentGender =='M' || student[a].studentGender =='m')
					{
						while(1)
                	    {
                    		system("CLS");
                    		cout<<endl<<"  List Course, press 'T' :"<<endl;
                       	 	cout<<"  "; cin>>b;
                       	 	while(b=='T' || b=='t')
                        	{
                        		if(b=='T' || b=='t')
                           	 	{
									course(student, a);
									courseCode(student, Students, a, i);
									studentpart(student, a);
									MaleCollege(student, a);
									fee(student, a);
									break;
                            	}
                        	}
                        	cout<<endl<<"  Ready to continue, press 'E', To re-edit, press 'T'"<<endl;
                        	cout<<"  "; cin>>d;
                        	if(d=='E' || d=='e')
                        	{
                          	  break;
							}
                     	}
						if(strcmp(Students[a].college,"PHYTON")==0)
						{
							phyton++;
						}
					}
					else
					{
						cout<<"  ERROR, Try Again!";
					}
		   			cout<<endl<<"  Press 'S' to print this registeration, 'O' for other menu"<<endl;
					cout<<"  "; cin>>respond;
				
					if(respond =='s'||respond =='S')
					{
						cout<<endl;
						system("CLS");

			    		outFile<<"==========================================================================="<<endl;
						outFile<<"	            	UNIVERSITI TEKNOLOGI MARA PERLIS                         "<<endl;
						outFile<<"                                                                           "<<endl;
						outFile<<"Name : "<<" ";
						outFile<<student[a].studentName<<endl;
						outFile<<"Id : "<<" ";
						outFile<<student[a].student_id<<endl;
						outFile<<"Gender : "<<" ";
						outFile<<student[a].studentGender<<endl;
						outFile<<"College : "<<" ";
						outFile<<Students[a].college<<endl;
						outFile<<"Room : "<<" ";
						outFile<<Students[a].room<<endl;
						outFile<<"Program : "<<" ";
						outFile<<Students[a].programName<<endl;
						outFile<<"Course : "<<" ";
						outFile<<Students[i].courseName<<endl;
						outFile<<"Semester : "<<" ";
						outFile<<student[a].studentSemester<<endl;
						outFile<<"Fee : "<<" ";
						outFile<<"Rm "<<student[a].fee<<endl;												
						outFile<<"                                                                           "<<endl;
						outFile<<"==========================================================================="<<endl;
						outFile<<"       Please Bring This Receipt To The Counter To Get Your Room Key."<<endl;
						outFile<<"                Thank You, Enjoy Your Life At UiTM PERLIS"<<endl;
						outFile<<endl;
		    		}
			
					cout<<endl<<"  Press 'X' to stop this registration or 'N' to new registeration"<<endl;
					cout<<"  "; cin>>respond;
					if(respond =='x'||respond =='X')
					{
						break;
					}  
				}
			
				cout<<endl;
				system("CLS");
				total=fortran+unix+phyton;
				female=unix+fortran;
				male=phyton;
				outReport<<"==========================================================================="<<endl;
				outReport<<"	            	UNIVERSITI TEKNOLOGI MARA PERLIS                       "<<endl;
				outReport<<endl;
				outReport<<"\t\t\t Total Student = ";
				outReport<<total<<" /300"<<endl;
				outReport<<"\t\t\t Female student = ";
				outReport<<female<<" /200"<<endl;
				outReport<<"\t\t\t Male student = ";
				outReport<<male<<" /100"<<endl;
				outReport<<endl;
				outReport<<"==========================================================================="<<endl;
				outReport<<endl;
		
				outReport.close();
				outFile.close();
				break;
			}
			cout<<endl<<endl;
			cout<<"  Log In Failed \n\n";
			}
		}
		system("pause");
}
