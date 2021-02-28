#include<bits/stdc++.h>
using namespace std;

// ****** Linear Search *****

int LinearSearch(int arr[],int x){
    int i;
    for(i=0;i<10;i++){
        if(x == arr[i])
        {
            return i;
        }
    }
    return -1;

}
int main()
{
    int a[] = {10, 55, 12, 56, 88, 29, 100, 77, 90, 47};
    int x;
    scanf("%d",&x);

    int p;
    p = LinearSearch(a,x);

    if(p!=-1){
        printf("It is Found at %d\n",p);
    } else{
        printf("NOT FOUND !!\n",p);

    }







    return 0;
}
