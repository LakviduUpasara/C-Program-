#include<stdio.h>

int main ()
{
	// creat variable 
	
	int sawanType ,NumberOfSawan  ;
	char oderType , nextOder;
	
	float total ;
	
	//get User Input
	
	do {
		
			printf("Please Enter Sawan Type : ") ;
			scanf("%d",&sawanType) ;
			
			printf("Please Enter Number Of Sawan :");
			scanf("%d",&NumberOfSawan) ;
			
			printf("Please Enter oder Type ");
			scanf(" %c",&oderType); 
			
			
		
			
			if (sawanType == 1 )
			{
				total = NumberOfSawan * 10000.00 ;
				
				
			}else if (sawanType == 2)
			{
				total = NumberOfSawan * 12000.00 ;
				
			}else if (sawanType == 3)
			{
				total = NumberOfSawan * 15000.00 ;
			}
			else {
				
				printf("please Enter Valid Sawan Type \n") ;
			}
			
			
			if (oderType == 'I')
			{
				total =  (total *100 /15) + total ;
				
			}else if(oderType = 'T')
			{
				total =  (total *100 /5) + total ;
				
			}else if (oderType == 'D')
			{
				
				total =  (total *100 /5) + total ;
			}
			
			printf("\nThe Ammount to be Paid : %.2f", total) ;
			
			
			
			
			
			
			
			
			
			
	
			printf(" Do you want to Input the Next Oder Deatail : ") ;
			scanf(" %c",&nextOder) ;
			
			printf("\n");
			printf("\n");
		
			
	
	} while (nextOder != 'N') ;
	
	
	
	
	
	
	
	
	
	return 0 ;
}
