#include<unistd.h>

void ft_putchar(char c){
write(1,&c,1);
        }

void ft_alphabet(){
int i=90;
while(i>64){
ft_putchar(i);
i--;
        }
        }
int main(){
ft_alphabet();
  	}
