#include <iostream>
using namespace std;

int main(){

int arr[7];
int count=0;
cout <<"Enter seven integers:\n";
for(int i=0; i<7; i++){
    cin >>arr[i];
}
for(int j=0; j<7; j++){
    if(arr[j]%5 == 0){
        count++;
    }
}
if(count == 0){
    cout <<"No number is divisible by 5.";
}
else if(count == 1){
    cout <<"There is only " <<count <<" integer divisible by 5.";
}
else{
    cout <<"There are " <<count <<" integers that are divisible by 5.";
}
    return 0;
}