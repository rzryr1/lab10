#include<iostream>
using namespace std;

char grade;
int A,B,C,D,F;
int ns=1;
int main(){
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << ns << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ 					
			count[0]++;
			ns++;
			
			// if grade is A
			//Do something
		}else if(grade == 'B'){ 
			count[1]++;
			ns++;
			
			// if grade is B
			//Do something
		  	//and so on ... for grade = C, D, F				
		}else if(grade == 'C'){
			count[2]++;
			ns++;
			
		}
		else if(grade == 'D'){
			count[3]++;
			ns++;
			
		}
		else if(grade == 'F'){
			count[4]++;
			ns++;
			
		}
		else if(grade == '0'){
			break;
		}
		else{
			cout << "Wrong input. Please input again." << endl;
			
			// grade is wrong input
			//Do something
		} 
	}while(true);
	
		

		
	
	
	
	cout << "In total "<< ns-1 <<" students."<<"\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
