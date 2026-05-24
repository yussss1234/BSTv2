#ifndef PRODUCT_H
#define PRODUCT_H

class Product{

    private:
        static int cCode;
        int code;
        int qta;
        double price;

    public:
        Product();
        Product(int qta, double price);

        int getCode();
        int getQta();
        double getPrice();

};

#endif // PRODUCT_H
