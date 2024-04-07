#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Struktur untuk menyimpan data nama, tanggal lahir, dan umur
struct Person {
    char nama[100];
    char tanggal_lahir[100];
    int umur;
};

// Fungsi untuk menyimpan nama dan tanggal lahir
void simpanData(struct Person data[], int *jumlah_data) {
    printf("Masukkan nama: ");
    scanf("%[^\n]", data[*jumlah_data].nama);

    // Membersihkan newline yang masih tersisa di buffer
    while (getchar() != '\n');

    printf("Masukkan tanggal lahir (dd/mm/yyyy): ");
    scanf("%[^\n]", data[*jumlah_data].tanggal_lahir);
    
    // Hitung umur
    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    int tahun_sekarang = local->tm_year + 1900;
    sscanf(data[*jumlah_data].tanggal_lahir, "%*d/%*d/%d", &data[*jumlah_data].umur); // sscanf dia ngambil data dari tanggal_lahir
    data[*jumlah_data].umur = tahun_sekarang - data[*jumlah_data].umur;
    
    (*jumlah_data)++; // menambah untuk data baru ke-n
}

// Fungsi untuk menampilkan semua data yang telah dimasukkan
void tampilkanData(struct Person data[], int jumlah_data) {
    printf("================================================\n");
    printf("!          Daftar Tanggal Lahir Teman          !\n");
    printf("================================================\n");
    for (int i = 0; i < jumlah_data; i++) {
        printf("!   Data ke-%-3d                                !\n", i + 1); // 2d berarti bagiannya 2 karakter minimal
        printf("!   Nama         : %-25s   !\n", data[i].nama); // 20s berartikan dia akan menetapkan minimanl 20 karakter
        printf("!   Tanggal lahir: %-25s   !\n", data[i].tanggal_lahir); // 20s berartikan dia akan menetapkan minimanl 20 karakter
        printf("!   Umur         : %-25d   !\n", data[i].umur);
        printf("================================================\n");
    }
}

int main() {
    struct Person data[200];
    int jumlah_data = 0;
    char lanjut;

    printf("================================================\n");
    printf("!  Selamat Datang Di Daftar Tahun Lahir Teman  !\n");
    printf("!         Memori yang Tak Tergantikan          !\n");
    printf("!   Simpanlah Tahun Lahir Teman Anda di Sini   !\n");
    printf("================================================\n");


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
