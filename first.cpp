#include<iostream>
using namespace std;
class Hero{
    public:
    int a;
    string str;
    char ch;
};
int main(){
    Hero h1;
    h1.a=67;
    h1.str="hskdfh";
    cout<<sizeof(Hero);
}
