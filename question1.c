#include <iostream>

using namespace std;

int main(){

    int entry;
    int contNegative;

    do{

        cin >> entry;
        if(entry < 0){
            contNegative++;
        }


    }while(entry > 0);

    cout << contNegative;



}
