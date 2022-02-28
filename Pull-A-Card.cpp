/*==============================================================================================================
Class:          CIS 054
Assignment:     Lab Assignment 4-1
Name:           Jeffrey Leong
Date:           Feb 27, 2022

Purpose:        Use Functions and Switch to output desired results.
Input:          Nothing for Version 1.
Output:         Card selection and Card Suit.
===============================================================================================================*/



#include <iostream>
#include <cstdlib>

using namespace std;

// Function Declaration
int card_selection(int card);
// Determines the card drawn. 2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King, Ace

char card_suit(char suit);
// Determines the suit drawn. Spade, Heart, Diamond, Club

int main() {
  // Variables
  int card, card_number;
  char name, suit, answer, suit_letter;
  
  // Intro
  cout << "=========================\n";
  cout << "     I AM VERSION 1!     \n";
  cout << "=========================\n";

  // Srand
  srand(time(0));
  cout << "Let's pull a card for you!\n\n";

  // Do while Loop
  do {
    card_number = card_selection(card);
    suit_letter = card_suit(suit);
    cout << "This time we got " << card_number << suit_letter << endl;
    cout << "Wanna pull a card again? " << endl;
    cin >> answer;
  } while ((answer == 'y') || (answer == 'Y'));
  return 0;
}

// Function definition
int card_selection(int card)
{
  card = (rand() % 13)+1; // 2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King, Ace
  switch(card){
      case '11':
        cout << "J";
        break;
      case '12':
        cout << "Q";
        break;
      case '13':
        cout << "K";
        break;
      case '14':
        cout << "A";
        break;
      default:
        cout << "something wrong ";
    }
  return (card);
}

char card_suit(char suit)
{
  suit = suit = (rand() % 4)+1; // Spade, Heart, Diamond, Club
  switch(suit){
      case '1':
        cout << "S";
        break;
      case '2':
        cout << "H";
        break;
      case '3':
        cout << "D";
        break;
      case '4':
        cout << "C";
        break;
      default:
        cout << "something wrong ";
    }
  return (suit);
}

/* ==========================================================
Problems I had working on this assignment (and how I overcame these problems)
1. I have problems with the switch statement. The random card can be generated but there is something wrong with my switch statement. It doesn't go through the cases and outputs the default. 
2. 
Other Things I wish to share
1. I am not sure if we needed to use type-casting or not. My program didn't go through the switch statements properly.
2. I enjoyed your video lectures this week. I especially enjoyed the demo video you had. I was able to follow along.
========================================================== */