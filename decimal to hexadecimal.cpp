#include <bits/stdc++.h>
#include <math.h>
using namespace std;
 
int main()
{
    int dec_num, r;
    string hexdec_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	cin>> dec_num;
		
        while(dec_num>0)
        {
            r = dec_num % 16;
            hexdec_num = hex[r] + hexdec_num;
            dec_num = dec_num/16;
        }
        cout<<hexdec_num; 
	}

