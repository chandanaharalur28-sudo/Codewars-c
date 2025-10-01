unsigned total_amount_visible(unsigned t_n, unsigned no_s) {
int n=(no_s+1)-t_n;
int i,sum=0;
for(i=1;i<=no_s;i++)
  sum=sum+i;
  
return sum-n;


}
