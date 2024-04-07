#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DATA 200 // Maksimum jumlah data yang dapat disimpan

// Struktur untuk menyimpan data nama dan tanggal lahir
struct Person {
    char nama[100];
    char tanggal_lahir[100];
};

// Fungsi untuk menyimpan nama dan tanggal lahir
void simpanData(struct Person data[], int *jumlah_data) {
    printf("Masukkan nama: ");
    scanf("%[^\n]", data[*jumlah_data].nama);

    // Membersihkan newline yang masih tersisa di buffer
    while (getchar() != '\n');

    printf("Masukkan tanggal lahir (dd/mm/yyyy): ");
    scanf("%[^\n]", data[*jumlah_data].tanggal_lahir);
    
    (*jumlah_data)++; // menambah untuk data baru ke-n
}

// Fungsi untuk menampilkan semua data yang telah dimasukkan
void tampilkanData(struct Person data[], int jumlah_data) {
    printf("===========================================\n");
    printf("=          Daftar Tanggal Lahir           =\n");
    printf("=                Teman                    =\n");
    printf("===========================================\n");
    for (int i = 0; i < jumlah_data; i++) {
        printf("=   Data ke-%-2d                            =\n", i + 1);
        printf("=   Nama         : %-20s   =\n", data[i].nama);
        printf("=   Tanggal lahir: %-20s   =\n", data[i].tanggal_lahir);
        printf("===========================================\n");
    }
}

int main() {
    struct Person data[MAX_DATA];
    int jumlah_data = 0;
    char lanjut;

    printf("Selamat Datang Di Daftar Tahun Lahir Teman\n");
    printf("Memori yang Tak Tergantikan: Simpanlah Tahun Lahir Teman Anda di Sini\n");


    do {
        simpanData(data, &jumlah_data);

        printf("\nApakah Anda ingin memasukkan data lagi? (y/n): ");
        scanf(" %c", &lanjut); // Menambahkan spasi sebelum %c untuk menghindari masalah input newline

        // Membersihkan buffer input
        while(getchar() != '\n');

    } while(lanjut == 'y' || lanjut == 'Y');

    printf("\n"); // Baris baru setelah pengguna menginput 'n'

    tampilkanData(data, jumlah_data);

    return 0;
}
