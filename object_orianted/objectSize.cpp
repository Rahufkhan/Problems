#include<iostream>
using namespace std;
struct A{
    char a;
    int b;
    float c;
};
class B{
    char a;
    int b;
    float c;
};
int main(){
    cout<<sizeof(A)<<endl<<sizeof(B)<<endl;

}