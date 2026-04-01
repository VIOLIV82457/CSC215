#include <iostream>
using namespace std;

// Function to display stats
void displayStats(int health, double speed, int strength, int defense, int points) {
    cout << "\n--- Character Stats ---\n";
    cout << "Health: " << health << endl;
    cout << "Speed: " << speed << endl;
    cout << "Strength: " << strength << endl;
    cout << "Defense: " << defense << endl;
    cout << "Upgrade Points: " << points << endl;
}

// Upgrade functions (using pointers)
void upgradeHealth(int* health, int* points) {
    int cost = 2;
    if (*points >= cost) {
        cout << "\n[Upgrade] +25 Health (-2 points)\n";
        *health += 25;
        *points -= cost;
    } else {
        cout << "\nNot enough points!\n";
    }
}

void boostSpeed(double* speed, int* points) {
    int cost = 3;
    if (*points >= cost) {
        cout << "\n[Upgrade] +1.2 Speed (-3 points)\n";
        *speed += 1.2;
        *points -= cost;
    } else {
        cout << "\nNot enough points!\n";
    }
}

void increaseStrength(int* strength, int* points) {
    int cost = 2;
    if (*points >= cost) {
        cout << "\n[Upgrade] +10 Strength (-2 points)\n";
        *strength += 10;
        *points -= cost;
    } else {
        cout << "\nNot enough points!\n";
    }
}

void increaseDefense(int* defense, int* points) {
    int cost = 2;
    if (*points >= cost) {
        cout << "\n[Upgrade] +8 Defense (-2 points)\n";
        *defense += 8;
        *points -= cost;
    } else {
        cout << "\nNot enough points!\n";
    }
}

// Special combo upgrade
void powerBoost(int* health, int* strength, int* points) {
    int cost = 5;
    if (*points >= cost) {
        cout << "\n[Special Upgrade] Health +15 & Strength +15 (-5 points)\n";
        *health += 15;
        *strength += 15;
        *points -= cost;
    } else {
        cout << "\nNot enough points!\n";
    }
}

int main() {
    // Initial stats
    int health = 100;
    double speed = 5.0;
    int strength = 20;
    int defense = 15;
    int points = 10; // NEW: starting upgrade points

    // Pointers
    int* healthPtr = &health;
    double* speedPtr = &speed;
    int* strengthPtr = &strength;
    int* defensePtr = &defense;
    int* pointsPtr = &points;

    int choice;

    cout << "=== RPG Character Upgrade Simulator ===\n";

    do {
        displayStats(health, speed, strength, defense, points);

        cout << "\nChoose an upgrade:\n";
        cout << "1. Increase Health (Cost: 2)\n";
        cout << "2. Boost Speed (Cost: 3)\n";
        cout << "3. Increase Strength (Cost: 2)\n";
        cout << "4. Increase Defense (Cost: 2)\n";
        cout << "5. Power Boost (Cost: 5)\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                upgradeHealth(healthPtr, pointsPtr);
                break;
            case 2:
                boostSpeed(speedPtr, pointsPtr);
                break;
            case 3:
                increaseStrength(strengthPtr, pointsPtr);
                break;
            case 4:
                increaseDefense(defensePtr, pointsPtr);
                break;
            case 5:
                powerBoost(healthPtr, strengthPtr, pointsPtr);
                break;
            case 6:
                cout << "\nExiting program...\n";
                break;
            default:
                cout << "\nInvalid choice. Try again.\n";
        }

    } while (choice != 6);

    cout << "\nFinal Stats:\n";
    displayStats(health, speed, strength, defense, points);

    return 0;
}