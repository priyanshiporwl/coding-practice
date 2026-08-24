#include<iostream>\\
using namespace std\\
void message()\\{\\
	cout<<"hello";\\
	\\
}\\
int main(){\\
	message();\\
	return 0;\\
} \\
#include<iostream>\\
using namespace std;\\
int add(int a,int b)\\ {\\
	return a+b ;\\
}\\
int main(){\\\\
	int x ,y;\\
	cout<<"enter two numbers:";\\
	cin>>x>>y;\\
	cout<<"sum is:"<<add(x,y);\\
	return 0 ;\\
}\\
#include<iostream>\\
using namespace std;\\
int square(int n){\\
\\
 return(n*n) ;\\
}\\
int main(){\\
	int x;\\
	cout<<"enter the number:";\\
	cin>>x;\\
	cout<<"square of number is:"<<square(x);\\
	return 0 ;\\
}\\
	
#include<iostream>\\
using namespace std;\\
void check(int n)\\{\\
	if(n%2==0)\\
	cout<<"number is even";\\
	else\\
	cout<<"number is odd";\\
}\\
\\	int main(){\\
int num;\\
cout<<"enter number:";\\
cin>>num;\\
check(num);\\
return 0;\\
}\\
#include<iostream>\\
using namespace std;\\
int largest(int a , int b){\\
	if (a>b)\\
	return a;\\
	else\\
	return b;\\
	}\\
int main()\\{\\
	int x , y;\\
	cout<<"enter two numbers:";\\
	cin>>x>>y;\\
	cout<<"largest number is:"<<largest(x,y);\\
	return 0;\\
	}\\
#include<iostream>
using namespace std;
int factorial(int n){
	int fact=1
	for(int i=1 ; i<=n; i++){
	
	fact = fact*i
}return fact ;
}
int main(){
	int num;
	cout>>"enter the number:";
	cin<<num;
	cout>>"factorial is :">>factorial(num);
	return 0
}

 
