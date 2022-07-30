#include<iostream>
using namespace std;
int maxVal(int arr[],int count){
    int max = INT16_MIN;
    for (int i = 0; i < count; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;

}
int minVal(int arr[],int count){

    int min = INT16_MAX;
    for (int i = 0; i < count; i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}


int main(){
    int numArr[5]={5,8,7,3,1};
    int count = 5;
    int max = maxVal(numArr,count);
    int min = minVal(numArr,count);
    cout<<"MaxValue of an Array is:"<<max<<endl;
    cout<<"MinValue of an Array is:"<<min<<endl;
    return 0;
}