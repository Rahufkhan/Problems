#include<iostream>
using namespace std;
class hero{
    int health;
    char level;
    char power;
    public:
    int gethealth(){
        return health;
    }
    void sethealth(int health){
        this->health=health;
    }
    char getlevel(){
        return level;
    }
    void setlevel(char level){
        this->level=level;
    }
    void setpower(int power){
        this->power=power;
    }
    char getpower(){
        return power;
    }
    hero(int health, int level){
        this->health=health;
        this->level=level;        
    }


};
int main(){
    /*hero obj(3,'a');
   // obj.sethealth(4);
   cout<<obj.gethealth();
   hero obj1=obj;
   cout<<obj1.getlevel();
    obj1.sethealth(6);

 */
hero *b=new hero(3,'a');
(*b).gethealth();


    
return 0;
}