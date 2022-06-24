#include "Distance.h"
#include<iostream>
using namespace std;                  
int main(){
    Distance d1;
    d1.setFeet(256);
    d1.setInches(2.2);
    char* p=(char *)&d1;
    *p=1;
    cout<<d1.getFeet()<<" "<<d1.getInches()<<endl;
    
}