#include <iostream>
using namespace std;
// Bool for when the game is over
bool gameover;

// Defining functions
void draw();
void input();
void logic();
void setup();
//Setting screen size
const int width = 20;
const int height = 20;
//Setting variables for player, food position and score
int x, y, fruitx, fruity, score;
// setting direction enum
enum Direction {stop = 0, up, left, down, right};
Direction dir;


// Idk Main shit im a python programmer
int main() {
    // Running setup
    setup();
    while (!gameover) {
        draw();
        input();
        logic();
    }
}

// Setting defining core functions
void setup() {
    // Telling program that player isnt dead
    gameover = false;
    // Telling program that player isnt moving
    dir = stop;
    // Telling program snake location
    x = width / 2;
    y = height / 2;
    // Telling program fruit location
    fruitx = rand() % width;
    fruity = rand() % height;
}
void draw() {
    // Clearing console window to start playing
    system("clear");
    // drawing walls
    for (int i = 0; i < width; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "#";
                
            else
                cout << " ";

            if (j == width-1)
                cout << "#";
            
        }
        cout << endl;
    }

    for (int i = 0; i < width; i++)
        cout << "#";
    
    cout << endl;
}
void input() {

}
void logic() {


}