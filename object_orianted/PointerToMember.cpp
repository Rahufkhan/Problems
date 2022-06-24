#include<iostream>
#include "Distance.h"
using namespace std;
int main(){
    Distance d1;
    Distance *dptr;
    dptr=&d1;
    dptr->setFeet(1);
    dptr->setInches(2.2);
    cout<<dptr->getFeet()<<" "<<dptr->getInches()<<endl;
    
}