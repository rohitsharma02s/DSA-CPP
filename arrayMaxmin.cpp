#include<iostream>
using namespace std;
int maxVal(int arr[],int count){
    int maximum = INT16_MIN;
    for (int i = 0; i < count; i++)
    {
        /* if(arr[i]>max){
            max=arr[i];
        } */

        // max funcrion return maximum of two 
        maximum = max(maximum, arr[i]);
    }
    return maximum;

}
int minVal(int arr[],int count){

    int minimum = INT16_MAX;
    for (int i = 0; i < count; i++)
    {
        /* if(arr[i]<min){
            min=arr[i];
        } */

        minimum = min(minimum,arr[i]);
    }
    return minimum;
}

int main(){
    int count;
    cout<<"Enter The no of Elements in an Array"<<endl;
    cin>>count;
    int numArr[500];
    cout<<"Enter The value of Array Elements"<<endl;
    for (int i = 0; i < count; i++)
    {
       
        cin>>numArr[i];
    }
    
    int max = maxVal(numArr,count);
    int min = minVal(numArr,count);
    cout<<"MaxValue of an Array is:"<<max<<endl;
    cout<<"MinValue of an Array is:"<<min<<endl;
    return 0;
}