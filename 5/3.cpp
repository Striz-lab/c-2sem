
void my_personal_swap(int* a, int* b){
    if ((a != NULL) and (b != NULL)){
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
    }
    
}
