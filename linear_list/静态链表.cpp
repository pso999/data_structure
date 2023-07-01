//单链表：各个节点在内存中星罗棋布，散落天涯
//静态链表：分配一整片连续的存储空间，各个结点集中安置
//游标设置：充当指针，为-1时表示以达到表尾
#include<bits/stdc++.h>

using namespace std;
#define MaxSize 10

struct Node{
    int data;
    int next; //下一个元素的数组下标
};
typedef struct Node SLinkList[MaxSize];

void testSLinkList(){
    struct Node a[MaxSize];// or SLinkList a;
}

//初始化，查找O(N)--- 初始化时要将所有结点的next进行统一初始化，避免脏数据的影响

//位序为i的结点：1.找到一个空结点，存入数据元素
//  2. 从头结点出发找到位序为i-1的结点
//  3. 修改新结点的next
//  4. 修改i-1号的next
// 删除某个结点：1. 从头结点出发找到前驱节点
//  2. 修改前驱结点的游标
//  3. 被修改结点的next设为-2

//静态链表：数组的方式实现
// 优点：增删操作不需大量移动元素
// 缺点：不能随机存取，只能从头结点依次后查
//找；容量固定不变
//适用场景：1.不支持指针的低级语言2. 数据元素数量固定不变的场景（如操作系统的文件分配表FAT)
