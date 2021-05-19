#include<stdio.h>
#include <cs50.h>
void main(){
	int option,rows,i,j,k;
	option=get_int("Enter type of pattern (1 or 2)");
	rows=get_int("Number of rows");
	if(option==1){
		
		
		for(i=0;i<rows;i++){
			for(j=rows-i;j>0;j--){
			
				printf("#");
				}
			printf("\n");
			}
		
	}
	else if(option==2){
		for(i=0;i<rows;i++){
			for(j=rows-(i+1),k=0;j>0;k++,j--){
				
				printf(" ");
				}
			for(j=k;j<rows;j++){
			printf("#");
			}
printf("\n");
		
	}
}
}
//gcc -o out patterns.c cs50.c
