#include <stdio.h>
#include <string.h>

void connectCharacters(char string[1000],char str[1000]){
	strcat(string,str);
	printf("Ket qua sau khi noi chuoi la: %s",string);
}

int main(){
	char string1[1000];
	char string2[1000];
	
	printf("Nhap chuoi ki tu dau tien: ");
	fgets(string1,sizeof(string1),stdin);
	string1[strcspn(string1, "\n")]= 0;
	
	printf("Nhap chuoi ki tu thu hai: ");
	fgets(string2,sizeof(string2),stdin); 
	string2[strcspn(string2, "\n")] = 0;
	
	connectCharacters(string1, string2);
}
