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
   void tambahPembeli(string nama, string film, string jadwal, int jumlahTiket) {
       Node* baru = new Node;
       baru->nama = nama;
       baru->film = film;
       baru->jadwal = jadwal;
       baru->jumlahTiket = jumlahTiket;
       baru->next = nullptr;

       if (tail == nullptr) {
           head = tail = baru;
       } else {
           tail->next = baru;
           tail = baru;
       }

       cout << "\n✅ Pembeli '" << nama << "' masuk antrian untuk film '" << film
            << "' pada jam " << jadwal << " (" << jumlahTiket << " tiket)." << endl;
   }