#include <stdio.h>
#include <string.h>

void removeCharacters(char string[1000],int length,char charToRemove){
	int j  = 0;
	for(int i = 0; i < length; i ++){
		if(string[i] != charToRemove){
			string[j] = string[i];
			j++;
		}
	}string[j] ='\0';
	printf("Sau khi xoa bo cac ki tu trung lap: %s",string);
}

int main(){
	char str[1000];
	char charRemove;
	
	printf("Nhac 1 chuoi ki tu: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str, "\n")] = 0;
	
	
	printf("Nhap  ki tu can xoa: ");
	scanf("%c",&charRemove);
	
	removeCharacters(str,strlen(str),charRemove);
}
