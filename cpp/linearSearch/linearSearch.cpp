// Add your code here
#include<iostream>
using namespace std;
int ls(int arra[10], int value){
    for(int i=0; i<=10; i++){
        if(arra[i]==value){
            return i;
        }
    }
}
int main(){
    int arr[10]={11, 22, 33, 44, 55, 66, 77, 88, 99, 100}, user_val=0;
    cout<<"Elements in array are : "<<endl<<"11, 22, 33, 44, 55, 66, 77, 88, 99, 100";
    cout<<"Enter the number to check if present in array"<<endl;
    cin>>user_val;
    int temp = ls(arr, user_val);
    if(temp<9 && temp>0){
        cout<<"Position : "<<temp;
    }
    else{
        cout<<"Not Found";
    }
}
