#include <stdio.h>
#include <string.h>

int main(){
	char str[1000];
	char longestWord[1000];
	char wordCount[1000];
	int index= 0;
	int maxLen =0;
	
	printf("Nhap vao 1 chuoi gom nhieu tu: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str, "\n")] = 0;
	
	for(int i =0 < i < strlen(str); i ++){
		if(wordCount != ' '){
			wordCount[index] = str[i];
			index++;
		
		}else{
			wordCount = '\0';
			}if (index > maxLen) {
                maxLen = index; 
                strcpy(longestWord, wordCount); 
            }

        
            index = 0;
        }
    }


    if (maxLen > 0) {
        printf("------------------------------\n");
        printf("Tu dai nhat la: %s\n", tuDaiNhat);
        printf("Do dai: %d\n", maxLen);
    } else {
        printf("Chuoi ko co tu nao!\n");
    }

    return 0;
}
