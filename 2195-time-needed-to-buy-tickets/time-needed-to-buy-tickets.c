int timeRequiredToBuy(int* a, int n, int k) {
    int count = 0;
    int i = 0;
    while (a[k] > 0)
     {
        if (a[i] > 0) {
            a[i]--;
            count++;
        }
        i = (i + 1) % n;
    }
    return count;

}