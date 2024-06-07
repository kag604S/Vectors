#include <iostream>
#include "vector.h"
using namespace std;

void menu(void){
    cout<<"1.Add vector to program\n"
          "2.Subtract vectors\n"
          "3.multiply vectors\n"
          "4.add vectors\n"
          "5.multiply by scalar\n"
          "6 show all vectors\n";

}

int main() {
    int i = 1;
    int x;
    int y;
    int ch;
    int count;
    string name;
    int l;

    cout<<"Declare how many vectors you want";
    cin >> count;

    for(l=0; l=count ; l++ ){
        int k=0;
        myVector k ;
        k++;
    }


    do {

        menu();
        cin >> ch;

        switch (ch) {

            case 1: {

                cout << "Enter x end of vector";
                cin >> x;

                cout << "Enter y end of vector";
                cin >> y;

                name=i;
                i++;

                break;
            }

            case 6: {



                break;
            }




        }


    } while (ch != 0);

    return 0;
}