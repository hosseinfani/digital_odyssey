#include<stdio.h>
#define Byte 8
void to_binary(int a,int b[]){
	//code to convert a decimal number to binary
}
void to_Gray(int a,int c[]){
	int binary_number[Byte];
	to_binary(a, binary_number);
	//code for binary to Gray
	//code for printing Gray code
}

int main (void){
    
    int Gray_code[Byte];

    int menu_item=-1;
    while(menu_item!=0)
    {
        printf("Enter the encoding command number:\n0) Exit\n1) Gray code\n");
        scanf("%d",&menu_item);
        if (menu_item==1)
        {
            printf("Enter a decimal number between 0 and 255 (inclusive):");
            int decimal_number=-1;
            scanf("%d",&decimal_number);
            while(decimal_number<0||decimal_number>255)
            {
                printf("Error, enter a decimal number between 0 and 255 (inclusive):");
                scanf("%d",&decimal_number);
            }
            printf("Gray code for %d -> ",decimal_number);
            to_Gray(decimal_number, Gray_code);
            printf("\n");
        }
        else if(menu_item!=0)
            printf("Error, invalid command!\n");
    }
}
