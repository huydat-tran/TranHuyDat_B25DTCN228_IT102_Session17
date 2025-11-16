#include <stdio.h>
#include <string.h>

void compareCharacters(char string[1000],int length){
	char reverse[1000];
	for(int i = 0; i < length ;  i ++){
		reverse[i] = string[length -1 - i];
	}
	reverse[length] ='\0';
	if(strcmp(string,reverse) ==0){
		printf("'%s' is palindrome",string);
	}else{
		printf("'%s' is not palindrome",string);
	}
	
}

int main(){
	char string[1000];
	printf("Enter character or anything: ");
	fgets(string,sizeof(string),stdin);
	string[strcspn(string, "\n")] = '\0';
	
	compareCharacters(string,strlen(string));
	
}
	
