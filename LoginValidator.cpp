#include "LoginValidator.h"
#include "FileManager.h"
#include <iostream>
#include <fstream>  // دي المكتبة المسؤولة عن الـ ifstream والـ ofstream
#include <string>   // دي المكتبة المسؤولة عن دالة getline

using namespace std;
// في ملف LoginValidator.cpp
bool LoginValidator::validateCustomerLogin(string uname, string pass) {
    ifstream file("D:\\my projects\\New folder\\final project\\x64\\users.txt");
    string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            // تقسيم السطر للحصول على اليوزر والباسورد
            size_t firstComma = line.find(',');
            size_t lastComma = line.find_last_of(',');

            if (firstComma != string::npos && lastComma != string::npos) {
                string savedUname = line.substr(0, firstComma);
                string savedPass = line.substr(firstComma + 1, lastComma - firstComma - 1);

                // مقارنة البيانات المدخلة بالمخزنة
                if (uname == savedUname && pass == savedPass) {
                    file.close();
                    return true; // وجدنا تطابق!
                }
            }
        }
        file.close();
    }
    return false; // ملقاش أي تطابق في كل السطور
}