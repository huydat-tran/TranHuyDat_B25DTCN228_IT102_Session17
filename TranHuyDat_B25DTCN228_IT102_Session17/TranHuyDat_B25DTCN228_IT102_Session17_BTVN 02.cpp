#include <stdio.h>
#include <string.h>

void capitalizeCharacter(char string[1000],int length){
	for(int i = 0 ; i < length; i ++){
		if(string[i] >= 'a' && string[i] <='z'){
			string[i] -=32;
		}
	}printf("Mang sau khi viet hoa het la:  %s",string);
}

void normalizeCharacter(char string[1000],int length){
	for(int i = 0; i < length ; i++){
		if(string[i] >= 'A' && string[i] <= 'Z'){
			string[i] += 32;
		}
	}printf("Mang sau khi viet thuong het la: %s",string);
}

int main(){
	char str[1000];
	int choice;
	
	printf("Nhap 1 chuoi ki tu: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str, "\n")] = 0;
	
	printf("1. Chuyen doi toan bo ki tu thanh chu viet hoa\n2. Chuyen doi toan bo ki tu thanh chu viet thuong\nLua chon cua ban la: ");
	scanf("%d",&choice);
	
	if(choice ==1){
	capitalizeCharacter(str,strlen(str));
	}else if(choice == 2){
		normalizeCharacter(str,strlen(str));
	}else{
		printf("Sai lua chon!");
	}
}
