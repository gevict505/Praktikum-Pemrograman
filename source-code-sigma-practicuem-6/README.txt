SOURCE CODE PRAKTIKUM 6 - MENGEMBANGKAN FUNGSI-FUNGSI SENDIRI
Glen Victory Sihombing - NRP 3226600070

Cara kompilasi di terminal VS Code (gcc / MinGW):
  gcc -Wall -Wextra -std=c99 NAMA_FILE.c -o NAMA_FILE
  Windows : .\NAMA_FILE.exe
  Linux/Mac: ./NAMA_FILE

Khusus p01_fungsi_standar.c di Linux/Mac tambahkan -lm:
  gcc -Wall -Wextra -std=c99 p01_fungsi_standar.c -o p01_fungsi_standar -lm

Daftar file:
  p01 .. p15  = Percobaan 1 sampai 15
  t61a, t61b  = Tugas 6.1 (kabisat, factorial)
  t62         = Tugas 6.2 (permutasi, kombinasi)
  t63         = Tugas 6.3 (suhu)
  t64a, t64b  = Tugas 6.4 (prima, register vs integer)

Catatan:
- Jangan dikompilasi dengan -O2 untuk t64b, karena perulangan kosong dihapus compiler.
- Pada Windows, long int berukuran 32 bit, jadi batas faktorial (t61b, t62) adalah n = 12.
