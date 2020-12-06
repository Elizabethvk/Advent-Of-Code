#include <iostream>

int main(){
  int start = 0;
  int middle=0;
  int endMe = 0;
  int sum=0;
  int array[200]={0};

  for(int i=0; i<200; ++i){
    std::cin >> array[i];
    //std::cout<< "HA: " << array[i];
  }
  
  for(int i=0; i<200; ++i){
    start = array[i];
    for(int j=0; j<200; ++j){
        middle = array[j];
        for(int k=0; k<200; ++k){
            endMe = array[k];
            sum = start + middle + endMe;
            if (sum == 2020){
                std::cout<< start << "   " << middle << "   " << endMe << "towa - > " << (start*middle*endMe)<< " < - tuk " << std::endl ;
                break;
            }
            sum = 0;

        }
    }
  }  
}
