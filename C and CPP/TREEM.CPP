#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct binary_search_tree
{
int info;
struct binary_search_tree *lchild;
struct binary_search_tree *rchild;
}bstree;
void create(bstree **tree,int x)
{
bstree *ptr,*temp;
ptr=(bstree *)malloc(sizeof(bstree));
ptr->info=x;
ptr->lchild=NULL;
ptr->rchild=NULL;
temp=*tree;
if(*tree==NULL)
{
*tree=ptr;
return;
}
while(temp->info!=x)
{
if(temp->info>=x)
{
if(temp->lchild!=NULL)
{
temp=temp->lchild;
}
else
{
temp->lchild=ptr;
return;
}
}
else
{
if(temp->rchild!=NULL)
{
temp=temp->rchild;
}
else
{
temp->rchild=ptr;
return;
}
}
}
}
void preorder(bstree *tree)
{
if(tree!=NULL)
{
printf("%d\t",tree->info);
preorder(tree->lchild);
preorder(tree->rchild);
}
}
void inorder(bstree *tree)
{
if(tree!=NULL)
{
inorder(tree->lchild);
printf("%d\t",tree->info);
inorder(tree->rchild);
}
}
void postorder(bstree *tree)
{
if(tree!=NULL)
{
postorder(tree->lchild);
postorder(tree->rchild);
printf("%d\t",tree->info);
}
}
int count_nodes(bstree *tree)
{
if(tree==NULL)
return 0;
else
return(count_nodes(tree->lchild)+count_nodes(tree->rchild)+1);
}
int count_leafnodes(bstree *tree)
{
if(tree==NULL)
 return 0;
else if(tree->lchild==NULL&&tree->rchild==NULL)
return 1;
else
return(count_leafnodes(tree->lchild)+count_leafnodes(tree->rchild));
}
int count_non_leafnodes(bstree *tree)
{
if(tree==NULL)
 return 0;
else if(tree->lchild==NULL&&tree->rchild==NULL)
return 0;
else
return(count_non_leafnodes(tree->lchild)+count_non_leafnodes(tree->rchild)+1);
}
bstree *max_node(bstree *tree)
{
if(tree==NULL||tree->rchild==NULL)
return tree;
else
return (max_node(tree->rchild));
}
bstree *min_node(bstree *tree)
{
if(tree==NULL||tree->lchild==NULL)
return tree;
else
return (min_node(tree->lchild));
}
void del_from_bst(bstree **tree,int x)
{
bstree *temp;
if(*tree==NULL)
{
printf("nothing to delete");
return;
}
else if(x<((*tree)->info))
del_from_bst(&(*tree)->lchild,x);
else if(x>((*tree)->info))
del_from_bst(&(*tree)->rchild,x);
else if((*tree)->lchild &&(*tree)->rchild)
{
temp=max_node((*tree)->lchild);
(*tree)->info=temp->info;
del_from_bst(&(*tree)->lchild,temp->info);
}
else
{
temp=*tree;
if((*tree)->lchild==NULL && (*tree)->rchild==NULL)
*tree=NULL;
else if((*tree)->lchild!=NULL)
*tree=(*tree)->lchild;
else if((*tree)->rchild!=NULL)
{
*tree=(*tree)->rchild;
}
free(temp);
}
}
int main()
{
int choice,n,x;
char ans;
bstree *tree=NULL;
clrscr();
do
{
printf("\n1.create\n2.preorder\n3.inorder\n4.postorder\n5.count node\n6.count leaf node\n7.count non-leaf nodes\n8.max node\n9.min node\n10.delete node\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the element:");
scanf("%d",&n);
create(&tree,n);
break;
case 2:
printf("\ndisplay preorder:\n\t");
preorder(tree);
break;
case 3:
printf("\ndisplay inorder:\n\t");
inorder(tree);
break;
case 4:
printf("\nDisplay in postorder form:\n\t");
postorder(tree);
break;
case 5:
n=count_nodes(tree);
printf("\nCount of nodes: %d",n);
break;
case 6:
n=count_leafnodes(tree);
printf("\nCount of leaf nodes: %d",n);
break;
case 7:
n=count_non_leafnodes(tree);
printf("\nCount of non-leaf nodes: %d",n);
break;
case 8:
bstree *p;
p=max_node(tree);
printf("\nMax node is: %d",p->info);
break;
case 9:
bstree *q;
q=min_node(tree);
printf("\nMin node is: %d",q->info);
break;
case 10:
printf("\nEnter the node u want to deleted\n");
scanf("%d",&n);
del_from_bst(&tree,n);
printf("\nDeleted");
break;
}
printf("\nDo u want to continue? ");
ans=getche();
}while(ans=='Y'||ans=='y');
return 0;
}