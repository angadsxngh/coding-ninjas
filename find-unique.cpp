int findUnique(int *arr, int size)
{
    for(int i=0; i<size;i++){
        int j=0;
        for(j; j<size; j++){
          if (i != j && arr[i] == arr[j]) {
            break;
          }
        }
            if(j==size){
                return arr[i];
            }
            }
        }
    

