                            
#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
int a[10][10],n;
void bfs(int);
void main()
{
int i,j,src;
clrscr();
printf(&quot;\nenter the no of nodes:\t&quot;);
scanf(&quot;%d&quot;,&amp;n);
printf(&quot;\nenter the adjacency matrix:\n&quot;);
for(i=1;i&lt;=n;i++)
{
for(j=1;j&lt;=n;j++)
{
scanf(&quot;%d&quot;,&amp;a[i][j]);
}
}
printf(&quot;\nenter the source node:\t&quot;);
scanf(&quot;%d&quot;,&amp;src);
bfs(src);
getch();
}
void bfs(int src)
{
int q[10],f=0,r=-1,vis[10],i,j;
for(j=1;j&lt;=n;j++)
{
vis[j]=0;
}
vis[src]=1;
r=r+1;
q[r]=src;
while(f&lt;=r)
{
i=q[f];
f=f+1;
for(j=1;j&lt;=n;j++)
{
if(a[i][j]==1&amp;&amp;vis[j]!=1)
{
vis[j]=1;
r=r+1;
q[r]=j;
}
}
}
for(j=1;j&lt;=n;j++)
{
if(vis[j]!=1)
{
printf(&quot;\nnode %d is not reachable\n&quot;,j);
}
else
{
printf(&quot;\nnode %d is reachable\n&quot;,j);
}
}
}

