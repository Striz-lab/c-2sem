

    void my_slightly_less_dumb_reallocation(int** source, unsigned int n_old, unsigned int n_new){
        
        
        if (*source != NULL and n_new != 0){
            int *a = new int[n_new];
            if (n_old > n_new)
                for (int i = 0; i < n_new; i++)
                    a[i] = *(*(source) + i);
            else
                for (int i = 0; i < n_old; i++)
                    a[i] = *(*(source) + i);
            delete[] *source;
            *source = a;
        }
        else if (*source == NULL and n_new != 0)
            *source = new int[n_new];
        else if (n_new == 0){
            delete[] *source;
            *source = NULL;
        }
    }
