#include<iostream>
using namespace std;
class square{
public:
		int n;
		
		void input(){
			cout<<"enter the number:";
			cin>>n;
		}
		void calculate(){
			cout<<"square of number is:"<< n*n<<endl;
			
		}
};
int main(){
	square s;
	s.input();
	s.calculate();
	
	return 0;
}
