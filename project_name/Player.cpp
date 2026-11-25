#include <list>
#include <iostream>
using namespace std;
#include <string>

class Carte;
class Human;

class Player : public Human {
    private :
        int money;
        int mise_actu; //mise actuelle
    public :
        void hit(){
           add_to_personal_deck();

        };
        void stand(){
            ;
        };
        void double_mise(){
            money=money-mise_actu;
            mise_actu=mise_actu*2;
        };
        int get_money(){
            return money;
        }
        int get_mise_actu(){
            return mise_actu;
        }
        void sub_money(int amount){
            money=money-amount;
        }
        void add_mise_actu(int amount){
            mise_actu=mise_actu+amount;
        }

        

}



int main(){



    return 0;
}