#include <stdio.h> 
#include <string.h> 
 
void main() 
{ 
	char pwd[20]; 
	int i,uc=0,lc=0,dc=0,sc=0,scc=0,length=0; 
	 
	printf("Enter password: "); 
	scanf("%s",&pwd); 
	 
	for(i=0; pwd[i]!='\0'; i++) 
	{ 
		if(isupper(pwd[i]))		uc++; 
		if(islower(pwd[i]))		lc++; 
		if(isdigit(pwd[i]))		dc++; 
		if(isspace(pwd[i]))		sc++; 
		if(ispunct(pwd[i]))		scc++; 
		length++; 
	} 
	 
	if(uc<1 || lc<1 || dc<1 || scc<1 || sc>0 || length<8) printf("Not valid"); 
	else printf("Valid"); 
} 
