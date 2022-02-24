#include <iostream>
using namespace std;

int fast_triplets(int trip1[3],  int trip2[3]){
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

int main(){
    int trip1[3] = {1,2,3};
    int trip2[3] = {3,2,1};
    fast_triplets(trip1,trip2);
    return 0;
}