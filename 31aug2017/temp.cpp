#include <stdio.h>
main()
{
	int flag;
	int a,b;
	int count,count1,count2;
	float sum;
	float sum1;
	float sum2;
	float temp[30];
	float max1,max2,max3;
	float min1,min2,min3;
	float avg1,avg2,avg3;
	flag=0;
	count=0;
	while(flag<30)
	{
		printf("\n enter the temp values");
		scanf("%f",&temp[flag]);
	
		
		
	  
        
       
	 //for(flag=0; flag<5; flag++)
	 if(count<5)
	 {
	 
	        sum+=temp[count];
	  		max1=temp[0];
				if (max1<temp[count])
			{
					max1=temp[count];
				}
					min1=temp[0];
	if (min1>temp[count])
	{
		min1=temp[count];
	}
}
count=count+1;
	 if (count==5)
	  {
	  	printf("\n the 5 min window");
	   avg1=sum/5;
	   printf("\n the average value is %f",avg1);
	   printf("\n the max value is %f",max1);
	   printf("\n the min value is %f",min1);
       
	   count1=count+1;
	   count=a;	   
	   count=0;
	   
	   
	   
	   }
	   if(count1<15)
	   {
	   	 sum1+=temp[count1];
	  		max1=temp[a];
				if (max1<temp[count1])
			{
					max1=temp[count1];
				}
					min1=temp[a];
	if (min1>temp[count1])
	{
		min1=temp[count1];
	}
}
count1=count1+1;
	 if (count1==15)
	  {
	  	printf(" \n the 10 min window");
	   avg2=(sum+sum1)/10;
	   printf("\n the average value is %f",avg2);
	   printf("\n the max value is %f",max1);
	   printf("\n the min value is %f",min1);
       
	   count2=count1+1;
	   count1=b;	   
	   count1=0;
	   
		}
		
		
		if(count2<30)
		{
	   	 sum2+=temp[count2];
	  		max1=temp[b];
				if (max1<temp[count2])
			{
					max1=temp[count2];
				}
					min1=temp[b];
	if (min1>temp[count2])
	{
		min1=temp[count2];
	}
}
count2=count2+1;
	 if (count2==30)
	  {
	  	printf(" \n the 15 min window");
	   avg3=(sum+sum1+sum2)/15;
	   printf("\n the average value is %f",avg3);
	   printf("\n the max value is %f",max3);
	   printf("\n the min value is %f",min3);
}
	 flag++;
}
	
	
	
}
