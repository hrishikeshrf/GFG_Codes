#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int longarr(int arr[],int size){
    
    int res=1;
    for(int i=0;i<size;i++){
        int temp=1;
        for(int j=i+1;j<size;j++){
            if(arr[j-1]%2==0 && arr[j]%2!=0){
                temp++;
            }
            else if(arr[j-1]%2!=0 && arr[j]%2==0){
                temp++;
            }
            else
                break;            
        }
        res=max(res,temp);
    }
    return res;

    
}

int main(){
    
    int n;
    cout<<"Enter no of elements in array :\n";
    cin>>n;
    int arr[n];

    cout<<"enter elements in array: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array: \n";
    disp(arr,n);
    cout<<"longest ever odd subarray Length is "<<longarr(arr,n);
    return 0;

}