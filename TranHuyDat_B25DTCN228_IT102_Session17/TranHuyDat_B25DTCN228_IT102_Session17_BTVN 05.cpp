#include <stdio.h>
#include <string.h>

void normalizeCharacters(char string[1000],int length){
	for(int i = 0; i < length; i ++){
		if(string[i] >= 'A' && string[i] <= 'Z'){
			string[i] += 32;
		}
	}		
}

int main(){
	char str1[1000],str2[1000];
	printf("Nhap chuoi ki tu thu nhat vao: ");
	fgets(str1,sizeof(str1),stdin);
	str1[strcspn(str1, "\n")] = 0;
	
	printf("Nhap chuoi ki tu thu hai: ");
	fgets(str2,sizeof(str2),stdin);
	str2[strcspn(str2, "\n")] = 0;
	
	normalizeCharacters(str1,strlen(str1));
	normalizeCharacters(str2,strlen(str2));
	
	if(strcmp(str1,str2) == 0){
		printf("Giong nhau");
		
	}else{
		printf("Khong giong nhau");
	}
	
}
