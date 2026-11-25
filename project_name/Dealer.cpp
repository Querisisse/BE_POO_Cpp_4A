#include <list>
#include <iostream>
using namespace std;
#include <string>

class Carte;
class Human;

class Dealer : public Human {
    public :
        void hit(){
           add_to_personal_deck();

        }
        void stand(){
            ;
        }
        void gameplay(int score){
            if (score<17){
                hit();
            }
            else{
                stand();
            }
        }

        

}



int main(){



    return 0;
}