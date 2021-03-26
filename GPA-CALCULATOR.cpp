/* NAME				:	OWUSU EMMANUEL
   INDEX NUMBER		:	UEB1103619
   PROGRAM			:	BSc. COMPUTER ENGINEERING
   COURSE			: 	COMPUTER PROGRAMMING FOR ENGINEERS (CENG 205)


/* A PROGRAM THAT CALCULATES USER'S GPA per his percentage inputs

ALGORITHM IN STEP
----------------
STEP 1: Create Arrays for Values
		- Declare the maximum number of courses
			- Initialize an Array for Collecting Course Names
			- Initialize an Array for Collecting Course Scores from User
			- Initialize an Array for saving users GP per his score entered

STEP 2: Ask and Receive user's input with a forloop and save inputs
		in the Array for collecting inputs in step 1
		
STEP 3: Write a forloop function with if functions inside for 
		allocating scores to it's corresponding GP.
		- Save the Corresponding GP in the CGPA Array (We talked about in STEP 1)
		- Print the Results out
		
STEP 4: Taking first four courses as 3 credit hour and the rest as 2 credit hours
		- Create a threeCreditsCgpa variale to add all 3 credit hour courses(using the right formulars)
		- Create a twoCreditsCgpa variale to add all 2 credit hour courses (using the right formulars)

STEP 5: Add the Variables created in STEP 4 and save in the variable called  semesterGpa
		and print the semesterGpa out
*/

#include <iostream> 
#include <iomanip>
#include <string>
#include <cstring>
using namespace std; 

int main(){
	//Setting maximum courses to 7
	const int courseNumber = 7; 
	
	//Putting all coursesName in an array
	string days[courseNumber] = {"French", "English", "Maths", "Circuit Design", "Solid State", "C++", "Web Design"}; 
    //Creating array to receive scores
	float courseScore[7]; 
	
	//Array for collecting CGPA
	float cgpa[7];
	
	//Getting user's inputs
 	for (int count = 0; count < 7; count++) 
 	{ 
 		cout << "Enter your "<< days[count]<< " Score :";
		cin>>courseScore[count];
				
	} 
	//Clearing the screen with this code
	system("cls");
	
	//Printing a heading for Result Slip
	cout<<"END OF SEMESTER RESULTS "<<endl;
	cout<<"----------------------------------------------------"<<endl;
	
	//If functions - starts
	for (int count = 0; count < 7; count++)
	{
		if(courseScore[count] >= 80){
			cout<< days[count] <<endl; 
			cout<<"Score : "<< courseScore[count] <<"%" << " --- Grade : A --- "<< " G.P : 4.00"<<endl;
			//Saving the GP into the CGPA Array
			cgpa[count] = 4.00;
		}
		else if(courseScore[count] >= 75){
			cout<< days[count] <<endl;
			cout<<"Score : "<< courseScore[count] <<"%" << " --- Grade : B+ --- "<< " G.P : 3.50"<<endl;  
			cgpa[count] = 3.50;
		}
		else if(courseScore[count] >= 70){
			cout<< days[count] <<endl; 
			cout<<"Score : "<< courseScore[count] <<"%" << " --- Grade : B --- "<< " G.P : 3.00"<<endl; 
			cgpa[count] = 3.00;
		}
		else if(courseScore[count] >= 65){
			cout<< days[count] <<endl; 
			cout<<"Score : "<< courseScore[count] <<"%" << " --- Grade : C+ --- "<< " G.P : 2.50"<<endl; 
			cgpa[count] = 2.50;		
		}
		else if(courseScore[count] >= 60){
			cout<< days[count] <<endl; 
			cout<<"Score : "<< courseScore[count] <<"%" << " --- Grade : C --- "<< " G.P : 2.00"<<endl; 
			cgpa[count] = 2.00;
		}
		else if(courseScore[count] >= 55){
			cout<< days[count] <<endl;
			cout<<"Score : "<< courseScore[count] <<"%" << " --- Grade : D+ --- "<< " G.P : 1.50"<<endl;  
			cgpa[count] = 1.50;
		}
		else if(courseScore[count] >= 50){
			cout<< days[count] <<endl;
			cout<<"Score : "<< courseScore[count] <<"%" << " --- Grade : D --- "<< " G.P : 1.00"<<endl;  
			cgpa[count] = 1.00;
		}
		else if(courseScore[count] >= 45){
			cout<< days[count] <<endl;
			cout<<"Score : "<< courseScore[count] <<"%" << " --- Grade : E --- "<< " G.P : 0.50"<<endl;  
			cgpa[count] = 0.50;
		}
		else if(courseScore[count] >= 0){
			cout<< days[count] <<endl;
			cout<<"Score : "<< courseScore[count] <<"%" << " --- Grade : F --- "<< " G.P : 0.00"<<endl;  
			cgpa[count] = 0.00;
		}
		else{
			cout<<"Invalid Input"<<endl;
		}
		
		//just creating space
		cout<<" "<<endl;	
		
	}
	
	//Calculating Total G.P.A for the Semester
	//STEP 1 - First 4 courses = 3 Credit Hours
	//STEP 2 - Last 3 courses = 2 Credit Hours
	
	//STEP1 
	float threeCreditsCgpa = (cgpa[0] * 3) + (cgpa[1] * 3 ) + (cgpa[2] * 3 ) + (cgpa[3] * 3);
	
	//STEP2
	float twoCreditsCgpa =  (cgpa[4] * 2) + (cgpa[5] * 2) + (cgpa[6] * 2);
	
	//Creating totalCgpa as variable for collecting total semester GPA
	float totalCgpa = threeCreditsCgpa + twoCreditsCgpa;
		
	//NB: From the question, Total Credit Hour = 18
	//Therefore semesterGpa = totalCgpa / 18
	float semesterGpa = totalCgpa/18;
	cout<<fixed<<setprecision(2);
	cout<<"Semester GPA : "<<semesterGpa<<endl;
	cout<<"------------------------------------------------------------"<<endl;
	
	//Pausing the system 
	system("pause");
	
	return 0;
}



