#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int RNG;
    string grade[9] = { "A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    RNG = rand()%9 + 1;
    switch (RNG)
    {
    case 1:
        cout << "You will get " << grade[0] << " in this 261102.";
        break;    
    case 2:
        cout << "You will get " << grade[1] << " in this 261102.";
        break;
    case 3:
        cout << "You will get " << grade[2] << " in this 261102.";
        break;
    case 4:
        cout << "You will get " << grade[3] << " in this 261102.";
        break;
    case 5:
        cout << "You will get " << grade[4] << " in this 261102.";
        break;
    case 6:
        cout << "You will get " << grade[5] << " in this 261102.";
        break;
    case 7:
        cout << "You will get " << grade[6] << " in this 261102.";
        break;
    case 8:
        cout << "You will get " << grade[7] << " in this 261102.";
        break;
    case 9:
        cout << "You will get " << grade[8] << " in this 261102.";
        break;
    }

}
