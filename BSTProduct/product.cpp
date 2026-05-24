#include "product.hpp"

int Product::cCode = 0;

Product::Product() {
    code = ++cCode;
    qta = 0;
    price = 0;
}

Product::Product(int qta, double price) {
    code = ++cCode;
    this->qta = qta > 0 ? qta : 0;
    this->price = price > 0 ? price : 0;
}

int Product::getCode() {
    return code;
}

int Product::getQta() {
    return qta;
}

double Product::getPrice() {
    return price;
}