# Coin game - a C++ coin game

Documented and developed by: Jeff Cate

<hr />

## How to Play:   

<br />

### ~~ Setup ~~

    1) A player has 3 coins
        1 quarter
        1 dime 
        1 nickel

### ~~ Round ~~

    1) Each round the player flips each coin once.
    2) If the coin lands heads up add the value to the player's balance.

### ~~ End of Game ~~

    1) The game is over when the player's balance is >= $1. 
    2) If the player's score = $1 exactly the player wins.
    3) If the player's score > $1 the player loses.


### To Do:

* [x] Fix rng

* [x] Class: program
    * [x] Fields
        * [x] Game game

* [x] Class: Game
    * [x] Fields
        * [x] const string heads
        * [x] const string tails
        * [x] Coin coin
            * [x] Quarter
            * [x] Dime
            * [x] Nickel
        * [x] double playerBalance
        * [x] bool gameOver
        * [x] bool isWin
    * [ ] Methods
        * [x] Game
            * [x] initialize player's balance
            * [x] initialize each coin
        * [x] void playGame
            * [x] bool playRound 
            * [x] bool checkGameOver
            * [x] void displayResults
        * [x] void playRound
            * [x] void flipEachCoin
            * [x] void evaluateCoinFlips
        * [x] flipEachCoin
        * [x] void evaluateCoinFlips
        * [x] bool checkIfGameOver
        * [x] bool checkForkWin
        * [x] void displayResults
        * [x] void displayRound

* [x] Class: Coin
    * [x] Fields
        * [x] bool heads
        * [x] string sideUp
        * [x] double value
    * [x] Methods
        * [x] Coin(double v) - randomly chose side up.
        * [x] bool getHeads()
        * [x] string getSideUp()
        * [x] double getValue()
        * [x] void toss - decides heads up
            * [x] set sideUp
            * [x] set heads
