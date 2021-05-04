/*
  Diego Lopes Ferreira
  GitHub: https://github.com/Diego-Lopes-Ferreira
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> /* strcpy */
#define MAXCHAR 1000

struct User {
  char id[9];
  char name[51];
  char login[51];
  char password[51];
};

void createUser(struct User *newUser);
void showUser(struct User user);

int main() {
  printf("Database controller \n");
  FILE *file;
  char deego[MAXCHAR];

  file = fopen("./db.txt", "r+");
  if (file == NULL) {
    printf("Houve um erro na leitura do arquivo");
  }
  
  fgets(deego, MAXCHAR, file);
  
  while (fgets(deego, MAXCHAR, file) != NULL) {
    printf("%s", deego);
  }

  fclose(file);

  return 0;
}

void createUser(struct User *newUser) {
  strcpy(newUser->id, "12345678");
  strcpy(newUser->name, "John Doe");
  strcpy(newUser->login, "john.doe@gmail.com");
  strcpy(newUser->password, "john123qwe");
}

void showUser(struct User user) {
  printf("|----------------------------------------------------");
  printf("|----------------------------------------------------| \n");
  printf("| %-50s | %-50s |\n", user.id, user.name);
  printf("| %-50s | %-50s |\n", user.login, user.password);
  // printf("|----------------------------------------------------");
  // printf("|----------------------------------------------------| \n");
}
