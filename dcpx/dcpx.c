#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[] ){
	int s=1, aaa, *temp;
	for(int i=1; i<argc; i++){
		for(int j=0; j<strlen(argv[i]); j++){
			if((i+1)>=argc){
				break;
			}
			printf("i=%d, j=%d\n", i, j);
			printf("%c, %c\n", argv[i][j], argv[i+1][j]);	
		}	
	}

	for(int i=1; i<argc; i++){
		if((i+1)>=argc){
			break;
		}
		printf("%s, %s\n", argv[i], argv[i+1]);
		printf("i=%d\n", i);
		if(strlen(argv[i])<strlen(argv[i+1])){
			memcpy(temp, argv[i], strlen(argv[i+1]));
			memcpy(argv[i], argv[i+1], strlen(argv[i+1]));
			memcpy(argv[i+1], temp, strlen(argv[i+1]));
		}
		printf("%s, %s\n", argv[i], argv[i+1]);
	}

	return 0;
}
