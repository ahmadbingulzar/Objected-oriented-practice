#include <iostream>
using namespace std;
enum Suit
{
    clubs,
    diamonds,
    hearts,
    spades
};
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class Card
{
private:
    int number;
    Suit suit;

public:
    Card()
    {
    }

    Card(int n, Suit s) : number(n), suit(s)
    {
    }
    void display();
    bool isEqual(Card);
};

void Card::display()
{
    if (number >= 2 && number <= 10)
        cout << number << "of";
    else
        switch (number)
        {
        case jack:
            cout << "jack of";
            break;
        case queen:
            cout << "queen of";
            break;
        case king:
            cout << "king of";
            break;
        case ace:
            cout << "ace of ";
            break;
        }
    switch (suit)
    {
    case clubs:
        cout << "clubs";
        break;
    case diamonds:
        cout << "diamonds";
        break;
    case hearts:
        cout << "hearts";
        break;
    case spades:
        cout << "spades";
        break;
    }
}
bool Card::isEqual(Card c1)
{
    return (number == c1.number && suit == c1.suit) ? true : false;
}

int main()
{
    Card temp, chosen, prize;
    int position;

    Card c1(7, clubs);
    cout << "card 1 is the ";
    c1.display();
    cout << endl;
    Card c2(jack, hearts);
    cout << "card 2 is the ";
    c2.display();
    cout << endl;
    Card c3(ace, spades);
    cout << "card 3 is the ";
    c3.display();
    cout << endl;

    prize = c3;

    cout << "i am swapping card 1 and card 3 " << endl;
    temp = c3;
    c3 = c1;
    c1 = temp;

    cout << "i am swapping card 2 and card 3" << endl;
    temp = c3;
    c3 = c2;
    c2 = temp;

    cout << "i am swapping card 1 and card 2" << endl;
    temp = c2;
    c2 = c1;
    c1 = temp;

    cout << "Now where (1,2 or 3) is the ";
    prize.display();
    cout << "?";
    cin >> position;

    switch (position)
    {
    case 1:
        chosen = c1;
        break;
    case 2:
        chosen = c2;
        break;
    case 3:
        chosen = c3;
        break;
    }

    if (chosen.isEqual(prize))
        cout << "you win" << endl;
    else
        cout << "you lose";

    cout << "you choose the ";
    chosen.display();
    cout << endl;
    return 0;
}