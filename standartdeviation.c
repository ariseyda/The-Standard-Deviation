#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//The standart deviation
//Fomula=sqrt(sum_squares/n)-average^2

int main(){
	
		
	int i,k,l,m,n;
	int *p;
	int size=0;
	float standart_deviation=0;
	
	p=malloc(3*sizeof(int));
	
	printf("Enter as many numbers as you want for the N collection. (If you enter '0', the collection ends.)");
	
	 
	    for(i=0;;i++){
	      scanf("%d",&p[i]);
	      if(p[i]==0){
			break;
		}
		  size++;
	 }
	
		
	p=realloc(p,size*sizeof(int));
	
		int max=p[0];
	int min=p[0];
	
	for(k=1;k<size;k++){
		if(p[k]<p[0]){
			min=p[k];
		}
	}
	for(l=1;l<size;l++){
		if(p[l]>p[0]){
			max=p[l];
		}
	}
	
	printf("MIN:%d\nMAX:%d\n",min,max);
	
	int sum=0;
	
	for(m=0;m<size;m++){
		sum+=p[m];
	}
	
	float avrg=sum/(size*1.0);
	
	printf("Average:%.2f",avrg);
	
	int sum_squares=0;
	
	for(n=0;n<size;n++){
		sum_squares+=p[n]*p[n];
	}
	
	printf("\nSum squares:%d",sum_squares);
	
	standart_deviation=sqrt(sum_squares/(size*1.0))-(avrg*avrg*1.0);
	
	printf("\nStandart deviation:%.2f",standart_deviation);
	
	free(p);
	
	return 0;
}

