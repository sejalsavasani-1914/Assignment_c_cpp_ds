#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *l;
struct node *r;
};

void preorder(struct node *);
void inorder(struct node *);
void postorder(struct node *);

void main()
{
int op;
struct node *a,*b,*c,*d,*e,*f,*g,*h,*i,*j,*k,*l,*m,*n,*o,*t;
a=(struct node *)malloc(sizeof(struct node));
b=(struct node *)malloc(sizeof(struct node));
c=(struct node *)malloc(sizeof(struct node));
d=(struct node *)malloc(sizeof(struct node));
e=(struct node *)malloc(sizeof(struct node));
f=(struct node *)malloc(sizeof(struct node));
g=(struct node *)malloc(sizeof(struct node));
h=(struct node *)malloc(sizeof(struct node));
i=(struct node *)malloc(sizeof(struct node));
j=(struct node *)malloc(sizeof(struct node));
k=(struct node *)malloc(sizeof(struct node));
l=(struct node *)malloc(sizeof(struct node));
m=(struct node *)malloc(sizeof(struct node));
n=(struct node *)malloc(sizeof(struct node));
o=(struct node *)malloc(sizeof(struct node));

t=a;
a->data=1;
a->l=b;
a->r=c;

b->data=2;
b->l=d;
b->r=e;


c->data=3;
c->l=f;
c->r=g;

d->data=4;
d->l=h;
d->r=i;

e->data=5;
e->l=j;
e->r=k;

f->data=6;
f->l=l;
f->r=m;

g->data=7;
g->l=n;
g->r=o;

h->data=8;
h->l=NULL;
h->r=NULL;

i->data=9;
i->l=NULL;
i->r=NULL;

j->data=10;
j->l=NULL;
j->r=NULL;

k->data=11;
k->l=NULL;
k->r=NULL;

l->data=12;
l->l=NULL;
l->r=NULL;

m->data=13;
m->l=NULL;
m->r=NULL;

n->data=14;
n->l=NULL;
n->r=NULL;

o->data=15;
o->l=NULL;
o->r=NULL;

printf("preorder is\n");
preorder(t);
printf("\n\ninorder is\n");
inorder(t);
printf("\n\npostorder is \n");
postorder(t);
printf("\n");
}

void preorder(struct node*t)
{
if(t==NULL)
{
printf("Empty tree\n");
}

else
{
	printf("%d, ",t->data);
	if(t->l!=NULL)
	{
	preorder(t->l);
	}
	if(t->r!=NULL)
	{
	preorder(t->r);
	}
	//printf("%c",t->data);
}
}


void inorder(struct node*t)
{
if(t==NULL)
{
printf("Empty tree\n");
}

else
{
	if(t->l!=NULL)
	{
	preorder(t->l);
	}
	printf("%d, ",t->data);
	if(t->r!=NULL)
	{
	preorder(t->r);
	}
	//printf("%c",t->data);
}
}

void postorder(struct node*t)
{
if(t==NULL)
{
printf("Empty tree\n");
}
else
{
	if(t->l!=NULL)
	{
	postorder(t->l);
	}
	if(t->r!=NULL)
	{
	postorder(t->r);
	}
	
}
printf("%d, ",t->data);
}