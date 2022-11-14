#include <stdio.h>
#include <conio.h>
 
 int main()
{
    int array[10000],new_array[10000],length,i,j,k,temp,odd_count=0;
   
  
    printf("Enter the elements: ");
    scanf("%d", &length);

    for(i=0; i<length; i++)
    {
        scanf("%d",&array[i]);
        if(array[i]%2!=1)
         odd_count++;
    }
    for(i=0; i<length-1; i++)
    {
        for(j=0; j<length-i-1; j++)
        {
           if(array[j]>array[j+1])
           {
           	temp=array[j];
           	array[j]=array[j+1];
           	array[j+1]=temp;
		   }
        }
    }   
	
	k=0;
    j=length-odd_count;
	for(i=0; i<length; i++)
    {
        if(array[i]%2==0)
        {
        if(j<length)
        	  new_array[j++]=array[i];
	  
		}else{
		    
			if(k<length-odd_count)
        	  new_array[k++]=array[i];
	    }
    }
    
    printf("\nSorted array: ");
    for(i=0; i<length; i++)
    {
    	array[i]=new_array[i];
       printf("%d ",array[i]);
    }
 }