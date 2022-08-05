// Sum Of Digits of Number

#include<iostream>
using namespace std;

int sum_digits(int n){
//     int sum = 0;
// while(n!=0){
//     int digit = n%10;
//     sum += digit;
//     n=n/10;
// }
if(n==0){
    return 0;
}
int remaining = n/10;
int last_digit = n%10;
return sum_digits(remaining)+last_digit;

}

int main(){
    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;
    int sum = sum_digits(n);
    cout<<"The result is:"<<sum;
    return 0;
}