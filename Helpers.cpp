#include <windows.h>
#include <iostream>

// Describes how to use the program
void howToUse() {
    std::cout << "Enter the floor you neede when prompted.\n";
    std::cout << "If you need more floors, hit 'ctrl + c', and enter when prompted. Repeate up to 3 times.\n\n";}

// Prints user input error message
void userError() {std::cout << "Enter either a floor number (1 - 5) or 'quit'.\n";}

// Closes the door
void closeDoor(int sec = 2) {
    if(sec = 2) {
        std::cout << "Closing doors...\n";
        Sleep(2);}
    else {
        std::cout << "Closing doors in " << sec << " seconds...";
        Sleep(sec);}}

// Opens the door
void openDoor(int currentFloor) {
    std::cout << "Arrived at floor " << currentFloor << "; Opening doors...";
    Sleep(4);}

// Ensures the number provided is within a valid range (1 - 5 inclusive)
bool isValidFloor(int floorNum) {
    if(floorNum < 1 || floorNum > 5) {
        return false;}
    else return true;}

// Ensures that the word provided is the word 'quit' (not case sensitive)
bool isValidWord(std::string word) {
    if((char)toLower(word) != "quit") {

    }
}