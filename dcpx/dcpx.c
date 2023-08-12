#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
				if((int)argv[i][j]>(int)argv[i+1][j]){
					printf("argv[i]=%s, argv[i+1]=%s, temp=%s\n\n", argv[i], argv[i+1], temp);
					strcpy(temp, argv[i]);
					printf("temp=argv[i]\n");
					printf("argv[i]=%s, argv[i+1]=%s, temp=%s\n\n", argv[i], argv[i+1], temp);
					strcpy(argv[i], argv[i+1]);
					printf("argv[i]=argv[i+1]\n");
					printf("argv[i]=%s, argv[i+1]=%s, temp=%s\n\n", argv[i], argv[i+1], temp);
					strcpy(argv[i+1], temp);
					printf("argv[i+1]=temp\n");
					printf("argv[i]=%s, argv[i+1]=%s, temp=%s\n", argv[i], argv[i+1], temp);
					break;
					s++;
					if((int)argv[i-1][j]>(int)argv[i][j]){
						printf("argv[i-1]=%s, argv[i]=%s, temp=%s\n\n", argv[i-1], argv[i], temp2);
						strcpy(temp2, argv[i-1]);
						printf("temp2=argv[i-1]\n");
						printf("argv[i-1]=%s, argv[i]=%s, temp=%s\n\n", argv[i-1], argv[i], temp2);
						strcpy(argv[i-1], argv[i]);
						printf("argv[i-1]=argv[i]\n");
						printf("argv[i-1]=%s, argv[i]=%s, temp=%s\n\n", argv[i-1], argv[i], temp2);
						strcpy(argv[i], temp2);
						printf("argv[i]=temp2\n");
						printf("argv[i-1]=%s, argv[i]=%s, temp=%s\n", argv[i-1], argv[i], temp2);
						break;
						s++;
					}
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
