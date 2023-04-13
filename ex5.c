#include<unistd.h>
void ft_putchar(char c){
write(1,&c,1);
	}
void print_reverse_numbers(){
int i=57;
while(i>47){
ft_putchar(i);
i--;	}
	}
int main(){
print_reverse_numbers();
	}
