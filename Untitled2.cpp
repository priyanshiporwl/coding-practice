#include<iostream>
using namespace std;
class car{
	string name;
	float price;
	public:
	getdata(){
		cout<<"book name";
		cin>>name;
		cout<<"book price";
		cin>>price;
	
	}
	void display(){
		cout<<name<<endl;
		cout<<price<<endl;
	}
};
int main(){
	car c1;
	c1.getdata();
	c1.display();
	return 0;
}

