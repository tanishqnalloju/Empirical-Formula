/*Determination of Empirical Formula of Hydrocarbons and other Organic Compunds*/

   #include<stdio.h>
   #include<conio.h>
   #include<stdlib.h>
   #include<math.h>

      int func(float x);

	void main()
	{
	 clrscr();

	 int a,i,ele_mol[10],emp_num[10];
	 char ele_name[10];
	 float ele_comp[10],sum,ele_div1[10],ele_div2[10],m;

	 printf("Enter number of different elements present in the given compound:");
	 scanf("%d",&i);

	 for(a=0,sum=0;a<i;a++)
	 {
	  printf("\nEnter the symbol of element:");
	  scanf("%c",&ele_name[a]);
	  printf("\nEnter the molecular weight of element:");
	  scanf("%d",&ele_mol[a]);
	  printf("\nEnter the percentage composition of the element present in the compound:");
	  scanf("%f",&ele_comp[a]);
	  sum=sum+ele_comp[a];
	 }

	 if(sum<99.99)
	 {
	  printf("\nCompound with such a composition is not feasible");
	  exit(0);
	 }

	 for(a=0;a<i;a++)
	 {
	  if(ele_mol[a]<0||ele_comp[a]<0)
	  {
	   printf("The given input is invalid");
	   exit(0);
	  }
	 }

	 for(a=0;a<i;a++)
	 {
	  ele_div1[a]=ele_comp[a]/ele_mol[a];
	 }

	 for(a=1,m=ele_div1[0];a<i;a++)
	 {
	  if(ele_div1[a]<m)
	  m=ele_div1[a];
	 }

	 for(a=0;a<i;a++)
	 {
	  ele_div2[a]=ele_div1[a]/m;
	 }

	 for(a=0;a<i;a++)
	 {
	  emp_num[a]=func(ele_div2[a]);
	 }

	 printf("\n The empirical formula of the element:");

	 for(a=0;a<i;a++)
	 {
	  printf("%c%d",ele_name[a],emp_num[a]);
	 }

	 getch();
	}

       int func( float x)
       {
	return x+0.5;
       }