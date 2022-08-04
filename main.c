
#include <stdio.h>

int main()
{
    int A , B ;
    char op ;

    printf("veuillez saisir la valeur de A : \n");
    scanf("%d",&A);

    printf("veuillez saisir la valeur de B : \n");

    scanf("%d",&B);

    printf("veuillez saisir la valeur de operateur : \n");

    scanf(" %c",&op);

    switch ( op ) {
        case '+' : printf("A+B=%d",A+B);
                    break ;
        case '-' : printf("A-B=%d",A-B);
                    break ;
        case '*' : printf("A*B=%d",A*B);
                    break ;
        case '/' : if(B!=0)
                        printf("A/B=%d",A/B);
                        else
                           printf("la division par 0 est impossible");
                    break ;
        default : printf("operateur est incorrect");
                    break ;
         case 'q' : printf("l'utilisateur a quitter le programme");
    }
    return 0;
}
