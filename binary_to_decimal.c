    #include <stdio.h>  
    int main()  
    {  
        // declaration of variables  
        int num, binary_num, decimal_num = 0, base = 1, rem;  
        printf ("\n\n Enter a binary number with the combination of 0s and 1s \n");  
        scanf (" %d", &num); // accept the binary number (0s and 1s)  
      
        binary_num = num; // assign the binary number to the binary_num variable  
          
          
        while ( num > 0)  
        {  
            rem = num % 10; /* divide the binary number by 10 and store the remainder in rem variable. */  
            decimal_num = decimal_num + rem * base;  
            num = num / 10; // divide the number with quotient  
            base = base * 2;  
        }  
      
        printf ( "\n The binary number is %d \t", binary_num); // print the binary number  
        printf (" \n The decimal number is %d \t\n", decimal_num); // print the decimal   
        return 0;  
    }  
