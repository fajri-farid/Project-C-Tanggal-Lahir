#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur untuk menyimpan tanggal (dari kode kedua)
struct Tanggal {
    int hari, bulan, tahun;
};


// Struktur untuk menyimpan data nama, tanggal lahir, umur, alamat, dan deskripsi. Konsepnya kek OOP
struct Person {
    char nama[100];
    struct Tanggal tanggal_lahir; // Menyimpan tanggal lahir dengan menggunakan struktur Tanggal
    char alamat[100];
    char deskripsi[100];
};

int hitungUsia(struct Tanggal tanggalLahir, struct Tanggal tanggalSekarang) {
    int usia = tanggalSekarang.tahun - tanggalLahir.tahun;

    // Periksa apakah bulan lahir lebih besar dari bulan sekarang
    if (tanggalLahir.bulan > tanggalSekarang.bulan) {
        usia--;
    }
    // Jika bulan lahir sama dengan bulan sekarang, periksa harinya
    else if (tanggalLahir.bulan == tanggalSekarang.bulan) {
        if (tanggalLahir.hari > tanggalSekarang.hari) {
            usia--;
        }
    }

    return usia;
}

int hariDalamBulan(int bulan, int tahun) {
    switch (bulan) {
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0))
                return 29;
            else
                return 28;
        default:
            return 31;
    }
}

int hariMenujuUlangTahunBerikutnya(struct Tanggal tanggalLahir, struct Tanggal tanggalSekarang) {
    int jumlahHari = 0;

    // Jika bulan lahir lebih besar dari bulan sekarang atau bulan lahir sama tapi hari lahir lebih besar
    if (tanggalLahir.bulan > tanggalSekarang.bulan || (tanggalLahir.bulan == tanggalSekarang.bulan && tanggalLahir.hari > tanggalSekarang.hari)) {
        jumlahHari += tanggalLahir.hari - tanggalSekarang.hari; // Hari tersisa di bulan ini
        for (int i = tanggalSekarang.bulan + 1; i <= tanggalLahir.bulan; i++) {
            jumlahHari += hariDalamBulan(i, tanggalLahir.tahun);
        }
    } else if (tanggalLahir.bulan == tanggalSekarang.bulan && tanggalLahir.hari == tanggalSekarang.hari) {
        return 0; // Hari ini adalah ulang tahunnya
    } else {
        jumlahHari += tanggalLahir.hari - tanggalSekarang.hari; // Hari tersisa di bulan ini
        for (int i = tanggalSekarang.bulan + 1; i <= 12; i++) {
            jumlahHari += hariDalamBulan(i, tanggalLahir.tahun);
        }
        for (int i = 1; i < tanggalLahir.bulan; i++) {
            jumlahHari += hariDalamBulan(i, tanggalLahir.tahun);
        }
    }

    return jumlahHari;
}

// Fungsi untuk menyimpan nama, tanggal lahir, dan menghitung umur
void simpanData(struct Person data[], int *jumlah_data) {
    char konfirmasi;
    do {
        printf("\nMasukkan nama: ");
        scanf("%[^\n]", data[*jumlah_data].nama);
        // Membersihkan newline yang masih tersisa di buffer
        while (getchar() != '\n');

        printf("Masukkan tanggal lahir (format dd/mm/yyyy): ");
        scanf("%d/%d/%d", &data[*jumlah_data].tanggal_lahir.hari, &data[*jumlah_data].tanggal_lahir.bulan, &data[*jumlah_data].tanggal_lahir.tahun);
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
        printf("!   Tanggal Lahir : %02d/%02d/%d %-21s !\n", data[*jumlah_data].tanggal_lahir.hari, data[*jumlah_data].tanggal_lahir.bulan, data[*jumlah_data].tanggal_lahir.tahun, ""); // 19s untuk mengakomodasi tulisan "Tanggal Lahir : "
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

    
    (*jumlah_data)++; // menambah untuk data baru ke-n
}

// Prosedur untuk menampilkan semua data yang telah dimasukkan
void tampilkanData(struct Person data[], int jumlah_data, struct Tanggal tanggalSekarang) {
    printf("======================================================\n");
    printf("!             Daftar Tanggal Lahir Teman             !\n");
    printf("======================================================\n");
    for (int i = 0; i < jumlah_data; i++) {
        int usia = hitungUsia(data[i].tanggal_lahir, tanggalSekarang); // Hitung usia menggunakan fungsi hitungUsia
        int sisaHari = hariMenujuUlangTahunBerikutnya(data[i].tanggal_lahir, tanggalSekarang);
        printf("!   Data ke-%-3d                                      !\n", i + 1); // 3d berarti bagiannya 3 karakter minimal
        printf("!   Nama          : %-30s   !\n", data[i].nama); // 30s berartikan dia akan menetapkan minimal 30 karakter yang otomatis tercetak, walaupun ada yang tidak terisi
        printf("!   Tanggal Lahir : %02d/%02d/%d %-19s   !\n", data[i].tanggal_lahir.hari, data[i].tanggal_lahir.bulan, data[i].tanggal_lahir.tahun, ""); // 19s untuk mengakomodasi tulisan "Tanggal Lahir : "
        printf("!   Usia          : %-2d tahun                         !\n", usia); // Menampilkan usia
        if (sisaHari == 0) {
            printf("!   Info Ultah    : Hari ini adalah ulang tahunnya!  !\n");
        } else {
            printf("!   Info Ultah    : %-3d hari lagi                    !\n", sisaHari); // Menampilkan sisa hari ke ultah berikutnya
        }
        printf("!   Alamat        : %-30s   !\n", data[i].alamat);
        printf("!   Deskripsi     : %-30s   !\n", data[i].deskripsi);
        printf("======================================================\n");
    }
}

int main() {
    struct Person data[200];
    int jumlah_data = 0;
    int pilihan;
    char lanjut;
    struct Tanggal tanggalSekarang; // Deklarasi tanggalSekarang di awal main

    printf("======================================================\n");
    printf("!  Selamat Datang Di Daftar Tahun Lahir Teman       !\n");
    printf("!         Memori yang Tak Tergantikan               !\n");
    printf("!   Simpanlah Tahun Lahir Teman Anda di Sini        !\n");
    printf("=====================================================\n");

    printf("\nMasukkan tanggal sekarang (format dd/mm/yyyy): "); // Meminta tanggal sekarang di sini
    scanf("%d/%d/%d", &tanggalSekarang.hari, &tanggalSekarang.bulan, &tanggalSekarang.tahun);

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
    
            // Membersihkan buffer input
            while(getchar() != '\n');

            if (pilihan < 1 || pilihan > 3) {
                printf("\n=======================WARNING!=======================\n");
                printf("!               Pilihan tidak valid!                 !\n");
                printf("!            Silakan pilih 1, 2, atau 3.             !\n");
                printf("======================================================\n");
            }
        } while (pilihan < 1 || pilihan > 3);

        switch (pilihan) {
            case 1:
                simpanData(data, &jumlah_data);
                break;
            case 2:
                if (jumlah_data > 0) {
                    tampilkanData(data, jumlah_data, tanggalSekarang); // Panggil tampilkanData di sini

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