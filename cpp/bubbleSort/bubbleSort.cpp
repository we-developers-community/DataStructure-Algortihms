// Add your code here
#include<iostream>
using namespace std;

int main(){
    int arr[10]={9, 8, 7, 6, 5, 4, 3, 2, 1, 0}, temp=0, hold=0, etyp=0;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0; i<10; i++)
        cout<<arr[i]<<endl;
}
