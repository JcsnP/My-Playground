#include <bits/stdc++.h>

int main(){
    int arr[42] = {}, result = 0;
    
    for(int i = 0; i < 10; i++){
        int n;
        std::cin >> n;
        int index = n % 42;
        arr[index] = 1;
    }
    
    for(int i = 0; i < 42; i++){
        if(arr[i] == 1) result += 1;
    }
    
    std::cout << result;
}
