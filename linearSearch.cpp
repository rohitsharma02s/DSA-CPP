#include<iostream>
using namespace std;
bool linearSearch(int arr[], int count,int element){

for (int i = 0; i < count; i++)
{
    if(arr[i]==element){
        cout<<"Element is Present at Location :"<<i<<endl;
        return true;
    }
   
}
return false;
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
    
    int element;
    cout<<"Enter the element for comparison"<<endl;
    cin>>element;
    bool result = linearSearch(arr,count,element);
    cout<<result;

    return 0;
}