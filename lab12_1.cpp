
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    string w;
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9;
    
    if (x == 0)
    {
        w = "A";
    }else if (x == 1)
    {
        w = "B+";
    }else if (x == 2)
    {
        w = "B";
    }else if (x == 3)
    {
        w = "C+";
    }else if (x == 4)
    {
        w = "C";
    }else if (x == 5)
    {
        w = "D+";
    }else if (x == 6)
    {
        w = "D";
    }else if (x == 7)
    {
        w = "F";
    }else
    {
        w = "W";
    }
    cout << "You will get "<< w << " in this 261102.";
  return 0;

}
    






