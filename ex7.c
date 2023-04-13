#include<stdio.h>
void ft_putchar(char c){
write(1,&c,1);
}
void ft_number_comb(){
int a,b,c;
a='0';
while(a<'8'){
              b=a+1;
                    while(b<'9'){

                                  c=b+1;
                                        while(c<'9'+1){
                                                      ft_putchar(a);
                                                      ft_putchar(b);
                                                      ft_putchar(c);
                                                      c++;
                                                     if(a!='7')	{	
                                                         ft_putchar(',');
                                                         ft_putchar(' ');

                                                                }
                                                      }   
                             b++;  
                                }
        a++;
               
	    }

	              }
int main(){
ft_number_comb();
}
