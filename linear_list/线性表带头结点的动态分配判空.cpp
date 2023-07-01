#include<bits/stdc++.h>

using namespace std;

typedef struct LNode{//定义单链表节点类型
    int data;  //每个节点存放一个数据元素
    struct LNode *next; //指针指向下一个节点
}LNode,*LinkList;

//声明一个新节点的指向链表的头部两种方式
LNode *L1;
LinkList L2;//指向单链表的头部

bool InitList(LinkList &L){//不带头节点
    L  =NULL;
    return true;
}
//初始化 带头节点
bool InitList2(LinkList &L){
    L = (LNode *) malloc(sizeof(LNode));//分配一个头节点
    if (L==NULL){return false;}//内存不足分配失败
    L->next = NULL;
    return true;
}
//判断是否为空
bool empty(LinkList L){
    if(L == NULL)//if(L->next == NULL)
        return true;
    else
        return false;
}


int main(){
    LinkList L;//此处并没有创建一个节点
    InitList(L);
}



