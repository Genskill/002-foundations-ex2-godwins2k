#include<stdio.h>
#include<cs50.h>
void isTriangle(float maximum,float side1,float side2);
void isTriangle(float maximum,float side1,float side2){
	
	if(maximum*maximum==side1*side1+side2*side2){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}

		
}

void  main(){
	float a,b,c,max,side1,side2;
	a=get_float("side 1 ");
	
	b=get_float("side 2 ");
	c=get_float("side 3 ");
	//max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	if((a>b) && (a>c)){
		max=a;
		side1=b;
		side2=c;
		
	}
	else if(b>c){
		max=b;
		side1=a;
		side2=c;
	}
	else{
		max=c;
		side1=a;
		side2=b;
	}
		
	isTriangle(max,side1,side2);
		
	}
