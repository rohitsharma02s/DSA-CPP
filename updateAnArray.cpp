#include<iostream>
using namespace std;

void update(int arr[],int count){
    arr[2] = 40;
    cout<<"Printing after Update in Update Function"<<endl; 
    for (int i = 0; i < count; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;

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

    // When we pass array to a Function we pass its address not its Copy 
    // Thats why when we update it in Update function it got updated in main Function  
    update(arr,count);
    cout<<"Printing in Main"<<endl;
    for (int i = 0; i < count; i++)
    {
       cout<<arr[i]<<" ";
    }
    return 0;
}