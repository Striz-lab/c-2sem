unsigned int count_total_mice_amount(Cat* cats, unsigned int n){
    int s = 0;
    for (int j = 0; j < n; j++){
        s = s + cats[j].mice_caught;
    }
    return s;
}
