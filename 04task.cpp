#include <iostream>
using namespace std;

int main(){

int arr[10];
cout <<"Please enter ten integers:\n";
for(int i=0; i<10; i++){
    cin >>arr[i];
}
cout <<"\n";
for(int j=9; j>=0; j--){
    cout <<arr[j] <<"\t";
}

    return 0;
}