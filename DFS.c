#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
int a[10][10],n,vis[10];
int dfs(int);
void main()
{
int i,j,src,ans;
clrscr();
for(j=1;j&lt;=n;j++)
{
vis[j]=0;
}
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
ans=dfs(src);
if(ans==1)
{
printf(&quot;\ngraph is connected\n&quot;);
}
else
{
printf(&quot;\ngragh is not connected\n&quot;);
}
getch();
}
int dfs(int src)
{
int j;
vis[src]=1;
for(j=1;j&lt;=n;j++)
{
if(a[src][j]==1&amp;&amp;vis[j]!=1)
{
dfs(j);
}
}
for(j=1;j&lt;=n;j++)
{
if(vis[j]!=1)
{
return 0;
}
}
return 1;
}
