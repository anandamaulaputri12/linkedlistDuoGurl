#include <iostream>
   #include <string>
   using namespace std;

   struct Node {
       string nama;
       string film;
       string jadwal;
       int jumlahTiket;
       Node* next;
   };

   class AntrianTiket {
   private:
       Node* head;
       Node* tail;

   public:
       AntrianTiket() {
           head = nullptr;
           tail = nullptr;
       }
   };