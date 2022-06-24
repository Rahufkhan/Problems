class Distance{
    int iFeet;
    float fInches;
    public:
    void setFeet(int);
    int getFeet();
    void setInches(float);
    float getInches();
    Distance add(Distance);
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
