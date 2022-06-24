#include<iostream>
using namespace std;
class Distance{
    int iFeet;
    float fInches;
    public:
    void setFeet(int);
    int getFeet();
    void setInches(float);
    float getInches();
};
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
int main(){
    Distance obj;
    obj.setFeet(2);
    cout<<obj.getFeet()<<endl;
    obj.setInches(2.4);
    cout<<obj.getInches()<<endl;

}