#include <stdio.h>



int main(int argc, char *argv[]){

        int i = 0;



        printf("\n입력받은 인자값의 수 : %d  \n" , argc );

        printf("입력받은 인자값 \n");



        for(; i < argc ; i++){

                printf("%s \n" , argv[i]);

        }



        printf("\n\n");

        return 0;

}