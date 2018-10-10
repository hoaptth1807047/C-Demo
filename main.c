#include <stdio.h>
#include<stdlib.h>
#include <math.h>

double tinhNuaChuViTamGiac(double canhThuNhat, double canhThuHai, double canhThuBa) {
    return (canhThuNhat + canhThuHai + canhThuBa) / 2;
}

int main() {
    double canhThuNhat, canhThuHai, canhThuBa;
    printf("Vui lòng nhập cạnh thứ nhất:\n");
    scanf("%lf", &canhThuNhat);
    printf("Vui lòng nhập cạnh thứ hai:\n");
    scanf("%lf", &canhThuHai);
    printf("Vui lòng nhập cạnh thứ ba:\n");
    scanf("%lf", &canhThuBa);
    if (canhThuNhat <= 0 || canhThuHai <= 0 || canhThuNhat <= 0) {
        printf("Độ dài một cạnh không thể nhỏ hơn bằng 0.\n");
    } else if (canhThuNhat + canhThuHai <= canhThuBa || canhThuNhat + canhThuBa <= canhThuHai ||
               canhThuHai + canhThuBa <= canhThuNhat) {
        printf("Tổng hai cạnh của một tam giác luôn phải lớn hơn cạnh còn lại (Theo bất đẳng thức tam giác)\n");
    } else {
        printf("Nửa chu vi tam giác là: %.2lf", tinhNuaChuViTamGiac(canhThuNhat, canhThuHai, canhThuBa));
    }
    return 0;
}