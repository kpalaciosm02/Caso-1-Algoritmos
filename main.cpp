#include <iostream>
#include <string>
using namespace std;

void slow_triplets(int trip1[3], int trip2[3]){
    for (int i = 0;  i < 3; i++){
        
    }
}

void fast_triplets(int trip1[3],  int trip2[3]){
    //trip1 represents triplet a in the hackerrank explanation
    //trip2 represents triplet a in the hackerrank explanation 
    for (int i=0; i < 3; i++){
        int amount1 = trip1[i];
        int amount2 = trip2[i];
        
        if (amount1 > amount2){
            cout << "For the elements from " << i << " index, Alice recives a point." << endl;
        }
        else if (amount1 < amount2){
            cout << "For the elements from " << i << " index, Bob recives a point." << endl;
        }
        else if (amount1 == amount2){
            cout << "The elements from the " << i <<  " index are equals. There is no point for anyone." << endl;
        }
    }
    cout << endl;
}


void time_conversion_1(string hour){
    //first try of time conversion
    int length = hour.length();
    if (hour[length-1] == 'M' && hour[length-2] == 'P'){
        cout << "Si hay PM" << endl;
        if (hour[0] == '0' && hour[1] == '1'){
            string tmp = hour.substr(3,5);
            cout << "13:" << tmp << endl;
        }
        else if (hour[0] == '0' && hour[1] == '2'){
            string tmp = hour.substr(3,5);
            cout << "14:" << tmp << endl;
        }
        else if (hour[0] == '0' && hour[1] == '3'){
            string tmp = hour.substr(3,5);
            cout << "15:" << tmp << endl;
        }
        else if (hour[0] == '0' && hour[1] == '4'){
            string tmp = hour.substr(3,5);
            cout << "16:" << tmp << endl;
        }
        else if (hour[0] == '0' && hour[1] == '5'){
            string tmp = hour.substr(3,5);
            cout << "17:" << tmp << endl;
        }
        else if (hour[0] == '0' && hour[1] == '6'){
            string tmp = hour.substr(3,5);
            cout << "18:" << tmp << endl;
        }
        else if (hour[0] == '0' && hour[1] == '7'){
            string tmp = hour.substr(3,5);
            cout << "19:" << tmp << endl;
        }
        else if (hour[0] == '0' && hour[1] == '8'){
            string tmp = hour.substr(3,5);
            cout << "20:" << tmp << endl;
        }
        else if (hour[0] == '0' && hour[1] == '9'){
            string tmp = hour.substr(3,5);
            cout << "21:" << tmp << endl;
        }
        else if (hour[0] == '1' && hour[1] == '0'){
            string tmp = hour.substr(3,5);
            cout << "22:" << tmp << endl;
        }
        else if (hour[0] == '1' && hour[1] == '1'){
            string tmp = hour.substr(3,5);
            cout << "23:" << tmp << endl;
        }
    }
    else{ //caso AM
        cout << "No hay PM" << endl;
        if (hour[0] == '1' && hour[1] == '2'){
            string tmp = hour.substr(3,5);
            cout << "00:" << tmp << endl;
        }
        else{
            cout << "pase" << endl;
            string tmp = hour.substr(0,7);
            cout << tmp << endl;
        }
    }
    
}

int main(){
    int trip1[3] = {1,2,3};
    int trip2[3] = {3,2,1};
    //fast_triplets(trip1,trip2);
    time_conversion_1("01:45:30AM");
    return 0;
}