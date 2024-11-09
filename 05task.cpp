#include <iostream>
using namespace std;

int main(){

int arr[10];
int pcount, ncount, oddcount, evencount, zcount;
cout <<"Please enter ten integers:\n";
for(int i=0; i<10; i++){
    cin >>arr[i];
}
for(int j=0; j<10; j++){
    if(arr[j]==0)
        zcount++;
    if(arr[j]>0)
        pcount++;
    if(arr[j]<0)
        ncount++;
    if(arr[j]%2==0)
        evencount++;
    if(arr[j]%2==1)
        oddcount++;
}
cout <<"There are " <<zcount <<" zero's.\n";
cout <<"There are " <<pcount <<" positive integers.\n";
cout <<"There are " <<ncount <<" negative integers.\n";
cout <<"There are " <<evencount <<" even integers.\n";
cout <<"There are " <<oddcount <<" odd integers";

    return 0;
}