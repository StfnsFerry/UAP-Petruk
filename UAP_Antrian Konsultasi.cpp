#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define MAX 1000

using namespace std;

int nomor[MAX];
int head=-1;
int tail=-1;

bool IsEmpty(){
  if(tail == _1){
    return true;
  } else{
    return false;
  }
}

bool IsFull(){
  if(tail == MAX-1){
    return true;
  } else{
    return false;
  }
}
