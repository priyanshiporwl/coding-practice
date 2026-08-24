/*#include<stdio.h>
struct student{

	int roll;
	float marks;
};
struct student s1;

int main(){
struct student *p;
p=&s1;
	printf("enter roll");
	scanf("%d",&p->roll);
	printf("enter marks");
	scanf("%f",&p->marks);
	printf("Roll = %d\n", p->roll);
printf("Marks = %.2f", p->marks);
	return 0;
}*/
#include<stdio.h>
struct student{
	int roll;
	float marks;
};
struct student s;
int main(){
	struct student *p;
	p=&s;
	printf("enter roll\n");
	scanf("%d",&s.roll);
	printf("enter marks\n");
	scanf("%f",&s.marks);
	printf("roll is %d",s.roll);
	printf("marks is %.2f",s.marks);
	p->marks=p->marks+5;
	printf("marks after modifying %.2f\n",p->marks );
	return 0;
}
