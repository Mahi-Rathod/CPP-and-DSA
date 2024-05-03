#include<iostream>
using namespace std;
int main(){
    //Array initialization
    int arr[] ={10,20,30};
    int brr[5]={10,50};
    int crr[5]={0};

    //Acessing Array Element 
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[5]<<endl; //give random value 

    //size of Array
    int size = sizeof(arr);
    cout<<"Size of Array "<<size<<endl;

    //length of Array
    int len = sizeof(arr) / sizeof(arr[0]);
    cout<<"length of Array "<< len<<endl;

    //Iterating Over the Array
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<""<<endl;

    //Range base Traversal
    for(int i:brr){
        cout<<i<<" ";
    }
    cout<<" "<<endl;
    //Modify the Array element using for loop
    for(int i=0;i<len;i++){
        arr[i] *= arr[i];
    }
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<" "<<endl;

    for(int &x: arr){
        x +=100;
    }
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<" "<<endl;
    return 0;    
}