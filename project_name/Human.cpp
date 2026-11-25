#include <list>
#include <iostream>
using namespace std;
#include <string>

class Carte;

class Human {
    private :
        static list<Carte> global_deck;  //le tas de carte duquel le croupier va piocher pour distribuer aux joueur
        list<Carte> personal_deck;      //les cartes de chaque joueur
    public :
        virtual void hit()=0;
        virtual void stand()=0;
        
        list<Carte> get_global_deck () {
            return global_deck;
        }
        void add_to_global_deck (Carte card) {
            global_deck.push_back(card);
        }
        void sub_to_global_deck () {
            global_deck.pop_back();
        }
         list<Carte> get_personal_deck () {
            return personal_deck;
        }
        void add_to_personal_deck (Carte card) {
            personal_deck.push_back(card);
        }

}



int main(){



    return 0;
}