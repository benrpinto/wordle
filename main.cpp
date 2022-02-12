#include <iostream>
#include <stdlib.h>

#define ATTEMPTS 6
#define WORDLEN 5

using namespace std;

int main(){
   int attempt;
   char guess[ATTEMPTS][WORDLEN];
   bool success = false;
   for(attempt = 0;(attempt < ATTEMPTS)&&(success == false); attempt++){
      cout<<"Enter guess\n";
      for(int i = 0; i < WORDLEN; i++){
         cin>>guess[attempt][i];
      }

      //do calculations here

      cout<<"guess is ";
      for(int i = 0; i < WORDLEN; i++){
         cout<<guess[attempt][i];
      }
      cout<<"\n";
      success = string(guess[attempt]) == "world";
   }
   if(success){
      cout<<"Congratulations!\n";
   }else{
      cout<<":(\n";
   }
   return 0;
}
