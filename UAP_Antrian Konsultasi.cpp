#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define MAX 1000

using namespace std;

int nomor[MAX];
int head=-1;
int tail=-1;

bool IsEmpty(){
  if(tail == -1){
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

void antrian_masuk(int no){
  if(IsEmpty()){
    head=tail=0;
  }else {
    tail++;
  }
  nomor[tail]=no;
}

void antrian_keluar(){
  if(IsEmpty()){
    cout<<"Tidak ada antrian !";
    getch();
  }else {
    for(int a=head;a<tail;a++){
      nomor[a]=nomor[a+1];
    }
    tail--;
    if(tail == -1){
      head = -1;
    }
  }
}

void clear(){
  head=tail=-1;
}

void cek_antrian(){
  if(IsEmpty()){
    cout<<"Antrian kosong !";
  }else {
    system("cls");
    for(int a = head; a <= tail; a++){
      cout<<"===============================";
      cout<<"\n >> No. Antrian : [" << nomor[a] << "]";
      cout<<"\n==============================="<< endl;
    }
  }
}


