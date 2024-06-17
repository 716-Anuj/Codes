#include<bits/stdc++.h>
// #include"hero.cpp"
using namespace std;

class Hero{

    // properties
    public:
    char level;

    private:
    int health;

    public:
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char l){
        level = l;
    }
};

int main(){


    // Dynamic allocation
    Hero *h2 = new Hero;

    // Use of getter
    cout<<"Anuj health "<<(*h2).getHealth()<<endl;
    cout<<"Anuj level "<<h2->getLevel()<<endl;

    // Use of Setter
    h2->setLevel('A');
    h2->setHealth(30);

    cout<<"Anuj health "<<(*h2).getHealth()<<endl;
    cout<<"Anuj level "<<h2->getLevel()<<endl;


    // Static allocation
    Hero h1;

    // Use of getter
    cout<<"Ramesh health : "<<h1.getHealth()<<endl;

    // Use of setter
    h1.setHealth(70);

    cout<<"Ramesh health : "<<h1.getHealth()<<endl;
    
}
