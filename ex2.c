#include <unistd.h>

void ft_putchar(char c){
write(1,&c,1); 
}

void ft_alphabet(){	
int i=65;
while(i<91){
ft_putchar(i);
i++;
}

}
int main(){
ft_alphabet();
return 0;
	}
