#include <iostream>
#include <cstdlib>
#include <ctime>

std::string password_generator(int length, bool numbers, bool specialCaracters, bool uppercase, bool lowercase)
{
   std::string password;
   std::string uppercases = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   std::string lowercases = "abcdefghijklmnopqrstuvwxyz";
   std::string number = "0123456789";
   std::string symboles = "/*-%.?!:$^~&)'_@)=";
   std::string all_int_all("");
   if(numbers == true)
      all_int_all += number;
   if(specialCaracters == true)
      all_int_all += symboles;
   if(uppercase == true)
      all_int_all += uppercases;
   if(lowercase == true)
      all_int_all += lowercases;
   srand(time(0));
   while(password.length() != length)
      password += all_int_all[rand() % (all_int_all.length() - 1)];
   return password;
}

int main ()
{
   int length;
   std::cin >> length;
   bool one;
   std::cin >> one;
   bool two;
   std::cin >> two;
   bool three;
   std::cin >> three;
   bool four;
   std::cin >> four;
   std::cout << password_generator(length, one, two, three, four);
}
