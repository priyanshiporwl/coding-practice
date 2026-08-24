#include<iostream>
using namespace std;
class compare{
	public:
		int a,b;
		void input(){
			cout<<"enter two numbers:";
			cin>>a>>b;
			
		}
		void findlargest(){
			if(a>b)
			  cout<<"largest="<<a;
			  cout<<"largest="<<b;
		}
		
};
int main(){
	compare c;
	c.input();
	c.findlargest();
	return 0;
}
