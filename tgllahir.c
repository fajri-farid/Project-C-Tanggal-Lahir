#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Struktur untuk menyimpan data nama, tanggal lahir, umur, alamat, dan deskripsi. Konsepnya kek OOP
struct Person {
    char nama[100];
    char tanggal_lahir[100];
    int umur;
    char alamat[100];
    char deskripsi[100];
};

// Fungsi untuk menyimpan nama dan tanggal lahir
void simpanData(struct Person data[], int *jumlah_data) {   
    char konfirmasi;
    do {
        printf("\nMasukkan nama: ");
        scanf("%[^\n]", data[*jumlah_data].nama);
        // Membersihkan newline yang masih tersisa di buffer
        while (getchar() != '\n');

        printf("Masukkan tanggal lahir (dd/mm/yyyy): ");
        scanf("%[^\n]", data[*jumlah_data].tanggal_lahir);
        // Membersihkan newline yang masih tersisa di buffer
        while (getchar() != '\n');

        printf("Masukkan alamat: ");
        scanf("%[^\n]", data[*jumlah_data].alamat);
        // Membersihkan newline yang masih tersisa di buffer
        while (getchar() != '\n');

        printf("Masukkan deskripsi: ");
        scanf("%[^\n]", data[*jumlah_data].deskripsi);

        printf("\n======================================================\n");
        printf("!   Data yang telah dimasukkan:                      !\n");
        printf("!   Nama          : %-30s   !\n", data[*jumlah_data].nama);
        printf("!   Tanggal Lahir : %-30s   !\n", data[*jumlah_data].tanggal_lahir);
        printf("!   Alamat        : %-30s   !\n", data[*jumlah_data].alamat);
        printf("!   Deskripsi     : %-30s   !\n", data[*jumlah_data].deskripsi);
        printf("======================================================\n");

        printf("Apakah data di atas sudah benar? (y/n): ");
        scanf(" %c", &konfirmasi);

        // Membersihkan newline yang masih tersisa di buffer
        while (getchar() != '\n');

        if (konfirmasi != 'y') {
            printf("Silakan masukkan data kembali.\n");
        }
    } while (konfirmasi != 'y');

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
    printf("======================================================\n");
    printf("!             Daftar Tanggal Lahir Teman             !\n");
    printf("======================================================\n");
    for (int i = 0; i < jumlah_data; i++) {
        printf("!   Data ke-%-3d                                      !\n", i + 1); // 3d berarti bagiannya 3 karakter minimal
        printf("!   Nama          : %-30s   !\n", data[i].nama); // 30s berartikan dia akan menetapkan minimal 30 karakter yang otomatis tercetak, walaupun ada yang tidak terisi
        printf("!   Tanggal Lahir : %-30s   !\n", data[i].tanggal_lahir); 
        printf("!   Umur          : %-2d Tahun                         !\n", data[i].umur);
        printf("!   Alamat        : %-30s   !\n", data[i].alamat);
        printf("!   Deksripsi     : %-30s   !\n", data[i].deskripsi);
        printf("======================================================\n");
    }
}

int main() {
    struct Person data[200];
    int jumlah_data = 0;
    int pilihan;
    char lanjut;

    printf("======================================================\n");
    printf("!  Selamat Datang Di Daftar Tahun Lahir Teman       !\n");
    printf("!         Memori yang Tak Tergantikan               !\n");
    printf("!   Simpanlah Tahun Lahir Teman Anda di Sini        !\n");
    printf("=====================================================\n");

    do {
        do {
            printf("\n======================================================\n");
            printf("!    Pilih Yang Akan Dilakukan:                      !\n");
            printf("!    1. Masukkan informasi teman                     !\n");
            printf("!    2. Tampilkan informasi teman                    !\n");
            printf("!    3. Selesaikan program                           !\n");
            printf("======================================================\n");
            
            printf(" Pilihan: ");
            scanf("%d", &pilihan);

            // printf("\n======================================================\n");
            // printf(" Pilihan: ");
            // scanf("%d", &pilihan);
            // printf("======================================================\n");
    
            // Membersihkan buffer input
            while(getchar() != '\n');

            if (pilihan < 1 || pilihan > 3) {
                printf("\n=======================WARNING!=======================\n");
                printf("!               Pilihan tidak valid!               !\n");
                printf("!            Silakan pilih 1, 2, atau 3.           !\n");
                printf("======================================================\n");
            }
        } while (pilihan < 1 || pilihan > 3);

        switch (pilihan) {
            case 1:
                simpanData(data, &jumlah_data);
                break;
            case 2:
                if (jumlah_data > 0) {
                    tampilkanData(data, jumlah_data);

                do {
                printf("\nApakah Anda ingin kembali ke menu? (y): ");
                scanf(" %c", &lanjut);
                if (lanjut != 'y') {
                printf("\n======================================================\n");
                printf("!       Masukan tidak valid. Silakan masukkan y      !");
                printf("\n======================================================\n");
                 }
                } while (lanjut != 'y');

                } else {
                    printf("\n======================================================\n");
                    printf("!          Belum ada data yang dimasukkan.           !\n");
                    printf("======================================================\n");
                }
                break;
            case 3:
                printf("\n======================================================\n");
                printf("!    Terima Kasih Telah Menggunakan Aplikasi Kami    !\n");
                printf("======================================================\n");
                return 0;
            default:
                printf("Pilihan tidak valid.\n");
        }


    } while(pilihan == 1 || pilihan == 2);

    printf("\n");

    return 0;
}