#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;

    public:
    
    // Default Constructor
    Hero(){
        cout<<"Constructor is called"<<endl;
    }

    // Paramterized Constructor
    Hero(int health){
        cout<<"this->"<<this<<endl;
        this->health = health;
    }
};

int main(){
    Hero h1(5);
    cout<<"Address of H1 : "<<&h1<<endl;

    Hero *h2 = new Hero(11);
    cout<<"Address of H2 : "<<h2<<endl;

}