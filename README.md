# CPP-4-1
 CIS-054

Description
Think I already told you random numbers are very important for games? 

Let's write a little game. The game will pull a card from a deck of 52 regular playing cards (with suits: spade, heart, diamond, club; and values: A, 2, 3,...9, T, J, Q, K). That is, each card is represented by two characters: 

2C (represents Two of Clubs)
AS (represents Ace of Spades)
TD (represents 10 of Diamonds) 
* Note T == 10. 

The program will allow the user to repeat the game.

Version 1 (Max 40 points)
Tell the user what card was pulled for them.

Version 2 (Bonus +20 points)
Pull one card for the user and one card for you. Compare and see who won. The order of comparison is as follows (value first then suit):

Value: A > K > Q > J > T > 9 .... > 2
Suit: Spade > Heart > Diamond > Club
For example:

QS > QH
AC > QS
TD > 8H
Please finish version 1 before attempting version 2. It serves at least two purposes:

It helps you to get v2 working faster by making sure the important part works first
If by the time you submit this lab version 2 doesn't work, you can submit v1 (please do not submit a semi-working v2 and expect to get a grade better than the best v1).
Demo
===========================
      I AM VERSION 1!
===========================
Let's pull a card for you!

This time we got KS
Wanna pull a card again?
y
This time we got 2S
Wanna pull a card again?
y
This time we got JH
Wanna pull a card again?
n

===========================
      I AM VERSION 2!
===========================
Let's pull a card for you and me!

You got KS
I got 3S
You won!!

Wanna pull a card again?
y

-----

You got 7D
I got TS
I won!!

Wanna pull a card again?
n
Requirements
Use a function to randomly pick the value of the card
Use a function to randomly pick the suit of the card 
Use a switch statement in both of these two functions
Make sure the cards are picked "truly randomly"
Great programming style.
Organized code = organized thoughts:
Proper use of indents
Proper sectioning of code
Proper documentation and comments (and/or your thought process)