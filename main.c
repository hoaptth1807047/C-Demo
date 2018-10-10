#include <stdio.h>
#include<stdlib.h>

float tinhTienLuongThang13(float soNamKinhNghiem, float soNamLamViec) {
    float mucThuong;
    float heSo;
    if (soNamKinhNghiem < 2) {
        mucThuong = 10000000;
    } else if (soNamKinhNghiem > 2 && soNamKinhNghiem <= 5) {
        mucThuong = 20000000;
    } else {
        mucThuong = 30000000;
    }
    if (soNamLamViec < 1) {
        heSo = 0.3;
    } else if (soNamLamViec > 1 && soNamLamViec <= 2) {
        heSo = 0.5;
    } else if (soNamLamViec > 2 && soNamLamViec <= 5) {
        heSo = 1;
    } else {
        heSo = 2;
    }
    return mucThuong * heSo;
}

int main() {
    float soNamKinhNghiem;
    float soNamLamViec;
    char luachon;
    while (1 == 1) {
        printf("Vui lòng nhập số năm kinh nghiệm: \n");
        scanf("%f", &soNamKinhNghiem);
        printf("Vui lòng nhập số năm làm việc: \n");
        scanf("%f", &soNamLamViec);
        printf("Số tiền thưởng tháng 13 là: %.2f\n", tinhTienLuongThang13(soNamKinhNghiem, soNamLamViec));
        printf("Bạn có muốn tính toán thêm không (y/n)?: ");
        scanf("%s", &luachon);
        if (luachon == 'n' || luachon == 'N') {
            printf("Hẹn gặp lại.");
            break;
        }
    }
    return 0;
}