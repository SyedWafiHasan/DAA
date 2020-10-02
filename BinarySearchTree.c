#include<stdio.h>
#include<stdlib.h>
typedef struct btree
{
    int data;
    struct btree* left;
    struct btree* right;
}node;
node *root,*ptr,*pptr,*nev;
void create()
{
    if(root==NULL)
    {
        root=(node*)malloc(sizeof(node));
        printf("Enter data : ");
        scanf("%d",&root->data);
        root->left=NULL;
        root->right=NULL;
    }
    else
    {
        root=(node*)malloc(sizeof(node));
        printf("Enter data : ");
        scanf("%d",&nev->data);
        root->left=NULL;
        root->right=NULL;
        ptr=root;
        while(ptr!=NULL)
        {
            pptr=ptr;
            if(nev->data<ptr->data)
            {
                ptr=ptr->left;
                if(ptr==NULL)
                    pptr->left=nev;
            }
            else
            {
                ptr=ptr->right;
                if(ptr==NULL)
                    pptr->right=nev;
            }
        }
    }
}
void inorder(node *t)
{
    if(t!=NULL)
    {
        inorder(t->left);
        printf("%d\n",t->data);
        inorder(t->right);
    }
    getch();
}
void preorder(node *t)
{
    if(t!=NULL)
    {
        printf("%d\n",t->data);
        preorder(t->left);
        preorder(t->right);
    }
}
void postorder(node *t)
{
    if(t!=NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf("%d\n",t->data);
    }
}
int main()
{
    int ch=0;
    while(1)
    {
        root=NULL;
        printf("1. Create");
        printf("\n2. Inorder");
        printf("\n3. Preorder");
        printf("\n4. Postorder");
        printf("\n5. Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        if(ch==1)
            create();
        else if(ch==2)
            inorder(root);
        else if(ch==3)
            preorder(root);
        else if(ch==4)
            postorder(root);
        else
            exit(0);
    }
    return 0;
}
