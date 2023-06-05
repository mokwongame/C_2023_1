#include "h_ClassLinkedInsertDelete.h"

int main()
{
    // 연결자료구조 삽입, 삭제 클래스 변수 선언
    ClassLinkedInsertDelete classLinkedInsertDelete;

    linkedList_h* L;
    listNode* old;
    listNode* pre;

    
    L = classLinkedInsertDelete.createLinkedList_h();
    printf("(1) 공백 리스트 생성하기! \n");
    classLinkedInsertDelete.printList(L); getchar();   // L = ()

    printf("(2) 리스트에 3개의 노드('화','목','금') 추가하기! \n");
    classLinkedInsertDelete.insertLastNode(L, "화");
    classLinkedInsertDelete.insertLastNode(L, "목");
    classLinkedInsertDelete.insertLastNode(L, "금");
    classLinkedInsertDelete.printList(L); getchar();  // L = ( 화, 목, 금)

    printf("(3) 첫번째 노드에 '월' 삽입! \n");
    classLinkedInsertDelete.insertFirstNode(L, "월");
    classLinkedInsertDelete.printList(L); getchar();  // L = (월, 화, 목, 금)

    printf("(4) '화', '목' 사이에 '수' 중간 노드 삽입! \n");
    pre = classLinkedInsertDelete.searchPreNode(L, "월");
    classLinkedInsertDelete.insertMiddleNode(L, pre, "수");
    classLinkedInsertDelete.printList(L); getchar(); // L = (월, 화, 수, 목, 금)

    printf("(5) 마지막 노드 '일' 삽입! \n");
    classLinkedInsertDelete.insertLastNode(L, "일");
    classLinkedInsertDelete.printList(L); getchar(); // L = (월, 화, 수, 목, 금, 일)

    printf("(6) 마지막 노드 '일' 삭제! \n");
    classLinkedInsertDelete.deleteLastNode(L);
    classLinkedInsertDelete.printList(L); getchar();  // L = (월, 화, 수, 목, 금)

    printf("(7) 리스트에서 중간 노드 '목' 노드 삭제! \n");
    old = classLinkedInsertDelete.searchNode(L, "목");
    classLinkedInsertDelete.deleteNode(L, old);
    classLinkedInsertDelete.printList(L); getchar();  // L = (월, 화, 수, 금)

    //printf("(8) 리스트 원소를 역순으로 변환하기! \n");
    //reverse(L);
    //printList(L); getchar();   // L = (금, 월, 화, 수, 목)

    printf("(8) 리스트 공간을 해제하여, 공백 리스트 상태로 만들기! \n");
    classLinkedInsertDelete.freeLinkedList_h(L);
    classLinkedInsertDelete.printList(L);   // L = ()

    getchar();

    return 0;
}
