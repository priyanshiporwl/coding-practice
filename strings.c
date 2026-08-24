/*#include<stdio.h>
int main(){
	char name[20];
	printf("enter name\n");
	scanf("%s",name);
	printf("name is %s",name);
	return 0;
}
#include<stdio.h>
int main(){
	char name[20];
	int i=0;
	printf("enter name\n");
	scanf("%s",name);
	while(name[i]!= '\0'){
		i++;
	}
	printf("length is %d",i);
	return 0;
	}
#include<stdio.h>
int main(){
	int i=0, count=0;
	char name[20];
	printf("enter name\n");
	scanf("%s",name);
	while(name[i]!= '\0'){
		if(name[i]=='a' ||name[i]=='e' ||name[i]=='i'||name[i]=='o' || name[i]=='u' ){
			count++;
		}
		i++;
	}
	printf("number of vowels are %d",count);
	return 0;
		}
#include<stdio.h>
int main(){
	int i=0;
	int vowel=0, consonant=0;
	char name[20];
	printf("enter name\n");
	scanf("%s",name);
	while(name[i]!='\0'){
		if(name[i]=='a' ||name[i]=='e' ||name[i]=='i'||name[i]=='o' || name[i]=='u' ){
			vowel++;
		}
		else{
			consonant++;
		}
		i++;
	}
	printf("number of vowels and consonant are %d and %d", vowel , consonant);
return 0;
	}
#include<stdio.h>
int main(){
int i=0;
int length=0;
char name[20];
printf("enter the name\n");
scanf("%s", name);
while(name[i]!='\0'){
	length++;
	i++;
}
for(i=length-1; i>=0; i--){
	printf("%c",name[i]);
}
return 0;
}

#include<stdio.h>
int main(){
	int i=0;
	int j=0;
	int length=0;
	char name[20];
	char rev[20];
	printf("enter the string\n");
	scanf("%s", name);
	printf("string is %s\n",name);
	while(name[i]!='\0'){
		length++;
		i++;
	}
	for(i=length-1; i>=0; i--){
		rev[j]=name[i];
		j++;
	}

	if(rev[j]==name[i]){
		printf("string is plaindrome\n");
	}
	else{
		printf("not plaindrome");
	}
	return 0;
}

#include<stdio.h>
int main(){
	int i;
	int alpha =0;
	int dig=0;
	int special=0;
	char name[20];
	printf("enter string\n");
	scanf("%s",name);
	while(name[i]!='\0'){
		if(name[i]>='a' && name[i]<='z' || name[i]>='A' && name[i]<='z'){
			alpha++;
		}
		else if(name[i]>='0' && name[i]<='9'){
			dig++;
		}
		else{
			special++;
		}
		i++;
	}
	printf("number of alphabets numbers and special char are %d %d and %d",alpha,dig,special);
	return 0;
}
#include<stdio.h>
int main(){
	int i=0;
	char name[20];
	printf("enter string\n");
	scanf("%s", name);
	while(name[i]!='\0'){
		if(name[i]>='a' && name[i]<='z')
		{
			name[i]=name[i]-32;
			printf("%c",name[i]);
		}
		i++;
		}
	
		
		return 0;
	}
#include<stdio.h>
int main(){
	 int i=0;
	 char name[20];
	 printf("enter string\n");
	 scanf("%s",name);
	 while(name[i]!='\0'){
	 	if(name[i]>='A'&& name[i]<='Z'){
	 		name[i]=name[i]+32;
		 }
		 i++;
		 
	 }
	 printf("%c",name[i]);
	 return 0;
}

#include<stdio.h>
int main(){
	int i=0;
	int j=0;
	int length=0;
	char name[20];
	char copy[20];
	printf("enter the string\n");
	scanf("%s",name);
	printf("original string is %s\n", name);
	while(name[i]!='\0'){
	       length++;
	       i++;
	}
	for(i=0; i<length; i++){
		copy[j]=name[i];
		j++;
		
	}
	copy[j]='\0';
	printf("%s",copy);
	return 0;
}
#include<stdio.h>
int main(){
	int i=0;
	int flag=1;
	char string1[20];
	char string2[20];
	printf("entr both strings\n");
	scanf("%s   %s",string1,string2);
	while(string1[i]!='\0'){
		if(string1[i]!=string2[i]){
	      flag=0;
		}
		i++;
	}
	if(flag==1){
		printf("equal strings\n");
	}
	else{
		printf("not equal");
	}
	return 0;
}
#include<stdio.h>
int main(){
	int i=0;
	int frequency=0;
	char character;
	char string[20];
	printf("enter the string\n");
	scanf("%s",string);
	printf("enter the character\n");
	scanf(" %c",&character);
	while(string[i]!='\0'){
		if(string[i]==character){
			frequency++;
		}
		i++;
	}
	printf("freq of character is %d", frequency);
	return 0;
}
#include<stdio.h>
int main(){
	int i=0;
	int j=0;
	char name[20];
	char letter;
	printf("enter the name\n");
	scanf("%s",name);
	printf("enter the letter\n");
	scanf(" %c", &letter);
	while(name[i]!='\0'){
		if(name[i]!=letter){
			name[j]=name[i];
			j++;
		}
		
		i++;
		
	}
	name[j] = '\0';
	printf("%s",name);

	return 0;
}
#include<stdio.h>
int main(){
	int i=0,j=0;
	int frequency;
	int n;
	int visited[20]={0};
	int count;
	printf("enter number of characters\n");
	scanf("%d", &n);
	char name[n];
	printf("enter name\n");
	scanf("%s", name);
	for(i = 0; i < n; i++)
{
    if(visited[i] == 0)
    {
        count = 0;

        for(j = i; j < n; j++)
        {
            if(name[i]==name[j]){
            	count++;
            	visited[j]=1;
			}
            
        }
printf("%c = %d\n", name[i], count);
        
    }
}
return 0;
}*/



