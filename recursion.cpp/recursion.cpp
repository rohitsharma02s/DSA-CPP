/* #include<iostream>
using namespace std;

//Trust the function
//prints:Hello n times 

void sayHello(int n){
    if(n==0){   //stopping case or BaseCase 
        return; //Stopped
    }
cout<<"Hello"<<" "<<n<<endl; //printed once already 

sayHello(n-1);  //n-1 more times
}



int main(){
    sayHello(10);
    return 0;
}
 */


// ============================================================ 
/* Write function to print:
Hello 1
Hello 2
Hello 3
Hello 4
.
.

Hello n-1
Hello n */
/* 
#include<iostream>
using namespace std;

void printHello(int n){
if(n==0){
    return;
}
printHello(n-1);  //first n-1 linesṇ
cout<<"Hello"<<" "<<n<<endl;

}

int main(){
    printHello(10);
    return 0;
}
 */




