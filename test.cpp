#include <iostream>
#include <cstdlib>
#include <chrono>
#include <ctime>
int main(){
    const char alpha[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char sign[6]={'!', '?', '*', '-', '+', '&'};
    std::srand(std::chrono::high_resolution_clock::now().time_since_epoch().count());
    std::string password;
     for(int i=0; i<3; i++){
        password += alpha[rand()%26];
        password += std::to_string(rand()%1000);
        password += sign[rand()%6];

     }
       std::cout<<password;
    return 0;}

