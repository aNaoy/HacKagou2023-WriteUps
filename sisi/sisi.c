#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
     
int main()
{
  setvbuf(stdout, NULL, _IONBF, 0);
  
  int check=0xbebebeef;
  int key=0xcafedead;
  char buf[40];
  
  puts("Bienvenue sur le portail d'Open NC :)\n");
  fgets(buf,49,stdin);
     
  if ((check==0xcafedead) && (key==0xbebebeef))
   {
     puts("Bien joué jeune padawan, as-tu atteint ton but ?!\n");
     system("/usr/bin/cat flag.txt");
     puts("Déconnexion...\n");
   }
  else
   {
     printf("Malheureusement, vous êtes mauvais...\n");
   }
   return 0;
}

// gcc -Wall -fno-stack-protector -no-pie -o sisi sisi.c
