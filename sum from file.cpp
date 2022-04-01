#include <stdio.h>
int main ()
  {

	int x, sum=0,n;
    FILE *fp;
    if ((fp = fopen ("sum.txt","r"))==NULL){
        printf("Error in open file");
    }else{
        fscanf (fp,"%d",&n);
        for (int i=0;i<n;i++){
            fscanf(fp,"%d",&x);
            sum+=x; }
        printf("%d",sum);	
		}  }
