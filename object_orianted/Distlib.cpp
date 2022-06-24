#include<iostream>
#include"Distance.h"
using namespace std;
void Distance::setFeet(int x){
    iFeet=x;
}
int Distance::getFeet(){
    return iFeet;
}
void Distance::setInches(float y){
    fInches=y;
}
float Distance::getInches(){
    return fInches;
}
Distance Distance::add(Distance dd){
    Distance temp;
    temp.iFeet=iFeet+dd.iFeet;
    temp.fInches=fInches+dd.fInches;
    return temp;
}
int main(){
    Distance d1,d2,d3;
    d1.setFeet(1);
    d1.setInches(1.1);
    d2.setFeet(2);
    d2.setInches(2.2);
    d3=d1.add(d2);
    cout<<d3.getFeet()<<",_"<<d3.getInches()<<"''\n";
    
}