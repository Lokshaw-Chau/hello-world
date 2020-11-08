#include<stdio.h>

int main(){
	for(int a=1;a<10;a++){
		printf("%d\t",a);
	}
	printf("\n");
	for(int a=1;a<10;a++){
		printf("-\t");
	}
	printf("\n");
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			if(j<i){
				printf(" \t");
			}
			else{
				printf("%d\t",i*j);
			}
	}
		printf("\n");
	}
	return 0;
}
