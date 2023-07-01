#include<bits/stdc++.h>
#define MaxSize 10

using namespace std;

typedef struct{
    int data[MaxSize];
    int length;
}SqList;

void InitList(SqList &L){
    for(int i = 0;i<MaxSize; i++){
        L.data[i]=0;
    }
    L.length=0;
}
bool ListInsert(SqList &L,int i,int e){
    if(i<1||i>L.length+1)
        return false;
    if(L.length>=MaxSize)
        return false;

    for(int j = L.length; j>=i; j--){
        L.data[j]=L.data[j-1];
    }
    L.data[i-1] = e;
    L.length++;
    return true;
}

bool ListDelete(SqList &L,int i,int &e){//注意引用符号
    if(i<1||i>L.length){
        return false;
    }
    e = L.data[i-1];
    for(int j = i;j<L.length;j++)
        L.data[j-1] = L.data[j];
    L.length--;
    return true;
}

int main(){
    SqList L;
    InitList(L);
    ListInsert(L,2,3);

    int e = -1;
    if(ListDelete(L,3,e)){
        printf("已删除第三个元素，删除的元素值为%d\n",e);
    }
    else 
    printf("位序i不合法，删除失败！");
    return 0;
}