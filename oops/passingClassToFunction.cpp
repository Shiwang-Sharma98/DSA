#include<iostream>
using namespace std;

class player {
private:
    int age;
    int health;
    int score;
    bool alive;

public:

    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    bool getalive(){
        return alive;
    }

    void sethealth(int h){
        this->health=h;
    }
    void setage(int a){
        this->age=a;
    }
    void setscore(int s){
        this->score=s;
    }
    void setalive(bool al){
        this->alive=al;
    }
};

int addscore(player a,player b){
    return a.getscore()+b.getscore();
}

// return a class

player GetMaxScorePlayer(player a,player b){
    if(a.getscore()>b.getscore()){
        return a;
    }
    else return b;
}


int main(){
    player harsh; // compile time , static allocation
    player ishan;

    player *urvi = new player; // run time , dynamic allocation
    player urviobject = *urvi; // *(urvi).sethealth(499) will also work
  // or urvi->sethealth(45) will also work         

    harsh.setscore(20);
    harsh.setage(5);
    harsh.sethealth(200);
    harsh.setalive(true);

    ishan.setscore(200);
    ishan.setage(50);
    ishan.sethealth(1200);
    ishan.setalive(true);

    urvi->setscore(43);
    urviobject.setage(50);
    urviobject.sethealth(1200);
    urviobject.setalive(true);

    cout<<urvi->getscore();
    cout<<addscore(harsh,ishan)<<endl;
    player shi = GetMaxScorePlayer(harsh,ishan);
    cout<<shi.getscore();

    return 0;
}