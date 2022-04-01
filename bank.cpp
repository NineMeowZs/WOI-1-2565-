#include <stdio.h>
int main ()
  {
	int m=1,sum=0;
	FILE *fp;
    fp=fopen("bank.txt","w");
    while(!(m==0)){
    	scanf("%d",&m);
    	sum+=m;
    	if(m>0){
    		fprintf(fp,"CD %d %d\n",m,sum);
    		}else if (m<0){
    			fprintf(fp,"CS %d %d\n",m*(-1),sum);
	}	}
    	fclose(fp);
		return 0;	
}
