#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int  main() {
  srand(time(NULL)); //seed generator
  int myInts[10]; // array of 10 ints
  int i ; // for loop purposes
  int j;
  int size = sizeof(myInts) / sizeof(myInts[0]); //gets length of array
  ///populating array with random ints
  for(i = 0 ; i < size-1 ; i++){ //sets the last element to 0;
    myInts[i] = rand() % 100 +1; // range of 1 to 100
  }
  //printing
  printf("Original Array\n");

  for(i = 0 ; i <size ; i++){
    printf("Element #%d : %d\n", i , myInts[i] );
  }
  printf("\n");
  int reverse[10]; // array of 10 ints
  int * pElement; //pointer
  for( i = 0 ; i < size ; i++){
   pElement = &myInts[i]; //setting address
   reverse[size-1-i] = *pElement; // dereferencing and last element of reverse = first element of myInts
  }
  //printing
  printf("Reverse Array\n");

  for(i = 0 ; i <size ; i++){
    printf("Element #%d : %d\n", i , reverse[i]);
  }
  return 0;
}
