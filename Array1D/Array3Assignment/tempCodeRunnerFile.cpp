  for(int i=k; i<n; i++){
            for(int j=k+1; j<n; j++){
                int temp  = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }