#include<unistd.h>
void ft_putchar(char c){
write(1,&c,1);
	}
void ft_print_numbers(){
int i=48;
while(i<58){	
ft_putchar(i);
i++;
}
}
int main(){
ft_print_numbers();
return 0;
	}
