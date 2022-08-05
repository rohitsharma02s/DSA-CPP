// Program :1
// Sum of numbers from 1 to n 
//1+2+3........+(n-1)+n
#include<iostream>
using namespace std;

int sumOfN(int n){
if(n==0){
    return 0;
}
int sum=sumOfN(n-1);
 return sum+n;

}

int main(){
    int n;
    cout<<"Enter The Number:"<<endl;
    cin>>n;
    int sumOfNum=sumOfN(n);
    cout<<sumOfNum<<endl;
    return 0;
}