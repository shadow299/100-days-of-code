#include <iostream>
using namespace std;


void Reverse(int arr[], int length){
    int i;
    int j;
    for(i=0, j=length-1; i<j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}


int main(){
    int length = 9;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    Reverse(arr, length);
    for(auto x:arr){
        cout<<x<<endl;
    }
    return 0;
}