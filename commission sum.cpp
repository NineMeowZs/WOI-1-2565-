#include <stdio.h>
int main ()
  {

	int x, sum=0,n;
	float com;
    FILE *fs;
    fs=fopen("input.txt","r");
    FILE *fp;
    fp=fopen("output.txt","w");
    
	fscanf (fs,"%d",&n);
    for (int i=0;i<n;i++){
     fscanf(fs,"%d",&x);
	com=x*0.03;  
    sum+=com;    
    fprintf(fp,"%.2f\n",com);    
	}
	fprintf(fp,"%.2d",sum);	
		
		fclose(fp);
		fclose(fs);
		}  
