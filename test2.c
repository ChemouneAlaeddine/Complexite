int orderG(){
return 4;}

int sizeG(){
return 4;}

int are_adjacent(int u, int v){
  return (((u!=4)&&(v!=4))||((u==3)&&(v==4))||((u==4)&&(v==3)));
}