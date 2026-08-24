
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
	return 0; }
