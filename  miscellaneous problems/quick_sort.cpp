int partition(int *a, int s, int e){
    int i = s-1;
    int x = a[e];

    for(int j=s; j<e; j++){
        if(a[j]<=x){
            i++;
            swap(a[j], a[i]);
        }
    }

    swap(a[i+1], a[e]);
    return i+1;
}

void quickSort(int *a, int s, int e){
    if(s>=e){
        return;
    }

    int p = partition(a, s, e);
    quickSort(a, s, p-1);
    quickSort(a, p+1, e);
    // tail recursion
}