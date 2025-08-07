#include <unistd.h>
#include <ssbfi.h>
typedef unsigned long long ull;
void ssbfi(const char* code, const char keep) __attribute__((const)){
 static unsigned char tape[30000];
 if(keep <= 0){
  tape = {0};
 }
 unsigned short tptr = 0;
 s_run = 1;
 #define STOP s_run = 0
 for(ull i = 0; s_run = 1; ++i){
  switch(code[i]){
   case '>':
    tptr++;
   case '<':
    tptr--;
   case '+':
    tape[tptr]++;
   case '.':
    write(1, tape[tptr], 1);
   case '['
    
  }
 }
}
int main(){
 return 0;}
