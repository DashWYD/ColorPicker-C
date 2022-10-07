#include <iostream>
#include <time.h>
using namespace std;

int main(){
    srand( time(NULL));
    string colors[5] = {"orange", "red", "green", "purple", "pink"};

    int colorPicker = rand() % 5;
    
    cout << colors[colorPicker] << endl;
    system("pause");
}