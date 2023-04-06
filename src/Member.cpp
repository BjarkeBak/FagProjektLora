#include <Member.h>
using namespace std;

Member::Member(char * ID, char * name){
    this->ID = ID;
    this->name = name;
}

void Member::ChangeLocation(char x, char y){
    this->x = x;
    this->y = y;
}

char Member::getXLocation(){
    return this->x;
}

char Member::getYLocation(){
    return this->y;
}

char * Member::getID(){
    return this->ID;
}

char * Member::getName(){
    return this->name;
}