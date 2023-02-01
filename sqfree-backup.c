#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int freesquare(int div);




int main() {
	int num,i,j, count=0;
	scanf("%d", &num);

	for(i=2; i<=num/2;++i) {
		if (num%i==0) {
			if(freesquare(i)){
			count++;
		        
		}
	}
		
	}


	printf("%d \n", count);

	for(i=2; i<=num/2;++i) {
		if (num%i==0) {
			if(freesquare(i)){
			
		        printf("%d ", i);
	        	}
         	}
	}
	 
	
}



int freesquare( int div) {
	int sqrint;
	double sqrdble;
	int flag;
	int i, j;

	sqrdble = sqrt(div);
	sqrint = ceil(sqrdble);
	for (i=2; i<=sqrint+1; ++i) {
		if (div%(i*i)!=0){
			flag=1;
		}
		else if(div%(i*i)==0){
			flag = 0;
			break;
	
		}
	}

	if (flag==1) return 1;
	else return 0;
	
}

