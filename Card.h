#ifndef CARD_H
#define CARD_H
#include <iostream>
enum Suit{CLUBS=0, DIAMONDS=1, HEARTS=2, SPADES=3};
using namespace std;


class Card
{
    public:
        Card();
        Card(int rank,Suit  suite);
        Card(string s);
    string toString();
    friend ostream &operator << (ostream &out,Card c);
    bool isString=false;


    protected:
    private:
        int rank;
        Suit suit;
        string s;
};

#endif // CARD_H
