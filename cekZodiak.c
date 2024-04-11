#include <stdio.h>

int main() {
    int tanggal, bulan;

    // Meminta pengguna memasukkan tanggal lahir
    printf("Masukkan tanggal lahir (contoh: 25): ");
    scanf("%d", &tanggal);

    // Meminta pengguna memasukkan bulan lahir
    printf("Masukkan bulan lahir (contoh: 8 untuk Agustus): ");
    scanf("%d", &bulan);

    // Menentukan zodiak berdasarkan tanggal dan bulan
    if ((bulan == 3 && tanggal >= 21) || (bulan == 4 && tanggal <= 19)) {
        printf("Zodiak Anda adalah Aries.\n");
    } else if ((bulan == 4 && tanggal >= 20) || (bulan == 5 && tanggal <= 20)) {
        printf("Zodiak Anda adalah Taurus.\n");
    } else if ((bulan == 5 && tanggal >= 21) || (bulan == 6 && tanggal <= 20)) {
        printf("Zodiak Anda adalah Gemini.\n");
    } else if ((bulan == 6 && tanggal >= 21) || (bulan == 7 && tanggal <= 22)) {
        printf("Zodiak Anda adalah Cancer.\n");
    } else if ((bulan == 7 && tanggal >= 23) || (bulan == 8 && tanggal <= 22)) {
        printf("Zodiak Anda adalah Leo.\n");
    } else if ((bulan == 8 && tanggal >= 23) || (bulan == 9 && tanggal <= 22)) {
        printf("Zodiak Anda adalah Virgo.\n");
    } else if ((bulan == 9 && tanggal >= 23) || (bulan == 10 && tanggal <= 22)) {
        printf("Zodiak Anda adalah Libra.\n");
    } else if ((bulan == 10 && tanggal >= 23) || (bulan == 11 && tanggal <= 21)) {
        printf("Zodiak Anda adalah Scorpio.\n");
    } else if ((bulan == 11 && tanggal >= 22) || (bulan == 12 && tanggal <= 21)) {
        printf("Zodiak Anda adalah Sagittarius.\n");
    } else if ((bulan == 12 && tanggal >= 22) || (bulan == 1 && tanggal <= 19)) {
        printf("Zodiak Anda adalah Capricorn.\n");
    } else if ((bulan == 1 && tanggal >= 20) || (bulan == 2 && tanggal <= 18)) {
        printf("Zodiak Anda adalah Aquarius.\n");
    } else if ((bulan == 2 && tanggal >= 19) || (bulan == 3 && tanggal <= 20)) {
        printf("Zodiak Anda adalah Pisces.\n");
    } else {
        printf("Masukkan tanggal atau bulan yang valid.\n");
    }

    return 0;
}