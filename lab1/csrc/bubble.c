void bubble_sort(int *arr,int n){
    
    for(int i=0;i<n;i++){
        int flag= 1;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                flag = 0;
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
            
        }
        if(flag)
            break;
    }
}

int main(){
    int nums[10];
    nums[0] = 1;
    nums[1] = 4;
    nums[2] = 2;
    nums[3] = 8;
    nums[4] = 5;
    nums[5] = 7;
    nums[6] = 6;
    nums[7] = 3;
    nums[8] = 9;
    nums[9] = 10;
    bubble_sort(nums,10);
    for (int i = 1; i <= 10; ++i) {
    *(int *)(i * 4) = nums[i - 1];
  }
}
