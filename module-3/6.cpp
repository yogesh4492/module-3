/*
7. Operator Demonstration
 o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators. Perform operations using each type of operator and display the results.
 o Objective: Reinforce understanding of different types of operators in C++.

*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Enter the Number1= ";
	cin>>num1;
	cout<<"Enter the Number2= ";
	cin>>num2;
	bool temp=true;
	while(temp){
		
		cout<<"A. Arithmetic Operator"<<endl;
		cout<<"B. Bitwise Operator"<<endl;
		cout<<"R. Relational Operator"<<endl;
		cout<<"L. Logical Operator"<<endl;
		cout<<"E. Exit"<<endl;
		
		char choice;
		cout<<"Enter Your Choice= ";
		cin>>choice;
		switch(choice){
			case 'A':
				
				cout<<"A. Addition"<<endl;
				cout<<"S. Subtraction"<<endl;
				cout<<"M. Multiplication"<<endl;
				cout<<"D. division"<<endl;
				cout<<"E. Exit"<<endl;
				char ch1;
				cout<<"Enter Your Choice= ";
				cin>>ch1;
				//strlwr(ch1);
				switch(ch1){
					case 'A':
						cout<<"Addition is= "<<num1+num2<<endl;
					    break;
					case 'S':
						cout<<"subtraction is= "<<num1-num2<<endl;
					    break;
					case 'M':
						cout<<"multiplication is= "<<num1*num2<<endl;
					    break;
					case 'D':
						float ans;
						ans=(float)num1/num2;
						cout<<"Division is= "<<ans<<endl;
					    break;
					Default:
						cout<<"Enter Valid Input"<<endl;
				}
				break;
			case 'B':
			break;
			case 'R':
				
				cout<<"g. Greater than"<<endl;
				cout<<"l. Less than"<<endl;
				cout<<"n. Greater than Equal to "<<endl;
				cout<<"m. Less than equal to"<<endl;
				cout<<"e. Equal to "<<endl;
				cout<<"r. Not Equal to"<<endl;
				cout<<"E. Exit"<<endl;
				char ch2;
				cout<<"Enter Your Choice= "<<endl;
				cin>>ch2;
				switch(ch2){
					case 'g':
						cout<<num1<<"> "<<num2<<" is = "<<(num1>num2)<<endl;;
						break;
					case 'l':
						cout<<num1<<" < "<<num2<<" is = "<<(num1<num2)<<endl;;
						break;
					case 'n':
						cout<<num1<<" >= "<<num2<<" is ="<<(num1>=num2)<<endl;;
						break;
					case 'm':
						cout<<num1<<" <= "<<num2<<" is ="<<(num1<=num2)<<endl;;
						break;
					case 'e':
						cout<<num1<<" == "<<num2<<" is ="<<(num1==num2)<<endl;;
						break;
					case 'r':
						cout<<num1<<" != "<<num2<<" is ="<<(num1!=num2)<<endl;;
						break;
					default:
						cout<<"Enter Valid Detail"<<endl;
					
				}
			break;
			case 'L':
				
				int c1,c2;
				cout<<"Enter the C1 and c2= ";
				cin>>c1>>c2;
				 cout<<"A. Logical and"<<endl;
				 cout<<"O. Logical Or"<<endl;
				 cout<<"N. Logical not"<<endl;
				 cout<<"E. Exit"<<endl;
				 char ch3;
				 cout<<"Enter Your Choice= ";
				 cin>>ch3;
				 switch(ch3){
				 	case 'A':
				 		cout<<c1<<" && "<<c2<<" is = "<<(c1&&c2)<<endl;
				 		break;
				 	
				 	case 'O':
				 		cout<<c1<<" || "<<c2<<" is = "<<(c1||c2)<<endl;
				 		break;
				 	
				 	case 'N':
				 		cout<<" ! "<<c1<<" is = "<<!(c1)<<endl;
				 		break;
				 	default:cout<<"Enter valid Input"<<endl;
				 	
				 }
			break;
			case 'E':
				temp=false;
			break;
			default:
		          cout<<"Enter Valid Input"<<endl;
		}
		
		
	}
	return 0;
}
