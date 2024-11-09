#include <iostream>
#include <string>
using namespace std;

int main(){

string name[10];
int hours[10];
int maxhours=0;
int maxindex;
cout <<"Enter the names of ten students: ";
for(int i=0; i<10; i++){
    cin >>name[i];
}
for(int j=0; j<10; j++){
    cout <<"Enter the number of hours studied by " <<name[j] <<" : ";
    cin >>hours[j];
    if (hours[j] > maxhours) {
         maxhours = hours[j];
         maxindex = j;
    }
}
for(int k=0; k<10; k++){
    cout <<name[k] <<" studied " <<hours[k] <<" hours." <<endl;
}
cout <<name[maxindex] <<" has studied the maxximum number hours: " <<maxhours;

    return 0;
}