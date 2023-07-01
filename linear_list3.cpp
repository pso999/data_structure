#include<bits/stdc++.h>

#define InitSize 10
using namespace std;

typedef struct{
    int *data;
    int length;
    int MaxSize;
}SeqList;

void InitList(SeqList &L){
    L.data = (int *)malloc(InitSize*sizeof(int));
    L.length = 0;
    L.MaxSize = InitSize;
}
int GetElem(SeqList &L,int i){
    return L.data[i-1];
}
//安值查找
int LocateElem(SeqList &L,int e){
    for(int i=0;i<L.length;i++){
        if(L.data[i]==e){
            return i+1;
        }
        
    }
    return 0;

}


