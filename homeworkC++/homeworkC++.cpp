#include <iostream>
#include <thread> // for speed
#include <chrono>
using namespace std;


int main()
{
    /*Завдання 1. Написати програму, яка виводить на екран
лінію заданим символом, вертикальну або горизонтальну, причому лінія може виводитися швидко, нормально
і повільно. Спілкування з користувачем організувати
через меню*/

    int length;
    cout << "What length do you want? ";
    cin >> length;
    char symbol;
    cout << "What symbol do you want? ";
    cin >> symbol;
    int quik;
    cout << "How do you want characters to be entered(quikly - 1, normal - 2; slow - 3)? ";
    cin >> quik;
    int position;
    cout << "How do you want your line to be built(vertically - 1, horizontally - 2)? ";
    cin >> position;
    
    for (size_t i = 0; true; i++)
    {
        if (position > 2) {
            cout << "You can choose only (vertically - 1, horizontally - 2)? --> ";
            cin >> position;
        }       
        else {
            break;
        }
    }

    for (size_t i = 0; true; i++)
    {
        if (quik > 3) {
            cout << "You can choose only (quikly - 1, normal - 2; slow - 3) --> ";
            cin >> quik;
        }
        else {
            cout << "Okey, I will do it!!";
            break;
        }
    }cout << endl;

    int count = 0;

    // entered symbols (in this part of task I used chat GPT, because I don't now how change speed of entered symbols)
    int delay;
    if (quik == 1) delay = 50;      
    else if (quik == 2) delay = 300; 
    else delay = 700;                

    if (position == 1) { 
        while (count < length) {
            cout << symbol << endl;
            cout.flush();
            this_thread::sleep_for(chrono::milliseconds(delay));
            count++;
        }
    }
    else if (position == 2) { 
        while (count < length) {
            cout << symbol << flush;
            this_thread::sleep_for(chrono::milliseconds(delay));
            count++;
        }
        cout << endl;
    }

}