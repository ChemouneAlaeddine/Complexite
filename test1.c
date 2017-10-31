int orderG(){
return 3;}

int sizeG(){
return 3;}

int are_adjacent(int u, int v){
  return (((u==1)&&(v==2))||((u==2)&&(v==1))||((u==1)&&(v==3))||((u==3)&&(v==1)));
}