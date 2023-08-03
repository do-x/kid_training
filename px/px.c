#include <stdio.h>
void aaa(){
	
}
int main(){

	int a[]={ 4, 554, 535345, 677, 6666, 660, 1112, 567, 778, 553 };
	int temp1, temp2, i, j, s=1, t=1;

	while(s){
		s=0;	
		for(i=0; i<10; i++){
			if(a[i]<a[i+1]){
				temp1=a[i];
				a[i]=a[i+1];	
				a[i+1]=temp1;
				s++;
			}		
		}
	}
	for(i=0; i<10; i++){
		if(a[i]%2==0){
			continue;
		}else{
			printf("%dji\n", a[i]);	
		}
	}	

	while(t){
		t=0;	
		for(i=0; i<10; i++){
			if(a[i]>a[i+1]){
				temp2=a[i];
				a[i]=a[i+1];	
				a[i+1]=temp2;
				t++;
			}
		}
	}
	for(i=0; i<10; i++){
		if(a[i]%2!=0){
			continue;
		}else{
			printf("%dou\n", a[i]);
		}		
	}

	return 0;
}
