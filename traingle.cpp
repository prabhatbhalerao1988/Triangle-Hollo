#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    int a, b, c;
    
    a = 1; // row
    while(a <= 10)
    {
        b = 10; // space
        while(b >= a)
        {
            cout << " ";
            b--;
        }    

        c = 1; // col
        while(c <= a)
        {
            if(a == 1 || a == 10 || c == 1 || c == a)
            {
             
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // red
                cout << "* ";
                Sleep(250); // milliseconds
            }
            else
            {
               
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // Black
                cout << "  ";
            }
            c++;
        }
        cout << endl;
        a++;
    }

 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); 
    
    return 0;
}

