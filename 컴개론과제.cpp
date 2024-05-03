#include<stdio.h>

int main(void){
        int in,rm1,rm2,rm3,rm4,rm5,rm6,rm7,rm8;
        int md1,md2,md3,md4,md5,md6,md7,md8;
        printf("type one number from -128 to 127: ");
        scanf("%d",&in);
        if (in >= 0){
		in = in;
    }
    else if(in<0){
    	in = 256+in;
	}
	rm1 = in%2;
    md1 = in/2;
    rm2 = md1%2;
    md2 = md1/2;
    rm3 = md2%2;
    md3 = md2/2;
    rm4 = md3%2;
    md4 = md3/2;
    rm5 = md4%2;
    md5 = md4/2;
    rm6 = md5%2;
    md6 = md5/2;
    rm7 = md6%2;
    md7 = md6/2;
    rm8 = md7%2;
    md8 = md7/2;
		printf("%d%d%d%d %d%d%d%d",rm8,rm7,rm6,rm5,rm4,rm3,rm2,rm1);
        return 0;
}