#include<stdio.h>
main()
{
	int i,j,k,l;     //used for loops.
	float array[30];
	float max1;
	float min1;
	float avg1;
	float sum;
	float sum1;
	float sum2;
	i=1;
	j=1;
	k=1;
	
	int flag;
	flag=0;
     sum=0;	
//	while (i<=30)
//	{
		while (k<15)
		{
			for(l=0 ;l<5; l++ )
	{
	
			printf("enter the various temperature values \n");
			scanf("%f",&array[l]);
			sum+=array[l];
		
			
			
			
				max1=array[0];
				if (max1<array[l])
			{
					max1=array[l];
				}
					min1=array[0];
	if (min1>array[l])
	{
		min1=array[l];
	}
}


    avg1=sum/l;
	printf("the max value is %f",max1);
    printf ("the min value is %f",min1);
    printf(" the avg value is %f",avg1);
    k=l;
    
    l=5;
    	for(l=l ;l<10; l++ )
	{
	
			printf(" \n enter the various temperature values \n");
			scanf("%f",&array[l]);
			sum1+=array[l];
				max1=array[l];
				if (max1<array[l])
			{
					max1=array[l];
				}
					min1=array[l];
	if (array[l]<min1)
	{
		min1=array[l];
	}
}
    avg1=(sum + sum1)/l;
	printf("\n the max value is %f",max1);
    printf ("\n the min value is %f",min1);
    printf(" \n the avg value is %f",avg1);
    
    k=l;
    
    
    for(l=l ;l<15; l++ )
	{
	
			printf(" \n enter the various temperature values \n");
			scanf("%f",&array[l]);
			sum2+=array[l];
				max1=array[l];
				if (max1<array[l])
			{
					max1=array[l];
				}
					min1=array[l];
	if (array[l]<min1)
	{
		min1=array[l];
	}
}
    avg1=(sum + sum1 +sum2)/l;
	printf("\n the max value is %f",max1);
    printf ("\n the min value is %f",min1);
    printf(" \n the avg value is %f",avg1);
    k=l;
    
 			
			
	}
	printf("\n 15 min window status");
	printf("\n avg value is %f",avg1);
	while(i<15)
	{
	if (array[0]<array[0+i])
    {
    	max1=array[i];
    	i++;
	}
		i++;
	}
	printf ("\n the max temp is %f",max1);
	
//	}
}
