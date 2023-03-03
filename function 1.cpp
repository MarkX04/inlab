#include <iostream>
#include <cstring>
using namespace std;
bool isPalindrome(const char* str) {
    // Write your code here
   for (int i =0; i<strlen(str); ++i){
       if(str[i] != str[strlen(str) - i -1])
       return false;
   }
   return true;
}