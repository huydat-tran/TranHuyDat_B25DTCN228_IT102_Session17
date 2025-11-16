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
			worldCount[index] = str[i];
			index++;
		
		}else{
			wordCount = '\0';
			}if (index > maxLen) {
                maxLen = index; 
                strcpy(tuDaiNhat, tuDangXet); 
            }

        
            index = 0;
        }
    }


    if (maxLen > 0) {
        printf("------------------------------\n");
        printf("T? dài nh?t là: %s\n", tuDaiNhat);
        printf("Ð? dài: %d\n", maxLen);
    } else {
        printf("Chu?i không có t? nào!\n");
    }

    return 0;
}
