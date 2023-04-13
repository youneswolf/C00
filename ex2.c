#include <unistd.h>

void ft_putchar(char c){
write(1,&c,1); 
}

int main(){	
int i=65;
while(i<90){
ft_putchar(i);
i++;
}
return 0;

}
