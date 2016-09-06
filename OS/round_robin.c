#include<stdio.h>
void main(){
	int bt[50],p[50],qt,gt;
	int i,j,n,k,flag;
	printf("Enter Quantum time\n");
	scanf("%d",&qt);
	printf("Enter number of process\n");
	scanf("%d",&n);
	scanf("Enter brust times:\n");
	for(i=0;i<n;i++){
		printf("Brust Time for Process %d:",i+1);
		scanf("%d",&bt[i]);
	}
	j=0;
	gt=0;
	int a=qt;
	flag=1;
	while(flag){
		
		if((bt[j]!=0) && (bt[j]>=qt)){
			bt[j]=bt[j]-qt;
			gt=gt+qt;
			//printf("%d\n",bt[j]);
			j++;
			
			printf(" P%d  %d\n",j,gt);
		}	
		else if((bt[j]!=0) && (bt[j]<qt)){
			//bt[j]=bt[j]-bt[j];
			gt=gt+bt[j];
			bt[j]=0;
			j++;
			printf(" P%d  %d\n",j,gt);
			
		}
		else j++;
		for(k=0;k<n;k++){
			if(bt[k]==0)
				flag=0;
			else
				break;
		}
		if(j==n){
			j=0;
		}
			
	}
	
}
