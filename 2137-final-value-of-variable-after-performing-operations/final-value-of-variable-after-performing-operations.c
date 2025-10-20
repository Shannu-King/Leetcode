int finalValueAfterOperations(char** o, int os) {
    int sum=0;
    for (int i = 0; i < os; i++) {
        if ((strcmp(o[i], "X++") == 0)||(strcmp(o[i],"++X")==0))
            sum += 1;
        else if ((strcmp(o[i], "X--") == 0)||(strcmp(o[i],"--X")==0))
            sum -= 1;
    }
    return sum;
}