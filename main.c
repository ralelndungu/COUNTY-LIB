/*
COUNTY LIBRARY MANAGEMENT SYSTEM
By KINGLESY MUTHANJI
FEB  2022
MIT LICENSE
C89 COMPILER
*/
#include <stdio.h>
#include <stdlib.h>

int menu()


{  int action ;
    printf("select an action:\n");
    printf("1.Add a new patron\n");
    printf("2.View all patrons\n");
    printf("3.View all books\n");
    printf("4.Add new Book\n");
    printf("Your action:\n");
    scanf("%d",&action);
    return action;

}
int main()
{

    printf("COUNTY LIBRARY SYSTEM!\n");
    printf("WELCOME MR KINGSLEY!\n");
    printf("You selected action %d",menu());
    return 0;


}





