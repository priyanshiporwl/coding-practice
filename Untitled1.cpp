#include<iostream>
using namespace std;
class rectangle{
	public:
	float l , b;
	getdata(){
		cout<<"enter legth and breadth";
		cin>> l>>b;
	}
	void area(){
		cout<<"area is"<<l*b<<endl;
		
	}
};
int main(){
	rectangle r1;
	r1.getdata();
	r1.area();
	return 0;
}
