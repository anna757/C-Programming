int main() {
  int number, i, j;
     
     printf( "Input the size of the square: " );
     scanf( "%d", &number );
     
     if(number < 0 || number < 11) {
        
     
     for(i=0; i<number; i++)
     {
         for(j=0; j<number; j++)
         {
             if(i==0 || i==number-1)
                 printf(" # ");
             else if(j==0 || j==number-1)
                 printf(" # \n" );
             else
                 printf("   ");
         }
         printf("\n");
     }
         return 0; }
 }