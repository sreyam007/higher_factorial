#include <iostream>
using namespace std;

int main()
{
	int arr[100000],mul[100000], adder, rem, rem1;
    int arr_len=0,i,k,n=2,a,fact_value;
    
    cin>>fact_value;        //input of the factorial number
    
    if(fact_value<=1)
        cout<<1;
    else
    {
    	arr[0]=1;
    	for(a=2;a<=fact_value;a++)
        {
            rem=0;adder=0;k=0,rem1=0;
            for(i=arr_len;i>=0;i--)
        	{
        	    rem=((arr[i]*n)+adder)%10;
        	    adder=((arr[i]*n)+adder)/10;
        	    if(i==0)
        	    {
        	        mul[k]=rem;

        	        if(adder!=0)               // array loc0 division
        	        {
        	           while(adder>0)
        	           {
        	                rem1=adder%10;
        	                adder=adder/10;
        	                mul[k+1]=rem1;
        	                k++;
        	           }
        	        }
        	    }
        	    else
        	    {
        	        mul[k]=rem;
        	        k++;
        	    }

        	}
        	for(i=0;i<=k;i++)
        	    arr[i]=mul[k-i]; //array reverse
        	n++;
        	arr_len=k;
        }
    	for(i=k;i>=0;i--)
        	cout<<mul[i];
    }
    return 0;
}
