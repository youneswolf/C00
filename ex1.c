#include <unistd.h>


void ft_putchar(char c){

          write(1,&c,1);

	               }

int main(){
char z='b';
ft_putchar(z);
return 0;
	}
