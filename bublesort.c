#include <stdio.h>

// buble sort

int main(void)

// i 1번 시행시 array[i] 의 값이 3가지 경우의 수 중 1개 최소값,  최값값 , 일반값 => 젤왼쪽이냐 젤오른쪽이냐, 제외한 위치이냐
// 제일왼쪽 , 제일오른쪽에 위치하면 다음시행에 영향을 가하지않음 , 제외한 위치이면 다음시행에서 같은논리로 시행이 무조건 되어야함
{
    int aList[5] = {30,40,10,50,20};
    int i = 0 , j = 0, nTmp = 0;

    for (i=0; i<4; ++i){
        for (j=i+1; j<5; ++j){
            if(aList[i]>aList[j]){
                nTmp = aList[i];
                aList[i] = aList[j];
                aList[j] = nTmp;
            }
        }
        
    }
    // 출력부분
    for (i=0; i <5; ++i)
        printf("%d\t", aList[i]);
        return 0;
   
}

