#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int freesquare(int div);

int main() {
	int num,i,j, count=0;
	scanf("%d", &num);

        //loop to check for factors of the number
        //loop starts from two to avoid floating point exception

	for(i=2; i<=num/2;++i) {

		if (num%i==0) {   

			if(freesquare(i)) {
			    count++;
		        }

	        }

	}
        
        printf("\n");
	printf("%d \n", count);
	printf("\n\n");

	for(i=2; i<=num/2;++i) {

		if (num%i==0) {

			if(freesquare(i)) {
		            printf("%d ", i);
	                }

                }
	}
	 
	printf("\n");

        return 0;
}



int freesquare( int div) {

	int sqrint;
	double sqrdble;
	int flag;
	int i, j;


// the double value returned by the sqrt function is explicitly converted to an integer type
// loop starts from two to avoid floating point exception
//flag is set to zero  and the loop is broken if the number is divisible by a perfect square otherwise flag is set to 1
//after the loop is exited the return value is based on the flag value

	sqrint = (int)sqrt(div);
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

