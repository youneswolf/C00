#include<unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}
void ft_putnbr(int nb){
if(nb<0){
    nb=-nb;
    ft_putchar('-');
}
if(nb<10){
    ft_putchar(nb+48);
}else{
    ft_putnbr(nb/10);
    ft_putnbr(nb%10);
}
    
}
int main(){
ft_putnbr(367);
return 0;
}
