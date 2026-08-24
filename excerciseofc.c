/*#include<stdio.h>
int main(){
	int n;
	int i;
	printf("enter a number");
	scanf("%d" ,  &n);
	for( i=1; i<=10; i++){
		int multiplication = n*i;
	
		
		printf("%d" , n, "*" ,"%d",i,"=", "%d\n" , multiplication);
}
	return 0;
}
#include<stdio.h>
int main(){
	int p = 1000;
	int r = 8;
	int t= 3;
	
float	SI = (p*t*r)/100;
printf("simple intrest is : %.2f", SI);
return 0;
}
#include<stdio.h>
int main(){
	int a , b ,temp;
	 a = 10;
	 b = 20;
	 
	printf("before swapping numbers are  %d %d\n " ,a , b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping numbers are %d %d\n ", a, b);
	return 0;
}
#include<stdio.h>
int main(){
	int a,b;
	 a = 10;
	b= 20;
	printf("before swapping numbers are  %d %d\n " ,a , b)
	b=b-a;
	a=a+10;
	printf("after swapping numbers are %d %d\n ", a, b)
	return 0;
	
}
#include<stdio.h>
int main(){
	char character;
	printf("enter a character:");
	scanf("%c",&character);
	printf("ASCII value is %d", character);
	return 0;
}
#include<stdio.h>
int main(){
	int a, b , c ;
	printf("enter a b and c");
	scanf("%d %d %d", &a,&b,&c);
	if(a>b&&a>c){
		printf("a is largest");
	}
	else if (b>a&&b>c){
		printf("b is largest");

	}
	else {
		printf("c is largest");
	}
	return 0;
}
#include<stdio.h>
int main(){
	int year;
	year = 2024;
	if((year % 400==0 )|| (year%4==0 && year%100 !=0)){
		printf("2024 is leap year");
		
	}
	return 0;
}
#include<stdio.h>
int main(){
	int day;
	printf("enter the day %d",day);
	scanf("%d",&day);
	switch(day){
		case 1:
			printf("day is monday");
			break;
				case 2:
			printf("day is tuesday");
			break;
				case 3:
			printf("day is wednesday");
			break;
				case 4:
			printf("day is thrusday");
			break;
			default:
				printf("not day of week");
				break;
	}
	return 0;
}
#include<stdio.h>
int main(){
	char vowel;
	printf("enter vowel %c",vowel);
	scanf("%c",vowel);
	switch(vowel){
		case 'a':
			printf("a,is a vowel");
			break;
		case 'e':
			printf("e is a vowel");
			break;
				case 'i':
					printf("i is a vowel");
					break;
					case 'o':
					printf("o is a vowel");
					break;
					case 'u':
					printf("u is a vowel");
					break;
				    default:
				     printf("not a vowel");
				      break;	
					
	}
	return 0;
}
#include<stdio.h>
int main(){
	int i;
	
	do{
		printf("enter number %d ",i);
		scanf("%d",&i);
		
		switch(i){
			case 1:
			printf("good morning");
			break;
			case 2:
			printf("goodbye");
			break;
			case 3:
			printf("exit");
			break;
		}
		i++;
	}
	while(i<3);
	return 0;
}
#include<stdio.h>
int main(){
	int num = 5 , j=3, result=1;
	for(j=0; j<4; j++){
		result = num*num + result;
		if(j==0){
			result = 1;
		}
			}
printf("answer is %d", result);
return 0;
}*/
