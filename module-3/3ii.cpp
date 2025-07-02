#include<iostream>
using namespace std;
class area{
	int length,width,area;
	public:
		void getdata(){
			cout<<"Enter the Length= ";
			cin>>length;
			cout<<"Enter the width= ";
			cin>>width;
		}
		void display(){
			area=length*width;
			cout<<"Length= "<<length<<endl<<"Width= "<<width<<endl<<"Area= "<<area<<endl;
		}
};
int main(){
	area a;
	a.getdata();
	a.display();
	return 0;
}
