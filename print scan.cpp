#include <stdio.h>
int main()
{
FILE *fp;
int account;
char name[30];
float balance;
if( (fp = fopen("balance.txt", "r") ) == NULL)
{
  	printf("Error in open file ");
}
else {
	scanf("%d %s %f", &account, name, &balance); 
    fprintf(fp, "%d %s %.2f", account, name, balance);


}
fclose(fp);
return 0;
}


