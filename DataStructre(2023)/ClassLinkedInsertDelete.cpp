#include "h_ClassLinkedInsertDelete.h"

int main()
{
    // �����ڷᱸ�� ����, ���� Ŭ���� ���� ����
    ClassLinkedInsertDelete classLinkedInsertDelete;

    linkedList_h* L;
    listNode* old;
    listNode* pre;

    
    L = classLinkedInsertDelete.createLinkedList_h();
    printf("(1) ���� ����Ʈ �����ϱ�! \n");
    classLinkedInsertDelete.printList(L); getchar();   // L = ()

    printf("(2) ����Ʈ�� 3���� ���('ȭ','��','��') �߰��ϱ�! \n");
    classLinkedInsertDelete.insertLastNode(L, "ȭ");
    classLinkedInsertDelete.insertLastNode(L, "��");
    classLinkedInsertDelete.insertLastNode(L, "��");
    classLinkedInsertDelete.printList(L); getchar();  // L = ( ȭ, ��, ��)

    printf("(3) ù��° ��忡 '��' ����! \n");
    classLinkedInsertDelete.insertFirstNode(L, "��");
    classLinkedInsertDelete.printList(L); getchar();  // L = (��, ȭ, ��, ��)

    printf("(4) 'ȭ', '��' ���̿� '��' �߰� ��� ����! \n");
    pre = classLinkedInsertDelete.searchPreNode(L, "��");
    classLinkedInsertDelete.insertMiddleNode(L, pre, "��");
    classLinkedInsertDelete.printList(L); getchar(); // L = (��, ȭ, ��, ��, ��)

    printf("(5) ������ ��� '��' ����! \n");
    classLinkedInsertDelete.insertLastNode(L, "��");
    classLinkedInsertDelete.printList(L); getchar(); // L = (��, ȭ, ��, ��, ��, ��)

    printf("(6) ������ ��� '��' ����! \n");
    classLinkedInsertDelete.deleteLastNode(L);
    classLinkedInsertDelete.printList(L); getchar();  // L = (��, ȭ, ��, ��, ��)

    printf("(7) ����Ʈ���� �߰� ��� '��' ��� ����! \n");
    old = classLinkedInsertDelete.searchNode(L, "��");
    classLinkedInsertDelete.deleteNode(L, old);
    classLinkedInsertDelete.printList(L); getchar();  // L = (��, ȭ, ��, ��)

    //printf("(8) ����Ʈ ���Ҹ� �������� ��ȯ�ϱ�! \n");
    //reverse(L);
    //printList(L); getchar();   // L = (��, ��, ȭ, ��, ��)

    printf("(8) ����Ʈ ������ �����Ͽ�, ���� ����Ʈ ���·� �����! \n");
    classLinkedInsertDelete.freeLinkedList_h(L);
    classLinkedInsertDelete.printList(L);   // L = ()

    getchar();

    return 0;
}
