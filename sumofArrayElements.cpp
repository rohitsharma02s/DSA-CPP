#include<iostream>
using namespace std;

int sumofElements(int arr[],int count){
int sum = 0;
for (int i = 0; i < count; i++)
{
   sum=arr[i]+sum;
}
return sum;
}
int main(){
    int count;
    cout<<"Enter The no of elements in an array"<<endl;
    cin>>count;
    int arr[50];
    cout<<"Enter the elements of an array"<<endl;
    for (int i = 0; i < count; i++)
    {
       
        cin>>arr[i];
    }

   int sum = sumofElements(arr,count);
   cout<<"Sum of Array Elements is :"<<sum;
    
    return 0;
}