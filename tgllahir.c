#include <stdio.h>
#include <stdlib.h> // atoi()
#include <string.h> // strcspn()
#include <ctype.h> // isDigit()

// Struktur untuk menyimpan tanggal
struct Tanggal {
    int hari, bulan, tahun;
};

// Struktur untuk menyimpan data nama, tanggal lahir, umur, alamat, dan deskripsi. Konsepnya kek OOP
struct Person {
    char nama[100];
    struct Tanggal tanggal_lahir; // Menyimpan tanggal lahir dengan menggunakan struktur Tanggal
    char favorit[100];
    char alamat[100];
    char deskripsi[100];
};

// Fungsi untuk menentukan zodiak berdasarkan tanggal dan bulan
char *tentukanZodiak(struct Tanggal tanggal_lahir) {
    if ((tanggal_lahir.bulan == 3 && tanggal_lahir.hari >= 21) || (tanggal_lahir.bulan == 4 && tanggal_lahir.hari <= 19)) {
        return "Aries";
    } else if ((tanggal_lahir.bulan == 4 && tanggal_lahir.hari >= 20) || (tanggal_lahir.bulan == 5 && tanggal_lahir.hari <= 20)) {
        return "Taurus";
    } else if ((tanggal_lahir.bulan == 5 && tanggal_lahir.hari >= 21) || (tanggal_lahir.bulan == 6 && tanggal_lahir.hari <= 20)) {
        return "Gemini";
    } else if ((tanggal_lahir.bulan == 6 && tanggal_lahir.hari >= 21) || (tanggal_lahir.bulan == 7 && tanggal_lahir.hari <= 22)) {
        return "Cancer";
    } else if ((tanggal_lahir.bulan == 7 && tanggal_lahir.hari >= 23) || (tanggal_lahir.bulan == 8 && tanggal_lahir.hari <= 22)) {
        return "Leo";
    } else if ((tanggal_lahir.bulan == 8 && tanggal_lahir.hari >= 23) || (tanggal_lahir.bulan == 9 && tanggal_lahir.hari <= 22)) {
        return "Virgo";
    } else if ((tanggal_lahir.bulan == 9 && tanggal_lahir.hari >= 23) || (tanggal_lahir.bulan == 10 && tanggal_lahir.hari <= 22)) {
        return "Libra";
    } else if ((tanggal_lahir.bulan == 10 && tanggal_lahir.hari >= 23) || (tanggal_lahir.bulan == 11 && tanggal_lahir.hari <= 21)) {
        return "Scorpio";
    } else if ((tanggal_lahir.bulan == 11 && tanggal_lahir.hari >= 22) || (tanggal_lahir.bulan == 12 && tanggal_lahir.hari <= 21)) {
        return "Sagittarius";
    } else if ((tanggal_lahir.bulan == 12 && tanggal_lahir.hari >= 22) || (tanggal_lahir.bulan == 1 && tanggal_lahir.hari <= 19)) {
        return "Capricorn";
    } else if ((tanggal_lahir.bulan == 1 && tanggal_lahir.hari >= 20) || (tanggal_lahir.bulan == 2 && tanggal_lahir.hari <= 18)) {
        return "Aquarius";
    } else if ((tanggal_lahir.bulan == 2 && tanggal_lahir.hari >= 19) || (tanggal_lahir.bulan == 3 && tanggal_lahir.hari <= 20)) {
        return "Pisces";
    } else {
        return "Tidak Valid";
    }
}

void tampilkanInformasiZodiak(int pilihan) {
    char konfirmasiInformasiZodiak;
    switch (pilihan) {
        case 1:
            do
            {
                printf("\n");
                printf("===================================================================\n");
                printf("------------------------------AQUARIUS-----------------------------\n");
                printf("!   Pengertian Umum:                                              !\n");
                printf("!   Aquarius diwakili oleh seorang pembawa air, yang melambangkan !\n");
                printf("!   kebebasan, kreativitas, dan inovasi. Aquarius adalah tanda    !\n");
                printf("!   udara yang mencerminkan idealisme, keunikan, dan keterbukaan. !\n");
                printf("!                                                                 !\n");
                printf("!   Tanggal      : 20 Januari - 18 Februari.                      !\n");
                printf("!   Sifat        : Inovatif, humanis, eksentrik.                  !\n");
                printf("!   Kelebihan    : Kreatif, toleran.                              !\n");
                printf("!   Kekurangan   : Tidak terikat, eksentrik                       !\n");
                printf("!   Cocok dengan : Gemini, Libra.                                 !\n");
                printf("!   Tambahan     : Suka berpikir ke depan, suka membantu orang.   !\n");
                printf("===================================================================\n");
                printf("\n");

                printf("kembali ke menu? : ");
                scanf(" %c", &konfirmasiInformasiZodiak);
                while(getchar() != '\n'); // Membersihkan buffer input

                printf("\033[2J\033[1;1H"); 

                if (konfirmasiInformasiZodiak != 'y') {
                    printf("===================================================================\n");
                    printf("!                      Masukkan y untuk keluar                    !\n");
                    printf("===================================================================\n");
                }
            } while (konfirmasiInformasiZodiak != 'y');
            break;
            
        case 2:
            do
            {
                printf("\n");
                printf("===================================================================\n");
                printf("-------------------------------PISCES------------------------------\n");
                printf("!   Pengertian Umum:                                              !\n");
                printf("!   Pisces diwakili oleh ikan, yang melambangkan imajinasi,       !\n");
                printf("!   kepekaan, dan spiritualitas. Pisces adalah tanda air yang     !\n");
                printf("!   menyoroti empati, kreativitas, dan kepekaan.                  !\n");
                printf("!                                                                 !\n");
                printf("!   Tanggal      : 19 Februari - 20 Maret.                        !\n");
                printf("!   Sifat        : Sensitif, intuitif, impian.                    !\n");
                printf("!   Kelebihan    : Empati, kreatif.                               !\n");
                printf("!   Kekurangan   : Mudah terpengaruh, mudah terombang-ambing.     !\n");
                printf("!   Cocok dengan : Cancer, Scorpio.                               !\n");
                printf("!   Tambahan     : Romantis, suka berdaya khayal.                 !\n");
                printf("===================================================================\n");
                printf("\n");

                printf("kembali ke menu? : ");
                scanf(" %c", &konfirmasiInformasiZodiak);
                while(getchar() != '\n'); // Membersihkan buffer input

                printf("\033[2J\033[1;1H");

                if (konfirmasiInformasiZodiak != 'y') {
                    printf("===================================================================\n");
                    printf("!                      Masukkan y untuk keluar                    !\n");
                    printf("===================================================================\n");
                }
            } while (konfirmasiInformasiZodiak != 'y');
            break;

        case 3:
            do
            {
                printf("\n");
                printf("===================================================================\n");
                printf("-------------------------------ARIES-------------------------------\n");
                printf("!   Pengertian Umum:                                              !\n");
                printf("!   Simbol zodiak ini adalah domba jantan, yang melambangkan      !\n");
                printf("!   kepemimpinan, keberanian, dan energi. Aries adalah tanda api  !\n");
                printf("!   yang mewakili awal, keberanian, dan semangat baru.            !\n");
                printf("!                                                                 !\n");
                printf("!   Tanggal      : 21 Maret - 19 April.                           !\n");
                printf("!   Sifat        : Energik, berani, impulsif.                     !\n");
                printf("!   Kelebihan    : Penuh semangat, berani mengambil risiko.       !\n");
                printf("!   Kekurangan   : Tidak sabar, mudah marah.                      !\n");
                printf("!   Cocok dengan : Libra, Leo.                                    !\n");
                printf("!   Tambahan     : Pemimpin alami, suka tantangan.                !\n");
                printf("===================================================================\n");
                printf("\n");

                printf("kembali ke menu? : ");
                scanf(" %c", &konfirmasiInformasiZodiak);
                while(getchar() != '\n'); // Membersihkan buffer input

                printf("\033[2J\033[1;1H");

                if (konfirmasiInformasiZodiak != 'y') {
                    printf("===================================================================\n");
                    printf("!                      Masukkan y untuk keluar                    !\n");
                    printf("===================================================================\n");
                }
            } while (konfirmasiInformasiZodiak != 'y');
            break;
        case 4:
            do
            {
                printf("\n");
                printf("===================================================================\n");
                printf("-------------------------------TAURUS------------------------------\n");
                printf("!   Pengertian Umum:                                              !\n");
                printf("!   Taurus adalah simbol sapi jantan, yg melambangkan kestabilan, !\n");
                printf("!   keteguhan, dan kenyamanan. Taurus adalah tanda bumi yang      !\n");
                printf("!   menggambarkan kepraktisan, kesabaran, dan keandalan.          !\n");
                printf("!                                                                 !\n");
                printf("!   Tanggal      : 20 April - 20 Mei.                             !\n");
                printf("!   Sifat        : Sabar, stabil, materialistis.                  !\n");
                printf("!   Kelebihan    : Keuletan, kepraktisan.                         !\n");
                printf("!   Kekurangan   : Kepala batu, keras kepala.                     !\n");
                printf("!   Cocok dengan : Virgo, Capricorn.                              !\n");
                printf("!   Tambahan     : Senang kenyamanan, stabil dalam hubungan.      !\n");
                printf("===================================================================\n");
                printf("\n");

                printf("kembali ke menu? : ");
                scanf(" %c", &konfirmasiInformasiZodiak);
                while(getchar() != '\n'); // Membersihkan buffer input

                printf("\033[2J\033[1;1H");

                if (konfirmasiInformasiZodiak != 'y') {
                    printf("===================================================================\n");
                    printf("!                      Masukkan y untuk keluar                    !\n");
                    printf("===================================================================\n");
                }
            } while (konfirmasiInformasiZodiak != 'y');
            break;
        case 5:
            do
            {
                printf("\n");
                printf("===================================================================\n");
                printf("-------------------------------GEMINI------------------------------\n");
                printf("!   Pengertian Umum:                                              !\n");
                printf("!   Simbolnya adalah kembar, yang mewakili dualitas dan           !\n");
                printf("!   kecerdasan. Gemini adalah tanda udara yang menggambarkan      !\n");
                printf("!   komunikasi, fleksibilitas, dan keterbukaan.                   !\n");
                printf("!                                                                 !\n");
                printf("!   Tanggal      : 21 Mei - 20 Juni.                              !\n");
                printf("!   Sifat        : Fleksibel, sosial, cerdas.                     !\n");
                printf("!   Kelebihan    : Adaptable, cerdas.                             !\n");
                printf("!   Kekurangan   : Cepat bosan, tidak konsisten.                  !\n");
                printf("!   Cocok dengan : Sagitarius, Aquarius.                          !\n");
                printf("!   Tambahan     : Penuh keingintahuan, pandai bicara.            !\n");
                printf("===================================================================\n");
                printf("\n");

                printf("kembali ke menu? : ");
                scanf(" %c", &konfirmasiInformasiZodiak);
                while(getchar() != '\n'); // Membersihkan buffer input

                printf("\033[2J\033[1;1H");

                if (konfirmasiInformasiZodiak != 'y') {
                    printf("===================================================================\n");
                    printf("!                      Masukkan y untuk keluar                    !\n");
                    printf("===================================================================\n");
                }
            } while (konfirmasiInformasiZodiak != 'y');
            break;
        case 6:
            do
            {
                printf("\n");
                printf("===================================================================\n");
                printf("-------------------------------CANCER------------------------------\n");
                printf("!   Pengertian Umum:                                              !\n");
                printf("!   Cancer diwakili oleh kepiting, yang melambangkan perlindungan !\n");
                printf("!   , emosi, dan kedalaman. Cancer adalah tanda air yang          !\n");
                printf("!   menyoroti kelembutan, kepekaan, dan perhatian.                !\n");
                printf("!                                                                 !\n");
                printf("!   Tanggal      : 21 Juni - 22 Juli.                             !\n");
                printf("!   Sifat        : Emosional, sensitif, protektif.                !\n");
                printf("!   Kelebihan    : Empati tinggi, perhatian.                      !\n");
                printf("!   Kekurangan   : Mudah terluka, mudah tersinggung.              !\n");
                printf("!   Cocok dengan : Scorpio, Pisces.                               !\n");
                printf("!   Tambahan     : Kuat dalam hubungan keluarga, artistik.        !\n");
                printf("===================================================================\n");
                printf("\n");

                printf("kembali ke menu? : ");
                scanf(" %c", &konfirmasiInformasiZodiak);
                while(getchar() != '\n'); // Membersihkan buffer input

                printf("\033[2J\033[1;1H");

                if (konfirmasiInformasiZodiak != 'y') {
                    printf("===================================================================\n");
                    printf("!                      Masukkan y untuk keluar                    !\n");
                    printf("===================================================================\n");
                }
            } while (konfirmasiInformasiZodiak != 'y');
            break;
        case 7:
            do
            {
                printf("\n");
                printf("===================================================================\n");
                printf("---------------------------------LEO-------------------------------\n");
                printf("!   Pengertian Umum:                                              !\n");
                printf("!   Leo adalah singa, simbol kekuatan, kebanggaan, dan keberanian.!\n");
                printf("!   Leo adalah tanda api yang mencerminkan kepemimpinan,          !\n");
                printf("!   kreativitas, dan keteguhan.                                   !\n");
                printf("!                                                                 !\n");
                printf("!   Tanggal      : 23 Juli - 22 Agustus.                          !\n");
                printf("!   Sifat        : Percaya diri, bersemangat, dominan.            !\n");
                printf("!   Kelebihan    : Karisma, kepemimpinan.                         !\n");
                printf("!   Kekurangan   : Egomaniak, suka pamer.                         !\n");
                printf("!   Cocok dengan : Aries, Sagitarius.                             !\n");
                printf("!   Tambahan     : Suka jadi pusat perhatian, setia.              !\n");
                printf("===================================================================\n");
                printf("\n");

                printf("kembali ke menu? : ");
                scanf(" %c", &konfirmasiInformasiZodiak);
                while(getchar() != '\n'); // Membersihkan buffer input

                printf("\033[2J\033[1;1H");

                if (konfirmasiInformasiZodiak != 'y') {
                    printf("===================================================================\n");
                    printf("!                      Masukkan y untuk keluar                    !\n");
                    printf("===================================================================\n");
                }
            } while (konfirmasiInformasiZodiak != 'y');
            break;
        case 8:
            do
            {
                printf("\n");
                printf("===================================================================\n");
                printf("--------------------------------VIRGO------------------------------\n");
                printf("!   Pengertian Umum:                                              !\n");
                printf("!   Virgo diwakili oleh seorang perawan, yang melambangkan        !\n");
                printf("!   kebersihan, ketelitian, dan analisis. Virgo adalah tanda bumi !\n");
                printf("!   yang menyoroti keteraturan, kerendahan hati, dan kepraktisan. !\n");
                printf("!                                                                 !\n");
                printf("!   Tanggal      : 23 Agustus - 22 September.                     !\n");
                printf("!   Sifat        : Analitis, perfeksionis, kritis.                !\n");
                printf("!   Kelebihan    : Rinci, praktis.                                !\n");
                printf("!   Kekurangan   : Terlalu kritis, khawatir berlebihan.           !\n");
                printf("!   Cocok dengan : Taurus, Capricorn.                             !\n");
                printf("!   Tambahan     : Peduli detail, suka membantu orang.            !\n");
                printf("===================================================================\n");
                printf("\n");

                printf("kembali ke menu? : ");
                scanf(" %c", &konfirmasiInformasiZodiak);
                while(getchar() != '\n'); // Membersihkan buffer input

                printf("\033[2J\033[1;1H");

                if (konfirmasiInformasiZodiak != 'y') {
                    printf("===================================================================\n");
                    printf("!                      Masukkan y untuk keluar                    !\n");
                    printf("===================================================================\n");
                }
            } while (konfirmasiInformasiZodiak != 'y');
            break;
        case 9:
            do
            {
                printf("\n");
                printf("===================================================================\n");
                printf("--------------------------------LIBRA------------------------------\n");
                printf("!   Pengertian Umum:                                              !\n");
                printf("!   Simbolnya adalah timbangan, yang melambangkan keadilan,       !\n");
                printf("!   keseimbangan, dan harmoni. Libra adalah tanda udara yang      !\n");
                printf("!   mencerminkan kerjasama, kecantikan, dan diplomasi.            !\n");
                printf("!                                                                 !\n");
                printf("!   Tanggal      : 23 September - 22 Oktober.                     !\n");
                printf("!   Sifat        : Harmonis, sosial, romantis.                    !\n");
                printf("!   Kelebihan    : Diplomatis, adil.                              !\n");
                printf("!   Kekurangan   : Indecisive, tidak tegas.                       !\n");
                printf("!   Cocok dengan : Gemini, Aquarius.                              !\n");
                printf("!   Tambahan     : Senang kesenangan, memperhatikan keseimbangan. !\n");
                printf("===================================================================\n");
                printf("\n");

                printf("kembali ke menu? : ");
                scanf(" %c", &konfirmasiInformasiZodiak);
                while(getchar() != '\n'); // Membersihkan buffer input

                printf("\033[2J\033[1;1H");

                if (konfirmasiInformasiZodiak != 'y') {
                    printf("===================================================================\n");
                    printf("!                      Masukkan y untuk keluar                    !\n");
                    printf("===================================================================\n");
                }
            } while (konfirmasiInformasiZodiak != 'y');
            break;
        case 10:
            do
            {
                printf("\n");
                printf("===================================================================\n");
                printf("-------------------------------SCORPIO-----------------------------\n");
                printf("!   Pengertian Umum:                                              !\n");
                printf("!   Scorpio adalah kalajengking, yang melambangkan intensitas,    !\n");
                printf("!   kekuatan, dan transformasi. Scorpio adalah tanda air yang     !\n");
                printf("!   menyoroti kecerdasan emosional, loyalitas, dan ketajaman.     !\n");
                printf("!                                                                 !\n");
                printf("!   Tanggal      : 23 Oktober - 21 November.                      !\n");
                printf("!   Sifat        : Intens, penuh misteri, posesif.                !\n");
                printf("!   Kelebihan    : Ketajaman, penuh semangat.                     !\n");
                printf("!   Kekurangan   : Penuh dendam, manipulatif.                     !\n");
                printf("!   Cocok dengan : Cancer, Pisces.                                !\n");
                printf("!   Tambahan     : Berhati-hati, suka mendalami.                  !\n");
                printf("===================================================================\n");
                printf("\n");

                printf("kembali ke menu? : ");
                scanf(" %c", &konfirmasiInformasiZodiak);
                while(getchar() != '\n'); // Membersihkan buffer input

                printf("\033[2J\033[1;1H");

                if (konfirmasiInformasiZodiak != 'y') {
                    printf("===================================================================\n");
                    printf("!                      Masukkan y untuk keluar                    !\n");
                    printf("===================================================================\n");
                }
            } while (konfirmasiInformasiZodiak != 'y');
            break;
        case 11:
            do
            {
                printf("\n");
                printf("===================================================================\n");
                printf("-----------------------------SAGITTARIUS---------------------------\n");
                printf("!   Pengertian Umum:                                              !\n");
                printf("!   Sagittarius diwakili oleh seorang pemanah, yang melambangkan  !\n");
                printf("!   petualangan, optimisme, dan kebebasan. Sagittarius adalah     !\n");
                printf("!   tanda api yang mencerminkan kebebasan, pengetahuan, dan       !\n");
                printf("!   semangat petualangan.                                         !\n");
                printf("!                                                                 !\n");
                printf("!   Tanggal      : 22 November - 21 Desember.                     !\n");
                printf("!   Sifat        : Petualang, optimis, filosofis.                 !\n");
                printf("!   Kelebihan    : Berani, jujur.                                 !\n");
                printf("!   Kekurangan   : Tidak sabar, kurang konsisten.                 !\n");
                printf("!   Cocok dengan : Aries, Leo.                                    !\n");
                printf("!   Tambahan     : Suka belajar, independen.                      !\n");
                printf("===================================================================\n");
                printf("\n");

                printf("kembali ke menu? : ");
                scanf(" %c", &konfirmasiInformasiZodiak);
                while(getchar() != '\n'); // Membersihkan buffer input

                printf("\033[2J\033[1;1H");

                if (konfirmasiInformasiZodiak != 'y') {
                    printf("===================================================================\n");
                    printf("!                      Masukkan y untuk keluar                    !\n");
                    printf("===================================================================\n");
                }
            } while (konfirmasiInformasiZodiak != 'y');
            break;
        case 12:
            do
            {
                printf("\n");
                printf("===================================================================\n");
                printf("------------------------------CAPRICORN----------------------------\n");
                printf("!   Pengertian Umum:                                              !\n");
                printf("!   Capricorn diwakili oleh kambing jantan, yang melambangkan     !\n");
                printf("!   ambisi, disiplin, dan tanggung jawab. Capricorn adalah tanda  !\n");
                printf("!   bumi yang menyoroti kesuksesan, keteguhan, dan konservatisme. !\n");
                printf("!                                                                 !\n");
                printf("!   Tanggal      : 22 Desember - 19 Januari.                      !\n");
                printf("!   Sifat        : Ambisius, praktis, konservatif.                !\n");
                printf("!   Kelebihan    : Bertanggung jawab, disiplin.                   !\n");
                printf("!   Kekurangan   : Dingin, terlalu serius.                        !\n");
                printf("!   Cocok dengan : Taurus, Virgo.                                 !\n");
                printf("!   Tambahan     : Fokus pada tujuan, suka tradisi.               !\n");
                printf("===================================================================\n");
                printf("\n");

                printf("kembali ke menu? : ");
                scanf(" %c", &konfirmasiInformasiZodiak);
                while(getchar() != '\n'); // Membersihkan buffer input

                printf("\033[2J\033[1;1H");

                if (konfirmasiInformasiZodiak != 'y') {
                    printf("===================================================================\n");
                    printf("!                      Masukkan y untuk keluar                    !\n");
                    printf("===================================================================\n");
                }
            } while (konfirmasiInformasiZodiak != 'y');
    }

}

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
        // Membersihkan newline yang masih tersisa di buffer
        while (getchar() != '\n');

        printf("Masukkan kesukaan: ");
        scanf("%[^\n]", data[*jumlah_data].favorit);

        printf("\033[2J\033[1;1H"); 

        printf("\n===================================================================\n");
        printf("!   Data yang telah dimasukkan:                                   !\n");
        printf("!   Nama          : %-43s   !\n", data[*jumlah_data].nama);
        printf("!   Tanggal Lahir : %02d/%02d/%d %-34s !\n", data[*jumlah_data].tanggal_lahir.hari, data[*jumlah_data].tanggal_lahir.bulan, data[*jumlah_data].tanggal_lahir.tahun, ""); // 19s untuk mengakomodasi tulisan "Tanggal Lahir : "
        printf("!   Alamat        : %-43s   !\n", data[*jumlah_data].alamat);
        printf("!   Deskripsi     : %-43s   !\n", data[*jumlah_data].deskripsi);
        printf("!   Kesukaan      : %-43s   !\n", data[*jumlah_data].favorit);
        printf("===================================================================\n");

        printf("Apakah data di atas sudah benar? (y/n): ");
        scanf(" %c", &konfirmasi);

        printf("\033[2J\033[1;1H"); 

        // Membersihkan newline yang masih tersisa di buffer
        while (getchar() != '\n');

        if (konfirmasi != 'y') {
            printf("===================================================================\n");
            printf("!                  Silakan masukkan data kembali!                 !\n");
            printf("===================================================================\n");
        }
    } while (konfirmasi != 'y');

    
    (*jumlah_data)++; // menambah untuk data baru ke-n
}

// Prosedur untuk menampilkan semua data yang telah dimasukkan
void tampilkanData(struct Person data[], int jumlah_data, struct Tanggal tanggalSekarang) {
    printf("===================================================================\n");
    printf("!             Daftar Tanggal Lahir Teman                          !\n");
    printf("===================================================================\n");
    for (int i = 0; i < jumlah_data; i++) {
        int usia = hitungUsia(data[i].tanggal_lahir, tanggalSekarang); // Hitung usia menggunakan fungsi hitungUsia
        printf("!   Data ke-%-3d                                                   !\n", i + 1); // 3d berarti bagiannya 3 karakter minimal
        printf("!   Nama          : %-43s   !\n", data[i].nama); // 30s berartikan dia akan menetapkan minimal 30 karakter yang otomatis tercetak, walaupun ada yang tidak terisi
        printf("!   Tanggal Lahir : %02d/%02d/%d %-32s   !\n", data[i].tanggal_lahir.hari, data[i].tanggal_lahir.bulan, data[i].tanggal_lahir.tahun, ""); // 19s untuk mengakomodasi tulisan "Tanggal Lahir : "
        printf("!   Usia          : %-4d tahun                                    !\n", usia); // Menampilkan usia
        printf("!   Zodiak        : %-43s   !\n", tentukanZodiak(data[i].tanggal_lahir));
        printf("!   Alamat        : %-43s   !\n", data[i].alamat);
        printf("!   Deskripsi     : %-43s   !\n", data[i].deskripsi);
        printf("!   Kesukaan      : %-43s   !\n", data[i].favorit);
        printf("===================================================================\n");
    }
}

// fungsi utama dari program ini!
int main() {
    struct Person data[200];
    int jumlah_data = 0;
    int pilihanMenu;
    int pilihanZodiak;
    char lanjutInformasi;
    struct Tanggal tanggalSekarang; // Deklarasi tanggalSekarang di awal main

    printf("\n===================================================================\n");
    printf("!          Selamat Datang Di Daftar Tahun Lahir Teman             !\n");
    printf("!                Memori yang Tak Tergantikan                      !\n");
    printf("!           Simpanlah Tahun Lahir Teman Anda di Sini              !\n");
    printf("===================================================================\n");

    printf("\nMasukkan tanggal sekarang (format dd/mm/yyyy): "); // Meminta tanggal sekarang di sini
    scanf("%d/%d/%d", &tanggalSekarang.hari, &tanggalSekarang.bulan, &tanggalSekarang.tahun); // 26/04/2024
    // Membersihkan buffer input
    while (getchar() != '\n');

    // Membersihkan layar
    printf("\033[2J\033[1;1H"); 

    // pemilihan menu
    do {
        int pilihanMenu = 0; // Inisialisasi dengan nilai yang tidak valid
        do {
            printf("\n===================================================================\n");
            printf("!    Pilih Yang Akan Dilakukan:                                   !\n");
            printf("!    1. Masukkan informasi teman                                  !\n");
            printf("!    2. Tampilkan informasi teman                                 !\n");
            printf("!    3. Informasi zodiak                                          !\n");
            printf("!    4. Selesaikan program                                        !\n");
            printf("===================================================================\n");  
    
    printf(" Pilihan: ");
    char input[100]; // Membuat buffer untuk input karakter

    if (fgets(input, sizeof(input), stdin)) { // Membaca input sebagai string
        input[strcspn(input, "\n")] = 0; // Menghapus karakter newline dari input
        
        // membersihkan layar lagi
        printf("\033[2J\033[1;1H"); 
        
        if (isdigit(input[0])) { // Memeriksa apakah karakter pertama adalah digit KONDISI ANGKA
            pilihanMenu = atoi(input); // Mengonversi string menjadi integer
            if (pilihanMenu < 1 || pilihanMenu > 4) {
                printf("===================================================================\n");
                printf("!            Input tidak valid! Harap masukkan angka 1-4.         !\n");
                printf("===================================================================\n");
            }
        } else { // KONDISI 
            printf("===================================================================\n");
            printf("!              Input tidak valid! Harap masukkan angka 1-4.       !\n");
            printf("===================================================================\n");
        }
    }
    } while (pilihanMenu < 1 || pilihanMenu > 4);

        // membersihkan layar
        printf("\033[2J\033[1;1H"); 

        // sudah pilihan pasti 1-4
        switch (pilihanMenu) {
            case 1:
                simpanData(data, &jumlah_data);
                break;
            case 2:
                if (jumlah_data > 0) {
                    tampilkanData(data, jumlah_data, tanggalSekarang); // Panggil tampilkanData di sini
                do {
                printf("\nApakah Anda ingin kembali ke menu? (y): ");
                scanf(" %c", &lanjutInformasi);
                while(getchar() != '\n');

                printf("\033[2J\033[1;1H"); 

                if (lanjutInformasi != 'y') {
                    printf("\n=============================================================================\n");
                    printf("!                Masukkan tidak valid. Silahkan Masukkan y                  !\n");
                    printf("=============================================================================\n");
                 }
                } while (lanjutInformasi != 'y');

                } else {
                    printf("\n===================================================================\n");
                    printf("!                Belum ada data yang dimasukkan.                  !\n");
                    printf("===================================================================\n");
                }
                break;
            case 3:                
                // membersihkan layar 
                printf("\033[2J\033[1;1H");
                printf("\n===================================================================\n");
                printf("!    Pilih zodiak yang ingin Anda ketahui informasinya:           !\n");
                printf("!    1. Aquarius                                                  !\n");
                printf("!    2. Pisces                                                    !\n");
                printf("!    3. Aries                                                     !\n");
                printf("!    4. Taurus                                                    !\n");
                printf("!    5. Gemini                                                    !\n");
                printf("!    6. Cancer                                                    !\n");
                printf("!    7. Leo                                                       !\n");
                printf("!    8. Virgo                                                     !\n");
                printf("!    9. Libra                                                     !\n");
                printf("!   10. Scorpio                                                   !\n");
                printf("!   11. Sagitarius                                                !\n");
                printf("!   12. Capricon                                                  !\n");
                printf("===================================================================\n");

                do {
                    printf(" Pilihan: ");
                    scanf("%d", &pilihanZodiak);
                    // Membersihkan buffer input
                    while(getchar() != '\n');
                    
                    if (pilihanZodiak < 1 || pilihanZodiak > 12) {
                        printf("\n===================================================================\n");
                        printf("!  Pilihan tidak valid. Harap masukkan angka antara 1 hingga 12.  !\n");
                        printf("===================================================================\n");
                    }
                } while (pilihanZodiak < 1 || pilihanZodiak > 12);
                printf("\033[2J\033[1;1H");
                tampilkanInformasiZodiak(pilihanZodiak);
                break;

            case 4:
                printf("\n===================================================================\n");
                printf("!           Terima Kasih Telah Menggunakan Aplikasi Kami          !\n");
                printf("!                         Projek Goku 2024                        !\n");
                printf("!            Projek Akhir Algoritma dan Struktur Data             !\n");
                printf("===================================================================\n");
                return 0;
        }
    } while(pilihanMenu !=4);

    printf("\n");

    return 0;
}