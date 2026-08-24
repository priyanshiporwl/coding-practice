#include<iostream>
using namespace std;
	class number{
		public:
			int n;
			void input(){
				cout<<"enter the number:";
				cin>>n;
			}
			void check(){
				if(n%2==0)
				 cout<<"even number:";
				else 
				cout<<"odd number:";
			}
	};
	int main() {
		number obj;
		obj.input();
		obj.check();
		return 0;
	}
