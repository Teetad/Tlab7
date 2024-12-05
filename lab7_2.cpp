#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int calculate_gear (int user_id){
    int twoleftdigit = (user_id / pow(10,8))*10 + (user_id % 10000000 / pow(10,7));
    int gear_id = twoleftdigit - 12; 
    return gear_id;
}
int main (){
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    string user_name;
    getline(cin, user_name);
    cout << "Fahsai: Wow!!! " << user_name <<" is a really cool name." << endl;
    user_name += ": ";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID? " << endl;
    cout << user_name;
    int user_id;
    cin >> user_id;
    int gear_id = calculate_gear(user_id);
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR "<< gear_id <<". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << user_name;
    string movie_name;
    getline(cin, movie_name);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << user_name;
    string movie_day;
    getline(cin, movie_day);
    cout << "Fahsai: " + movie_day + "....that is OK!!! I'm looking forward to watching " + movie_name + " with you." << endl;
    cout << user_name;
    string respond;
    cin >> respond;
    cout << "Fahsai: 555+ see you " + movie_day +". Bye Bye \\(^ ^)/";
}
