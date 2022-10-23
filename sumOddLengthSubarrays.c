#include <stdio.h>
int sumOddLengthSubarrays(int arr[],int size) {
	
        int sum=0;
        int i,j;
    
        for( i=0;i<size;i++){
            int x=1;
            int tmp=0;
            for(j=i;j<size;j++){
                tmp+=arr[j];
                if(x%2==1){
                    sum+=tmp;
                }
                x++;
                
            }
        }
        return sum;
}

int main(){
	int arr[]={1,4,2,5,3};
	int size=sizeof(arr)/sizeof(int);
	
	printf("%d",sumOddLengthSubarrays(arr,size));
}

