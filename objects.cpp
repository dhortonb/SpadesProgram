using namespace std;
#include <iostream>
#include <cerrno>

void die(const char *message)
{
    if (errno) {
        perror (message);
    } else {
        cout << "ERROR: " << message << endl;
    }
    exit(1);
}

typedef enum {
    A=1, 
    II=2, 
    III=3, 
    IV=4, 
    V=5, 
    VI=6, 
    VII=7, 
    VIII=8, 
    IX=9, 
    X=10, 
    J=11, 
    Q=12, 
    K=13
} Number;

typedef enum {
    HEARTS=0, DIAMONDS=1, CLUBS=2, SPADES=3
} Suit;

class Card
{
public:
    Number number;
    Suit suit;
    int index;

    Card (int nu = A, int su = SPADES, int i = 0)
    {
        if (nu < 1 || nu > 13) die ("Number out of bounds");
        if (su < 0 || su > 3) die ("Suit out of bounds");
        number = static_cast<Number>(nu);
        suit = static_cast<Suit>(su);
        index = i;
    }
};

int main()
{
    // Testing the card creation.
    Card c1(12, 2, 3);
    Card c2(3, 3, 49);
    Card c3(9,2, 21);
    cout << "Card 1: " << c1.number << "," << c1.suit << "," << c1.index << endl;
    cout << "Card 2: " << c2.number << "," << c2.suit << "," << c2.index << endl;
    cout << "Card 3: " << c3.number << "," << c3.suit << "," << c3.index << endl;
    return 0;
}
