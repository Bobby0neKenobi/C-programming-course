#include<stdio.h>
#define COMMAND(NAME, TYPE) NAME##_##TYPE##_command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void){printf("HELLO WORLD! LINE: %d %s_%s_command\n", __LINE__, #NAME, #TYPE);}
DEFINE_COMMAND(a, c)
DEFINE_COMMAND(b, a)
int main(){
    a_c_command();
    b_a_command();
}