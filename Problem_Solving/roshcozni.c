#include<stdio.h>
int main(){
	int input1 ;
	scanf("%d", &input1);
		int input2 ;
		scanf("%d", &input2);
		int input3[input1] ;
		
		int sub[input1] ;
		
		int c = 0;
		int i =0;
		for( i=0; i<input1; ++i)
		{
			scanf("%d", &input3[i]);
			if(input3[i] != -1)
				++sub[input3[i]];
		}
		i = 0;
		for(i=0; i<input1; ++i)
		{
			if(sub[i] >= input2)
				++c;
		}
		
		printf("%d", c);
}