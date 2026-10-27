#include <cmath>
const double PI = 3.1415926;

//圆形面积
double YuanSquare_R(int r) { return PI * r * r; }           // 半径算面积
double YuanSquare_B(int b) { return PI * b * b / 4; }        // 直径算面积
double YuanSquare_C(int C) { return (double)(C * C) / (4 * PI); } // 周长算面积
double YuanSquare_S(int S) { return S; }                     // 面积就是面积（原值返回，方便统一接口）

//圆形周长
double YuanCircumference_R(int r) { return 2 * PI * r; }     // 半径算周长
double YuanCircumference_B(int b) { return b * PI; }         // 直径算周长
double YuanCircumference_S(int S) {                           // 面积算周长
    if (S < 0) return 0;
    return 2 * sqrt(PI * S);
}
double YuanCircumference_C(int C) { return C; }               // 周长就是周长（原值返回，统一接口）

//矩形面积
double JuXingSquare_A_B(int A, int B) { return A * B; }       // 长宽算面积
double JuXingSquare_C(int C) {                                // 正方形周长算面积
    double a = C / 4.0;
    return a * a;
}

//矩形周长
double JuXingCircumference_A_B(int A, int B) { return 2 * (A + B); } // 长宽算周长
double JuXingCircumference_S(int S, int A) {                         // 面积+一边算周长（S=面积，A=已知边长）
    if (A <= 0) return 0;
    double B = (double)S / A;
    return 2 * (A + (int)B);
}
double JuXingCircumference_C(int C) { return C; }            // 周长原值返回

//正方形专用
double ZhengFangXingSquare_A(int A) { return A * A; }        // 边长算面积
double ZhengFangXingCircumference_A(int A) { return 4 * A; } // 边长算周长
double ZhengFangXingSquare_S(int S) {                         // 面积算边长（开方）
    if (S < 0) return 0;
    return sqrt(S);
}
double ZhengFangXingCircumference_S(int S) {                   // 面积算周长
    if (S < 0) return 0;
    return 4 * sqrt(S);
}