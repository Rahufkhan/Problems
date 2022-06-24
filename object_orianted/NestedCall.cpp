#include<iostream>
using namespace std;

class A{
    int x;
    public:
    void setx(int);
    void setxindirect(int);
    int getx();
};
void A::setx(int p){
    x=p;
}
void A::setxindirect(int q){
    setx(q);
}
int A::getx(){
    return x;
}
int main(){
    A A1;
    A1.setxindirect(1);
    cout<<A1.getx();
}