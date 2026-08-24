/*#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int age;
};
int main(){
	student s1;
	s1.name="Priyanshi";
	s1.age=18;
	cout<<"Name:"<<s1.name<<endl;
	cout<<"Age:"<<s1.age<<endl;
	return 0 ;
}

#include<iostream>
using namespace std;
class book{
	public:
	string bookname;
	float price;
	
};
int main(){
	book b1;
	b1.bookname="c++ programming";
	b1.price = 350 ;
	cout<<"book Name:"<<b1.bookname<<endl;
	cout<<"Price:"<<b1.price<<endl;
	return 0 ;
	
}


#include<iostream>
using namespace std;
class numbers{
	public:
		int a ,b ;
};
int main(){
	numbers n;
	cout<<"enter the two numbers:";
	cin>>n.a>>n.b;
	cout<<"sum of numbers is :"<<n.a+n.b;
	return 0;
}
#include<iostream>
using namespace std;
class rectangle{
	public:
		int l ,b ;
		
};
int main(){
	rectangle r1;
	cout<<"enter length and breadth";
	cin>>r1.l>>r1.b;
	cout<<"area of rectangle is:"<<r1.l*r1.b;
	return 0 ;
	
	}
#include<iostream>
using namespace std;
class Swap{
	public:
		int a , b;
		
};
int main(){
	Swap s1;
	cout<<"enter two numbers:";
	cin>>s1.a>>s1.b;
	int temp=s1.a;
	s1.a=s1.b;
	s1.b=temp;
	cout<<"swapped numbers are:"<<s1.a<<" and "<<s1.b<<endl;
	return 0;
}*/

#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int marks;
};
int main() {
 student s1 , s2;
	
	cout<<"enter the name and marks:";
	cin>>s1.name>>s1.marks;
	cout<<"enter the marks and name:";
	cin>>s2.marks>>s2.name;
	cout<<"student 1:"<<s1.name<<s1.marks;
	return 0; 
}





