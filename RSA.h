#ifndef _RSA_H
#define _RSA_H

int gcd(int a, int b);

class RSA{
    public:
        RSA();
        void printKeys();
        int encrypt(int data, int key);
        int decrypt(int data, int key);
        int decrypt(int data);
        int getE();
        int getD();
    private:
        int e;
        int d;
        int modulus;
        void getKeys();
};

#endif
