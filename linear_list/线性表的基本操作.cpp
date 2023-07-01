#include<bits/stdc++.h>
#define MaxSize 10
#define InitSize 10
using namespace std;

//线性表的一些基本操作：InitList(&L),DestroyList(&L),
//ListInsert(&L,i,e),ListDelete(&L,i),LocateElem(L,e)
//GetElem(L,i),Length(L),PrintList(L),Empty(L)
typedef struct{
    int data[MaxSize];//静态分配顺序表
    int length;
}Sqlist;

typedef struct{
    int *data;//Elemtype *data 动态进行空间分配
    int MaxSize1;//顺序表的最大容量
    int length;
}SeqList;

//函数 
//C---malloc,free函数
//L.data = (ElemType *)malloc(sizeof(ElemType) * InitSize);
//基本操作---初始化一个顺序表,静态的形式进行初始化
void InitList(Sqlist &L){
    for(int i=0;i<MaxSize;i++){
        L.data[i]=0;
    }
    L.length = 0;
}
//动态分配
void InitList2(SeqList &L){
    //用malloc 函数申请一片连续的空间
    L.data = (int *)malloc(InitSize * sizeof(int));
    L.length = 0;
    L.MaxSize1=InitSize;
}
//增加动态数组的长度
void IncreaseSize(SeqList &L,int len){
    int *p = L.data;
    L.data = (int *)malloc((L.MaxSize1+len)*sizeof(int));
    for(int i = 0; i < L.length; i++){
        L.data[i]=p[i];//将数据复制到新区域
    }
    L.MaxSize1 = L.MaxSize1 + len;
    free(p);
}


int main(){
    Sqlist L;
    InitList(L);
    SeqList L2;
    InitList2(L2);
    //....顺序表的插入等操作
    IncreaseSize(L2,5);
    return 0;

}

