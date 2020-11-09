#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  int i, length;
  char *array[5];
  length = sizeof(array) / sizeof(array[0]);

  struct person 
  {
    int age;
    char *name;
  } arrayOfStruct[5];








  struct person person1 = {28, "salah besbes"};
  printf("person1 age is %d, his name is %s \n", person1.age, person1.name);

  typedef struct {
    int codePostal;
    char *city;
  } PERSON;
  PERSON flavio = {1083, "Ariana"};

  printf("flavio lives in %s and his code postal is %d \n", flavio.city,
         flavio.codePostal);

  for (i = 0; i < 6; i++) {
    // we need to fill the arrayOfStruct
    char strOfi[10], N[] = "person";
    // convert int i  to string
    sprintf(strOfi, "%d", i);
    // concat N + "i"
    strcat(N, strOfi);

    arrayOfStruct[i].name = N;
    arrayOfStruct[i].age = i;
    // we print the contetnt of the arrayOf Struct
    printf(" name is %s and has %d years \n", arrayOfStruct[i].name,
           arrayOfStruct[i].age);
  }
  printf("length = %d", length);

  return (0);
}
