#include<unistd.h>

void ft_putchar(char c){
write(1,&c,1);
	}

int main(){
int i=90;
while(i>64){
ft_putchar(i);
i--;
	}
return 0;       
	}
