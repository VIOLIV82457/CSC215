#include <iostream>
#include <string>

using namespace std;

// Function Prototypes
//Gets name for the code. I don't fully Understand the need for the void, but it won't work without it
string getPlayerName();
void showIntro(string name);
int getChoice(bool handUsed, int forwardCount);
//movement options
int handleMoveForward(int forwardCount);
int handleStay(int stayCount);
//ending, won't work without for some reason?
void showEnding(string name);



int main()
{
    //Choice 3 goes away after use
    bool handUsed = false;
    
    string playerName = getPlayerName();
    showIntro(playerName);
    //Initial movement counter. Starting point
    //Tracks the movement and loop
    int forwardCount = 0;
    int stayCount = 0;
  
    bool gameOver = false;
    
    
    // Exclamation mark means "Not"
   while (!gameOver)
{
    int choice = getChoice(handUsed, forwardCount);

    if (choice == 1)
    {
        if (forwardCount < 4)
        {
            forwardCount = handleMoveForward(forwardCount);
        }
        else
        {
            cout << "You've already hit the wall.\n";
        }
    }
    else if (choice == 2)
{
    stayCount = handleStay(stayCount);

    if (stayCount >= 6)
    {
        showEnding(playerName);
        gameOver = true;
    }
}
    else if (choice == 3 && !handUsed)
    {
        cout << "You wave your hand into the darkness...\n";
        handUsed = true;
    }
}

    return 0;
}

// Gets player's name (returns string)
string getPlayerName()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    return name;
}

// Takes string parameter
void showIntro(string name)
{
    cout << "\nYou are in a dark, musty room, " << name << ".\n";
    cout << "You can barely see your own hand in front of you.\n";
    cout << "You feel a cold, hard floor under you.\n\n";
}

// Returns int (user choice)
int getChoice(bool handUsed, int forwardCount)
{
    int choice;

    // Only show Move Forward if under 4 moves
    if (forwardCount < 4)
    {
        cout << "1. Move Forward\n";
    }

    cout << "2. Stay where you are\n";

    if (!handUsed)
    {
        cout << "3. Put your hand out\n";
    }

    cout << "Choice: ";
    cin >> choice;
    cout << endl;

    return choice;
}

// Takes int, returns int
int handleMoveForward(int forwardCount)
{
    forwardCount++;

    if (forwardCount < 4)
    {
        cout << "You move forward. There's nothing stopping you.\n";

        if (forwardCount == 1)
            cout << "Interesting...\n";
        else if (forwardCount == 2)
            cout << "You're feeling bold now, huh?\n";
        else if (forwardCount == 3)
            cout << "Wow. Still nothing. You're really committed.\n";
         else if (forwardCount == 4)
            cout << "BAM...You ran into a wal...ow.\n";

        cout << endl;
    }

    return forwardCount;
}

// Takes int, returns int
int handleStay(int stayCount)
{
    stayCount++;

    cout << "You sit in the darkness on the cold floor.\n";

    if (stayCount == 1)
        cout << "You swear it's been a while.\n";
    else if (stayCount == 2)
        cout << "You don't know when you last ate.\n";
    else if (stayCount == 3)
        cout << "You have started to wonder if you can eat your own hand.\n";
    else if (stayCount == 4)
        cout << "You feel dehydrated. Does drinking your tears provide hydration?\n";
    else if (stayCount == 5)
    cout << "It's cold... you don't know how much longer until you freeze over.\n";

    cout << endl;

    return stayCount;
}

// Takes string parameter
void showEnding(string name)
{
    cout << "\nSuddenly, a bright light appears from the side.\n";
    cout << "Then a brighter light flashes on. It's blinding.\n\n";

    cout << "When your vision returns, you can finally see where you are:\n";
    cout << "Your bedroom.\n\n";

    cout << "Empty energy drink cans cover your desk.\n";
    cout << "Dirty clothes pile across the room.\n";
    cout << "Your AC unit is on full blast.\n";
    cout << "A half-eaten granola bar is flattened beneath you.\n\n";

    cout << "Your mom stands in the doorway, disgusted.\n";
    cout << "\"This is a mess, pick up your damn room already.\n";
    cout << "She's not your cleaning lady for heaven's sake.\"\n\n";

    cout << "You should be ashamed, " << name << ". The END.\n";
}