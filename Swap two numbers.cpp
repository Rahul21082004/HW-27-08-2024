void swapNumbers(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
