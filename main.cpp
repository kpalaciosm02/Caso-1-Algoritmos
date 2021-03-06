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
        //cout << "Si hay PM" << endl;
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
        //cout << "No hay PM" << endl;
        if (hour[0] == '1' && hour[1] == '2'){
            string tmp = hour.substr(3,5);
            cout << "00:" << tmp << endl;
        }
        else{
            string tmp = hour.substr(0,8);
            cout << tmp << endl;
        }
    }
    cout << endl;
}


void time_conversion_2(string time){
    //this algorithm is more efficient because it does not go over the string every time it needs to compare.
    //I though a switch would be faster but I did not find a way to use strings in the cases.
    string end = time.substr(8,2);
    string hour = time.substr(0,2);
    string tmp = time.substr(3,5);
    //cout << end << endl;
    if (end == "AM"){
        //cout << "Es AM" << endl;
        if (hour == "12"){
            cout << "00:" << tmp << endl;
        }
        else{
            string tmp2 = time.substr(0,8);
        }
    }
    else if(end == "PM"){
        //cout << "Es PM" << endl;
        if (hour == "01"){
            cout << "13:" << tmp << endl;
        }
        else if (hour == "02"){
            cout << "14:" << tmp << endl;
        }
        else if (hour == "03"){
            cout << "15:" << tmp << endl;
        }
        else if (hour == "04"){
            cout << "16:" << tmp << endl;
        }
        else if (hour == "05"){
            cout << "17:" << tmp << endl;
        }
        else if (hour == "06"){
            cout << "18:" << tmp << endl;
        }
        else if (hour == "07"){
            cout << "19:" << tmp << endl;
        }
        else if (hour == "08"){
            cout << "20:" << tmp << endl;
        }
        else if (hour == "09"){
            cout << "21:" << tmp << endl;
        }
        else if (hour == "10"){
            cout << "22:" << tmp << endl;
        }
        else if (hour == "11"){
            cout << "23:" << tmp << endl;
        }
    }
    else{
        cout << "Entrada Incorrecta" << endl;
    }
}

int subarray_division_1(int chocolate[5], int day, int month){
    int index_result[5] = {0,0,0,0,0};
    for (int i = 0; i < 6; i++){
        int quantity = 0;
        int sum = 0;
        int counter = i;
        while (quantity < month){
            if (sum < month){
                sum += chocolate[counter];
            }
            
            //cout << sum << "->";
            if (counter < 5){
                counter++;
            }
            
            quantity++;
        }
        //cout << endl << "Suma: " << sum << endl;
        if (sum == month){
            index_result[i] = 1;
        }
    }
    cout << "Combinations: ";
    for (int j = 0; j < 5; j++){
        if (index_result[j] == 1 && j > 5 - day)
            index_result[j] = 0;
    }
    int combinations = 0;
    for (int i = 0; i < 5; i++){
        //cout << index_result[i] << "->";
        if (index_result[i] ==  1){
            combinations++;
        }
    }
    cout << combinations << endl;    
}

int efficient_subarray_division(int chocolate[5], int day, int month){
    int combinations = 0;
    int index_result[5] = {0,0,0,0,0};
    for (int i = 0; i < 5 - day; i++){
        int quantity = 0;
        int sum = 0;
        int counter = i;
        while (quantity < month){
            if (sum == month){
                //cout << i << endl;
                combinations++;
                break;
            }
            else if (sum < month){
                sum += chocolate[counter];
            }
            if (counter < month){
                counter++;
            }
            quantity++;
        }
    }
    cout << "Efficient Combinations: " << combinations << endl;
}

int count_substring_in_string(string full_string, string substring){
    int counter = 0;
    int string_lenght = full_string.length();
    int substring_lenght = substring.length();
    for (int i = 0; i < string_lenght-substring_lenght+1; i++){
        string tmp =  full_string.substr(i,substring_lenght);
        if (tmp == substring){
            counter++;
        }
    }
    cout << "Cantidad del substring: " << counter << endl;
    return counter;
}

void minion_game(string full_string){
    int string_length  =  full_string.length();
    for (int i = 0; i < string_length; i++){
        for (int j = string_length - 1 - i; j > 0; j--){
            string substring = full_string.substr(i,j);
            cout << substring << endl;
        }
    }
}

int main(){
    int trip1[3] = {1,2,3};
    int trip2[3] = {3,2,1};
    int trip3[3] = {4,5,6};
    int trip4[3] = {6,5,4};
    int chocolate[5] = {2,2,1,3,2};
    cout << "------Pruebas triplets-----" << endl;
    cout <<  "Este es solo el algoritmo r??pido que me sali??, no se me ocurri?? ninguno m??s lento." << endl;
    fast_triplets(trip1,trip2);
    fast_triplets(trip3,trip4);
    cout << "--------Prueba de conversi??n de tiempo--------" << endl;
    cout << "El tiempo de recorrido de este mejor?? al cambiar la manera en la que se buscaban coincidencias." << endl;
    time_conversion_1("01:45:30AM");
    time_conversion_2("01:45:30AM");
    cout <<  "Segundo test de conversi??n de tiempo." << endl;
    time_conversion_1("10:37:30PM");
    time_conversion_2("10:37:30PM");
    cout << "-------Pruebas de Subarray Division-------" << endl;
    cout << "El primero tiene varios for loop y un mont??n de condicionales, el segundo tiene menos for loops y menos condicionales." << endl;
    subarray_division_1(chocolate,2,4);
    efficient_subarray_division(chocolate,2,4);
    cout << "Segunda prueba de Subarray Division" << endl;
    subarray_division_1(chocolate,3,5);
    efficient_subarray_division(chocolate,3,5);
    cout << "-------Prebas de minion game-------" << endl;
    cout << "De ac?? en adelante no est?? completo, no tuve tiempo." << endl;
    cout << "Funci??n que cuenta cuantas veces aparece un string dentro de otro" << endl;
    count_substring_in_string("abcabcabc abc","abc");
    cout << "Primeras pruebas de usar la funci??n anterior para buscar todas las posibles combinaciones." << endl;
    minion_game(" fabion");
    return 0;
}