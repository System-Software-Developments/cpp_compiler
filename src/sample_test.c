int test(int x, int y)
 {
 	int z[2] = {1};
 	z[1] = 7;
 	return z[1];
 }
int main()
{

 	int z[2] = {1};
	int a[2][2]={0};
	a[1][1] = test(1,2) + a[1][0];
 	return 1;
 }

 /*

 

  int x,y;
	x = 3 + 2*x;
	x++;
	x = y++;
	//if((x == 1) && (y==2))
	if(x==0)
	{
		

		m++;
			if(x<4)
			{
				m =0;
				int l;
				if(56 !=2)
				{
					l++;
					l=m+x;
				}
				l = 0;
			}*/