using namespace std;
#include<bits/stdc++.h>
int binary_search(int arr[],int no_of_element,int n){
    int i=0,j=no_of_element-1;
    int k;
    while (i!=j)    
    {
    int top=arr[j];
    int bottom=arr[i];
    int middle=arr[(i+j)/2];
        if(middle==n){
             k=(i+j)/2;
            i=j;
            
        }
        else if(middle>n){
            j=(i+j)/2;
        }
        else if(middle<n){
            i=(i+j)/2;

        }

    }
    
    return k;

}

int main(){
int arr[12]={2,3,4,5,9,22,35,36,66,77,84,366};
int n=binary_search(arr,12,77);
printf("%d",n);




return 0;
}