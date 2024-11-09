#include <iostream>
using namespace std;

int main(){

int size;
cout <<"Enter the size of an Array: ";
cin >>size;
int arr[size];
for(int i=0; i<size; i++){
    cout <<"Enter an integer to store in Array: ";
    cin >>arr[i];
}
for(int j=0; j<size; j++){
    cout <<arr[j] <<endl;
}

    return 0;
}