/*#include<iostream>
using namespace std;
class circle{
	public:
	float radius;

void input(){
	cout<<"enter the radius:";
	cin>>radius;
	
}
void area(){
	cout<<"area of circle is:"<<3.14*radius*radius<<endl;
	
}
};
int main(){
	circle c1;
	c1.input();
	c1.area();
	return 0;
}*/
#include <iostream>
using namespace std;
class student {
	public :
		string name;
		int age;
		
		void getdata(){
			cout<<"enter name:";
			cin>>name;
			cout<<"age:";
			cin>> age;
		}
		void display(){
			cout<<"name is:"<<name;
			cout<<"age is:"<<age;
			
		}
		
};
int main(){
	student s1;
	s1.getdata();
	s1.display();
	return 0;
}

