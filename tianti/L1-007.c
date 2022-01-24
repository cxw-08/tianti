#include<stdio.h>
#include<stdlib.h>
int main()
{
	char number[10];
	int i;
	scanf("%s",&number);
	for(i=0;i<strlen(number);i++){
		if(number[i]=='-'){
			printf("fu");
		}else if(number[i]=='0'){
			printf("ling");
		}else if(number[i]=='1'){
			printf("yi");
		}else if(number[i]=='2'){
			printf("er");
		}else if(number[i]=='3'){
			printf("san");
		}else if(number[i]=='4'){
			printf("si");
		}else if(number[i]=='5'){
			printf("wu");
		}else if(number[i]=='6'){
			printf("liu");
		}else if(number[i]=='7'){
			printf("qi");
		}else if(number[i]=='8'){
			printf("ba");
		}else{
			printf("jiu");
		}
		if(i!=strlen(number)-1){
			printf(" ");
		}
	}
	return 0;
} 
