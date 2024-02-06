#include <iostream>

#include "include/Login.h"
#include "include/Menus.h"
#include "include/Arquivo.h"

int main()
{
    Login login;

    printf(">>>>>>>>>> Realizar Login. <<<<<<<<<<\n");

    bool loginValido = login.fazerLogin();
    if(loginValido) {
        system("cls");
        Menus menus;
        menus.apresentarMenus();
    }

    printf("\n\nFim do Programa.\n");
    return 0;
}

