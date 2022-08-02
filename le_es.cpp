#include <stdio.h>

int main()
{

  FILE *fabrir;
  char caracter;

  fabrir = fopen("archivo.txt", "a+t");

  printf("Escribe lo que quieras: ");

  while ((caracter = getchar()) != '\n')
  {
    printf("%c", fputc(caracter, fabrir));
  }
  fclose(fabrir);

  leer();
}

void leer()
{
  FILE *fp;
  int caracter;

  fp = fopen("archivo.txt", "r");

  if (fp == NULL)
  {
    printf("Error al abrir archivo");
  }
  else
  {
    while ((caracter = fgetc(fp)) != EOF)
    {
      printf("%c",caracter);
    }
  }
  fclose(fp);
  
}
