#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[] ){
	int s=1;
	char temp[20];
	char temp2[20];
	int temp3;


	while(s){
		s=0;
		for(int i=1; i<argc; i++){
			for(int j=0; j<strlen(argv[i]); j++){
				if((i+1)>=argc){
					break;
				}
				if((i-1)==0){
					break;	
				}
				printf("i=%d, j=%d\n", i, j);
				printf("%c, %c\n", argv[i][j], argv[i+1][j]);
				printf("%d, %d\n\n", (int)argv[i][j], (int)argv[i+1][j]);
				
				if((int)argv[i-1][j]>(int)argv[i][j]){
					strcpy(temp2, argv[i-1]);
					strcpy(argv[i-1], argv[i]);
					strcpy(argv[i], temp2);
					break;
					s++;
				}
				if((int)argv[i][j]>(int)argv[i+1][j]){
					strcpy(temp, argv[i]);
					strcpy(argv[i], argv[i+1]);
					strcpy(argv[i+1], temp);
					
					break;
					s++;
				}
			}
		}
	}
	
	
	for(int i=1; i<argc; i++){
		if((i+1)>argc){
			break;
		}
		printf("\n%s\n", argv[i]);
	}

	return 0;
}
