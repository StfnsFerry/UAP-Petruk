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

int main(){
  int pilih;
  int i=1;
  int urut;
  do{
    system("cls");
    cout << "\n\n___-- ANTRIAN KONSULTASI --___";
    cout << "\n================================";
    cout << "\n|1. Tambah antrian             |";
    cout << "\n|2. Panggil antrian            |";
    cout << "\n|3. Cek daftar antiran         |";
    cout << "\n|4. Kosongkan antrian          |";
    cout << "\n|5. Exit                       |";
    cout << "\n================================";
    cout << "\nPilih : ";
    cin >> pilih;
    cout << "\n\n";
    
    if(pilih ==1){
      if(IsFull()) {
        cout<<"Antrian sudah penuh, mohon tunggu beberapa saat lagi ";
      }
      else{
        urut=1;
        antrian_masuk(urut);
        cout<< "---------------------------------" << endl;
        cout<< "||          No. Antrian        ||" << endl;
        cout<< "|              " << i << "                |" << endl;
        cout<< "---------------------------------" << endl;
        cout<< "|       Silahkan Mengantri      |" << endl;
        cout<<  "||     Menunggu " << tail << " Antrian      ||" << endl;
        cout << "---------------------------------" << endl;
        i++;
      }
    }
    else if(pilih == 2){
      cout<< "=================================" << endl;
      cout<< "No. Antrian : [" << nomor[head] << "]";
      cout<< "\n=================================' << endl;
      antrian_keluar();
      cout<< "Silahkan Memasuki Ruangan Dokter !" << endl;
    }
    else if(pilih == 3){
      cek_antrian();
    }
    else if(pilih == 4){
      clear();
      cout<<"Antrian dikosongkan ! ";
    }
    else if(pilih == 5){
    }
    else{
      cout<<" Pilihan tidak tersedia ! \n" <<endl;
    }
    getch();
  }while(pilih!=5);
  
  return 0;
}
    
    
