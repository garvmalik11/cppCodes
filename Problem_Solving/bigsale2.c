#include<stdio.h>
#include<math.h>

int PerfectSquareBill(int n)
{
    int integerValue;
    float floatVaue;
 
    floatVaue=sqrt((double)n);
    integerValue=floatVaue;
 
    if(integerValue==floatVaue){
        return 1;
    }
    else{
        return 0;
    }
}
 
int main(){

int numOfCust;
scanf("%d",&numOfCust);

int CustomerBillAmounts[numOfCust];
for(int i=0;i<numOfCust;i++){
    scanf("%d",&CustomerBillAmounts[i]);
}

int i, c = 0;
	for(i=0; i<numOfCust; i++){
		if(PerfectSquareBill(CustomerBillAmounts[i])== 1){
			c +=1;
		}
	}
	printf("%d", c);
}
